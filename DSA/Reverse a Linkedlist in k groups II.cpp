class Solution {
public:
    int getLen(struct ListNode* head){
        int len = 0;
            while(head!=NULL){
                head = head->next;
                len++;
            }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL){
            return NULL;
        }
        int len = getLen(head);
        if(len<k){
            return head;
        }
        
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        
        while(curr!=NULL && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        head->next = reverseKGroup(next, k);
        return prev;
        
    }
};