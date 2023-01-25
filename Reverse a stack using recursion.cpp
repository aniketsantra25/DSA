void insertAtBottom(stack<int>& stack, int top){
    if(stack.empty()){
        stack.push(top);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, top);
    stack.push(num);

}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(!stack.empty()){
        int top = stack.top();
        stack.pop();
        reverseStack(stack);
        insertAtBottom(stack, top);
    }
    
}
