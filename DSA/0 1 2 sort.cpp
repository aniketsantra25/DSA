// 0 1 2 sort or Dutch Netherland Flag problem
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int i=0, j=0, k=n-1;
    while(j<=k){
       if(arr[j] == 0){
           swap(arr[i], arr[j]);
           i++;
           j++;
       }
        else if(arr[j] == 1){
            j++;
        }
        else if(arr[j] == 2){
            swap(arr[j], arr[k]);
            k--;
        }
    }
}