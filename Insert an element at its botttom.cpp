#include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int element = myStack.top();
    //cout<<element<<endl;
    myStack.pop();
    solve(myStack, x);
    myStack.push(element);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack, x);
    return myStack;
}
