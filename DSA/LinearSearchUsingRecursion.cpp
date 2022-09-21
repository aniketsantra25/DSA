// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isFound(int arr[], int val, int size){
    if(size == 0){
        return false;
    }
    if(arr[0] == val){
        return true;
    }
    return isFound(arr+1, val, size-1);
}
int main() {
    // Write C++ code here
    int arr[] = {1,2,4,5,3,7};
    int val = 10;
    if(isFound(arr,val,6)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}