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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL){
            ListNode* curr = temp->next;
            while(curr){
                if(temp->val>curr->val){
                    swap(temp->val, curr->val);
                }
                curr = curr->next;
            }
            temp = temp->next;
        }
        return head;
    }
};