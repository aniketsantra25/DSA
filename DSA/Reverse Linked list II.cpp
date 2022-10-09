class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode *L = head;
        ListNode *prev = head;
        int cnt = 1;
        while(cnt != left){
            L = prev;
            prev = prev->next;
            cnt++;
        }
        ListNode*curr = prev;
        prev = L;
        ListNode*next;
        while(cnt != right+1){//Reverse list
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(left != 1){
            L->next->next = curr;
            L->next = prev;
        }
        else{
            L->next = curr;
            head = prev;
        }
        return head;    }
};