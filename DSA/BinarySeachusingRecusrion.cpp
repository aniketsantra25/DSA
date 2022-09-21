int binarysearch(int *input, int s, int e, int val){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(input[mid] == val)
        return mid;
    else if(input[mid] > val)
        return binarysearch(input, s, mid-1, val);
    else
        return binarysearch(input,mid+1, e, val);
}
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    return binarysearch(input, 0, n-1, val);
}