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
public:
    int getLength(ListNode* head){
        int count = 0;
        while(head!=NULL){
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL){
            return head;
        }
        if(head->next == NULL){
            return NULL;
        }
        int len = getLength(head);
        cout<<len<<endl;
        len = len/2;
        int count = 0;
        ListNode* temp = head;
        //ListNode* curr = NULL;
        while(count<len-1){
            //curr = temp;
            temp = temp->next;
            count++;
        }
        temp->next = temp->next->next;
        
        return head;
    }
};