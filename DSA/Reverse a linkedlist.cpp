//iterative
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    
    
}

//recursive
class Solution
{
    public:
    void reverse(Node*&head,Node *curr, Node *prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        Node *forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
        
    }
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *curr = head;
        Node *prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
    
};