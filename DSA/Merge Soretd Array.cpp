class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int size = m+n-1;
        m--;
        n--;
        while(m>=0 && n>=0){
            if(nums1[m]<nums2[n]){
                nums1[size] = nums2[n];
                n--;
            }
            else{
                nums1[size] = nums1[m];
                m--;
            }
            size--;
        }
        while(m>=0){
            nums1[size] = nums1[m];
            size--;
            m--;
        }
        while(n>=0){
            nums1[size] = nums2[n];
            size--;
            n--;
        }
    }
};