class Solution {
public:
  string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(auto x: nums){
            v.push_back(to_string(x));
        }
        
        sort(v.begin(), v.end(), compare);
        
        string res; 
        for(auto x : v){
            res +=x;
        }
        
        //input = [0,0] Expected : "0", Not "00"
        //if we don't do the size check than it will return "" string if all elements are 0. 
        while(res[0]=='0' && res.size()>1){
            res.erase(0, 1);
        }
        
        return res;
    }
    
    static  bool compare(string num1, string num2){
        return num1 + num2 > num2 + num1;
    }
    
};