bool canBuy(vector<int>arr, int n, int m, long long mid){
    long long sum = 0;
    int count = 1;
    for(int i=0;i<n;i++){
        if(arr[i]<=mid){
            sum += arr[i];
        }
        else{
            count++;
            if(count>m || sum>mid){
                return false;
            }
            sum = arr[i];
            //i++;
        }
    }
    return true;
}
long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    long long s = 0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    long long e = sum;
    long long ans = -1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(canBuy(arr,n,m,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return ans;
    
}