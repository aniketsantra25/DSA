#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int N, int count){
   // base case
   if(count == N/2){
      inputStack.pop();
      return;
   }
   int element = inputStack.top();
   inputStack.pop();
   count++;
   solve(inputStack, N, count);
   inputStack.push(element);  // pushes the popped element again back to the stack
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   solve(inputStack, N, count); 
}
