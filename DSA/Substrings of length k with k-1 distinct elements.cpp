class Solution {
  public:
    int countOfSubstrings(string S, int k) {
        // code here
        int res = 0;
        map<char,int> m;
        //checking in current window
        for(int i=0;i<k;i++){
            m[S[i]]++;
        }
        if(m.size() == k-1){
            res += 1;
        }
        //sliding the window
        for(int i=k;i<S.length();i++){
            m[S[i-k]]--;
            m[S[i]]++;
            if(m[S[i-k]] == 0){
                m.erase(S[i-k]);
            }
            if(m.size() == k-1){
                res += 1;
            }
        }
        return res;
    }
};