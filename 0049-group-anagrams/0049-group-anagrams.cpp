class Solution 
{
public:
    string helper(string s)
    {
        string x="00000000000000000000000000"; //string of size 26 to generate unique key
        for(char c:s)
            x[c-'a']+=1;
        return x;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto s:strs)
        {
            string x="";
            x=helper(s);
            mp[x].push_back(s);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};