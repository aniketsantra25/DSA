class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
         vector<string> ans;
        if(s.length()<11) return ans;
        
        unordered_set<string> st;
        unordered_set<string> uni;
        
        for(int i=0; i<=s.size()-10; i++){
            string temp = s.substr(i, 10);
            if(st.find(temp) != st.end()){
                uni.insert(temp);
            }else{
                st.insert(temp);
            }
        }
        
        for(auto e: uni){
            ans.push_back(e);
        }
        return ans;
 
    }
};