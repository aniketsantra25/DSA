class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> visited(26,0);
        int i=0;
        int res = 0;
        int maxCount = 0;
        for(int j=0;j<s.length();j++){
            visited[s[j] - 'A']++;
            maxCount = max(maxCount, visited[s[j] - 'A']);
            while(j-i+1-maxCount > k){
               visited[s[i] - 'A']--;
               i++;
            }
            res = max(res,j-i+1);
        }
        return res;
    }
};