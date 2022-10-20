//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    bool issafe(int row,int col,vector<vector<int>> &board,vector<vector<int>>&ans,int n){
        //for checking in row
        int x=row,y = col;
        while(y>=0){
            if(board[x][y]==1){
                return false;
            }
            y--;
        }
        x=row;
        y=col;
        while(x>=0 &&y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
        //for checking for left lower diagonal for this the value of col decrease and row increases
        x=row;
        y=col;
        while(x<n&&y>=0){
            if(board[x][y]==1)
                return false;
            x++;
            y--;
        }
        return true;
    }
    void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n,vector<int> temp){
        //base case
       if(col==n){
            ans.push_back(temp);
            return;
        }
        //now we will place a queen in each column
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,ans,n)){
                temp.push_back(row+1);
                board[row][col]=1;
                solve(col+1,board,ans,n,temp);
                temp.pop_back();
                board[row][col]=0;
            }
        }
    }
public:
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
         vector<int>temp;
        vector<vector<int>> board(n,vector<int>(n,0));
        solve(0,board,ans,n,temp);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends