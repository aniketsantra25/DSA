void merge(vector<int>& arr, int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    
    //copy values
    int mainarrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainarrayIndex++];
    }
    for(int i=0;i<len2;i++){
        second[i] = arr[mainarrayIndex++];
    }
    int index1 = 0, index2 = 0;
    mainarrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2])
            arr[mainarrayIndex++] = first[index1++];
        else
            arr[mainarrayIndex++] = second[index2++];
    }
    
    while(index1<len1){
        arr[mainarrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainarrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
    
}

void mergesort(vector<int>& arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    //to sort left part
    mergesort(arr,s,mid);
    //to sort right part
    mergesort(arr,mid+1,e);
    //merge both the parts
    merge(arr,s,e);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mergesort(arr, 0, n-1);
}