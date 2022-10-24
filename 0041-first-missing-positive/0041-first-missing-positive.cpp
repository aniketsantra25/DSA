class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size=nums.size();
        bool one=false;
        for(int i=0;i<size;i++){
            if(nums[i]==1)
                one=true;
            if(nums[i]<1 || nums[i]>size)
                nums[i]=1;
        }
        if(!one)
            return 1;
        for(int i=0;i<size;i++){
            int index=abs(nums[i]);
            nums[index-1]=-abs(nums[index-1]);
        }
        for(int i=0;i<size;i++){
            if(nums[i]>0)
                return i+1;
        }
        return size+1;
    }
};