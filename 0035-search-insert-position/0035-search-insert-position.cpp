class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int ans = 0;
        int mid = low+(high-low)/2;
        while(low<=high){
            if(nums[mid] == target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                ans = mid+1;
                low = mid+1;
            }
            else{
                //ans = mid-1;
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }
        return ans;
    }
};