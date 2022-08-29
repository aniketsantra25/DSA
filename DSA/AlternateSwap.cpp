// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
  using namespace std;
  
  void swapAlternate(int a[], int n){
    for(int i=0;i<n-1;i+=2){
      if(i+1<n){
        swap(a[i],a[i+1]);
      }
    }
  }
  
  void printArray(int a[], int n){
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  
  int main()
  {
    //write your code here
    int a[5] = {1,2,3,4,5};
    int b[6] = {1,2,3,4,5,6};
    swapAlternate(a,5);
    printArray(a,5);
    swapAlternate(b,6);
    printArray(b,6);
    
    return 0;
  }