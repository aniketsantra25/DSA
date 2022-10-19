int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head == NULL || head->next == NULL){
        return 0;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            break;
        }
    }
    if(fast == NULL || fast->next == NULL)
        return 0;
    int count = 1;
    fast = fast->next;
    while(fast!=slow){
        count++;
        fast = fast->next;
    }
    return count;
}
