class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        for(int i=0;i<n;i++){
            cout<<"i "<<i<<endl;
            if(leftsum == sum-leftsum-nums[i])
                return i;
            leftsum += nums[i];
            cout<<leftsum<<endl;
        }
        return -1;
    }
};