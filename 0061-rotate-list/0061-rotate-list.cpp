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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        if(temp == NULL || temp->next == NULL || k == 0)
            return temp;
        while(temp){
            temp = temp->next;
            count++;
        }
        k = k%count;
        if(k==0)
            return head;
        k = count-k;
        int n = 0;
        temp = head;
        ListNode *x, *y, *prev = NULL;
        while(temp){
            n++;
            if(n==k){
                y=temp;
                x=temp->next;
            }
            prev = temp;
            temp = temp->next;
        }
        y->next = NULL;
        prev->next = head;
        return x;
    }
};