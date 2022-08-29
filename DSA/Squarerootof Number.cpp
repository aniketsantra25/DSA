class Solution {
public:
    int mySqrt(int x) {
        float s = 0, e = x;
        long long int mid = s + (e - s)/2;
        int ans;
        cout<<mid<<endl;
        while(s<=e){
            long long int res = mid * mid;
            if(res == x)
                return mid;
            else if(res<x){
                ans = mid;
                s = (mid + 1); 
            }
            else {
                e = (mid - 1);
            }
            mid = (s + (e - s)/2); 
        }
        cout<<mid<<endl;
        return ans;
        
    }
};