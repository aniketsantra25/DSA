class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> visited(256,-1);
        int n = s.length();
        int res=0, start=-1;
        for(int i=0;i<n;i++){
            if(visited[s[i]]>start)
                start = visited[s[i]];
        
        visited[s[i]] = i;
        res = max(res, i-start);
            }
        return res;
        
    }
};