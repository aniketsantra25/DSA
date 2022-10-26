class Solution {
public:
    int findLongestChain(vector<vector<int>>& A) {
        int  n = A.size() , mx = 0;
        vector<int>dpl(n,1);
        sort(A.begin() , A.end());
        
        for(int i = 0 ;i <= n-1 ; i++){
            for(int j =0 ; j <= i-1 ; j++){
                
                if(A[i][0] > A[j][1]){
                    if( dpl[j]+1 > dpl[i]){
                        dpl[i] = dpl[j] + 1;
                    }
                }
            }
           mx = max(mx , dpl[i]);

        }
        return mx;
    }
};