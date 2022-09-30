class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    long long count = 0;
	    int j,k;
	    for(int i=0;i<n;i++){
	        j=i+1;
	        k=n-1;
	        while(k>j){
	            if(arr[j] + arr[k]<sum-arr[i]){
	                count += (k-j);
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	    return count;
	}
		 

};