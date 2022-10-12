class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        if(n<3)
            return res;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
            if(nums[i]>0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i+1, k = n-1;
            while(j<k){
                if (j > (i + 1) && nums[j] == nums[j - 1])
                {
                    j++;
                    continue;
                }
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                }
                if(nums[i]+nums[j]+nums[k]<=0)
                    j++;
                else
                    k--;
            }
        }
        return res;
        
    }
};