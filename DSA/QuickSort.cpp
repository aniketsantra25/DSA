#include <bits/stdc++.h> 
int partition(vector<int> &arr, int s, int e){
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=arr[pivotIndex])
            i++;
        while(arr[j]>arr[pivotIndex])
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}

void solve(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    solve(arr,s,p-1);
    solve(arr,p+1,e);
}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    solve(arr, 0 , arr.size()-1);
    return arr;
}
