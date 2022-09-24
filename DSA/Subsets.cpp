class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
        // base case 
        if(index<0){
            ans.push_back(output);
            return;
        }
        //exclude case
        solve(nums, output, index-1, ans);
        
        //include case
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index-1, ans);
        
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = nums.size();
        vector<int> output;
        solve(nums, output, index-1, ans);
        return ans;
    }
};