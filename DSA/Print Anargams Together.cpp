class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string, vector<string>> map;
        for(int i=0;i<string_list.size();i++){
            string s = string_list[i];
            sort(s.begin(),s.end());
            map[s].push_back(string_list[i]);
        }
        vector<vector<string>>res;
        for(auto i:map){
            res.push_back(i.second);
        }
        return res;
    }
};