class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum = 0, lsum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        for(int i=0;i<n;i++){
            sum -= a[i];
            if(lsum == sum){
                return i+1;
            }
            lsum += a[i];
        }
        return -1;
    }

};