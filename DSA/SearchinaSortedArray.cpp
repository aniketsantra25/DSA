class Solution {
public:
    int findPivot(vector<int>& nums){
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        if(nums[start]<=nums[end]){
            return start;
        }
        while(start<end){
            if(nums[mid]>=nums[0])
                start = mid+1;
            else
                end = mid;
            mid = start + (end - start)/2;
        }
        return start;
    }
    int search(vector<int>& nums, int target) {
        int temp = findPivot(nums);
        cout<<temp<<endl;
        int start, end;
        if(target>=nums[temp] && target<=nums[nums.size()-1]){
            start = temp;
            end = nums.size()-1;
        }
        else{
            start = 0;
            end = temp-1;
        }
        cout<<start<<" "<<end<<endl;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(nums[mid] == target)
                return mid;
            if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }
};