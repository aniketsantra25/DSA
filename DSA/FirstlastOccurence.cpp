class Solution {
public:
    int firstOccurence(vector<int> &arr, int n, int k){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int res = -1;
    while(start<=end){
        if(arr[mid] == k){
            res = mid;
            end = mid-1;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        else if(arr[mid]>k){
            end = mid-1;
        }
        //cout<<"mid"<<mid<<endl;
        mid = start + (end-start)/2;
    }
        //cout<<res<<endl;
    return res;
}
int lastOccurence(vector<int> &arr, int n, int k){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int res = -1;
    while(start<=end){
        if(arr[mid] == k){
            res = mid;
            start = mid+1;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        else if(arr[mid]>k){
            end = mid-1;
        }
        //cout<<"mid"<<mid<<endl;
        mid = start + (end-start)/2;
    }
    //cout<<"res2"<<res<<endl;
    return res;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOccurence(nums, nums.size(), target));
        ans.push_back(lastOccurence(nums, nums.size(), target));
        return ans;
    }
};