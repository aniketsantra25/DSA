
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        if(head == NULL){
            return NULL;
        }
        Node* curr = head;
        Node* prev = head;
        map<int, bool> track;
        while(curr!=NULL){
            if(track[curr->data] == true){
                curr = curr->next;
                prev->next = curr;
            }
            else{
                track[curr->data] = true;
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
