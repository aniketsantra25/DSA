class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        int ans = 0;

        for(auto &it: nums)
        {
            int c = k - it;
            if(mpp[c] > 0)
            {
                ans++; 
                mpp[c]--;
            }
            else mpp[it]++;
        }
        return ans;
    }
};