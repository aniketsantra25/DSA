class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        vector<int> res;
        for(int i=0; i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        if(s1.size()<s2.size()){
            for(auto s:s1){
                if(s2.find(s)!=s2.end())
                    res.push_back(s);
            }
        }
        else{
            for(auto s:s2){
                if(s1.find(s)!=s1.end())
                    res.push_back(s);
            }
        }
        return res;
        
    }
};