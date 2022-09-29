bool findPair(int arr[], int size, int n){
    //code
    sort(arr, arr+size);
    for(int i=0;i<size;i++){
        int currElement = arr[i];
        int toFind = currElement + n;
        int low = 0, high = size-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid] == toFind && mid!=i){
                return true;
            }
            else if(arr[mid] > toFind){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
    return false;
    
}