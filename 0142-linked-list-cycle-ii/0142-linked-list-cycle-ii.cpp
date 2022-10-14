/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* loopDetection(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        //ListNode* temp = head;
        while(fast!=NULL && slow!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(fast == slow){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* intersection = loopDetection(head);
        if(intersection == NULL){
            return NULL;
        }
        ListNode* slow = head;
        while(slow!=intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
};