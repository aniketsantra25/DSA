// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, size-1);
}
int main() {
    // Write C++ code here
    int arr[] = {1,2,9,4,5};
    int size = 5;
    if(isSorted(arr, size))
        cout<<"Sorted";
    else{
        cout<<"Not Sorted";
    }
    return 0;
}