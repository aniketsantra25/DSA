class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        string ans;
        int n = s.length();
        int len = 2*numRows - 2;
        for(int i=0;i<numRows;i++){
            for(int j=0;j+i<n;j += len){
                ans += s[j+i];
                if(i!=0 && i!=numRows -1 && j+len-i<n){
                    ans += s[j+len-i];
                }
            }
        }
        return ans;
    }
};