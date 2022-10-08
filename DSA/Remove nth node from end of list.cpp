/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
int getLength(ListNode* head){

    int count = 0;
    
    while (head != NULL){
        count++;
        head = head -> next;
    }
    return count;
}
void deleteNode(ListNode* &head, int postion){
    
    ListNode* prev = NULL;
    ListNode* current = head;
    int count = 0;
    
    if (postion == 0){
        head = head -> next;
        current -> next == NULL;
    }
    else {
        
        while (count < postion){
            prev = current;
            current = current -> next;
            count++;
        }
        
        prev -> next = current -> next;
        current -> next == NULL;
    }
}
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {

    int length = (getLength(head) - n);
    deleteNode(head, length);
    
    return head;
  }
};