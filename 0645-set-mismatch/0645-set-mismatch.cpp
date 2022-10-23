class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int missing = 1, duplicate = -1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i]) - 1]>0){
                nums[abs(nums[i]) - 1] *= -1;
            }
            else{
                duplicate = abs(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                missing = i+1;
            }
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};