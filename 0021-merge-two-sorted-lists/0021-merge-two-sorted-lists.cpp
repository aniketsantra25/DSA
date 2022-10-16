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
ListNode* solve(ListNode* first, ListNode* second){
   ListNode* curr1 = first;
   ListNode* next1 = curr1 -> next;
   ListNode* curr2 = second;
   
   //if only one element in first list.
   //first LL always contain smaller number
   if (next1 == NULL){
       curr1 -> next = curr2;
       return first;
   }
   
   while(next1 != NULL && curr2 != NULL){
       if(curr2 -> val >= curr1 -> val 
          && curr2 -> val <= next1 -> val ){
           ListNode* temp = curr2 -> next;
           curr2 -> next = next1;
           curr1 -> next = curr2;   
           curr1 = curr1 -> next;
           curr2 = temp;
       }
       else{
           curr1 = curr1 -> next;
           next1 = next1 -> next;
           if(next1 == NULL){
               curr1 -> next = curr2;
               return first;
           }
       }
   }
   return first;
}

    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    if(head1->val <= head2->val){
        return solve(head1,head2);
        //return head1;
    }
    else{
        return solve(head2,head1);
        //return head2;
    }
    }
};