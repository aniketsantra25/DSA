class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        vector<long long int> ans;
        bool containsZero = false;
        int zeroesCount = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                containsZero = true;
                zeroesCount++;
            }
        }
        long long int prod = 1;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                prod *= nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(containsZero){
                if(nums[i] == 0 && zeroesCount == 1){
                    ans.push_back(prod);
                }
                else if(nums[i] == 0 && zeroesCount>1){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(0);
                }
            }
            else{
                ans.push_back(prod/nums[i]);
            }
        }
        return ans;
    }
};