class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing;
        int n = nums.size();
        int sum = n*(n+1)/2;
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
        }
        missing = sum-total;
        return missing;
    }
};