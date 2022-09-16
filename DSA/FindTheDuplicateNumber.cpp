class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1;
        for(int i=0;i<n;i++){
            int curr = abs(nums[i]);
            if(nums[curr]<0){
                duplicate = curr;
                break;
            }
            nums[curr] *= -1;
        }
        
        for(auto& num:nums)
            num = abs(num);
        return duplicate;
    }
    
};