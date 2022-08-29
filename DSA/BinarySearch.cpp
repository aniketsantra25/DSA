//Binary search
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int key){
    int start = 0, end = n-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(a[mid] == key){
            return mid;
        }
        if(a[mid]<key){
            start = mid+1;
        }
        else if(a[mid]>key){
            end = mid-1;
        } 
        mid = start+(end-start)/2;
    }
    return -1;
}
int main() {
    // Write C++ code here
    int even[] = {2,4,5,6,8,10};
    int odd [] = {4, 13, 19, 20, 21};
    
    int evenIndex = binarySearch(even, 6, 20);
    cout<<"Index of 20 is "<<evenIndex<<endl;
    
    int oddIndex = binarySearch(odd, 5, 13);
    cout<<"Index of 13 is "<<oddIndex<<endl;

    return 0;
}