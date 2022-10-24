//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>count(n,0);

     vector<int>ans;

     for(int i=0;i<n;i++){

         count[arr[i]]++;

     }

     for(int i=0; i<n;i++){

         if(count[i]>1)

         ans.push_back(i);

     }

     

     if(ans.empty())

     return {-1};

     else

     return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends