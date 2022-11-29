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
    ListNode* sortList(ListNode* head) {
        vector<int> temp;
        ListNode* curr = head;
        while(curr){
            temp.push_back(curr->val);
            curr = curr->next;
        }
        sort(temp.begin(), temp.end());
        ListNode* node = new ListNode(0, head);
        ListNode* head1 = node;
        node->next = NULL;
         for(int i=0;i<temp.size();i++){
            ListNode* newNode = new ListNode;
            newNode->val = temp[i];
            newNode->next = NULL;
            //cout<<newNode->val<<endl;
            node->next = newNode;
            node = node->next;
            //cout<<node->val<<endl;
        }
        return head1->next;
    }
};