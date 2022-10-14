class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
     solve(board);   
    }
    bool solve(vector<vector<char>>&board){
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                if(board[row][col]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(board,row,col,c)==true){
                            board[row][col]=c;
                        if(solve(board)==true) return true;
                        else board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isValid(vector<vector<char>>&board,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c) return false;
            if(board[row][i]==c) return false;
        }
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==c) return false;
            }
        }
        return true;
    }
};