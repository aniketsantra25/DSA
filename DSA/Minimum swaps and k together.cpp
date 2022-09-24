class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
        int goodNumbers = 0;
        int badNumbers = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k)
                goodNumbers++;
        }
        //counting in the current window
        for(int i=0;i<goodNumbers;i++){
            if(arr[i]>k)
                badNumbers++;
        }
        int i=0, j=goodNumbers, ans = badNumbers;
        while(j<n){
            if(arr[i]>k)
                badNumbers--;
            if(arr[j]>k)
                badNumbers++;
            ans = min(ans,badNumbers);
            i++;
            j++;
        }
        return ans;
    }
};