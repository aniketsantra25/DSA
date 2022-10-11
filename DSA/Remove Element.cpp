class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0){
            return 0;
        }
        int i=0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i] == val && nums[j] != val){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            else if(nums[j] == val){
                j--;
            }
            else{
                i++;
            }
        }
        return i;
    }
};