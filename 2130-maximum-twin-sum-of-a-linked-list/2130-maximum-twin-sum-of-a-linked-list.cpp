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
    int pairSum(ListNode* head) {
        int maxi=INT_MIN;
        int sum=INT_MIN;
        vector<int> res;
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        for(int i=0,j=res.size()-1 ;i<j; i++,j--){
            sum=res[i]+res[j];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};