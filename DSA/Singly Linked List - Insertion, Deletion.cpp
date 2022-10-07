#include <iostream>
using namespace std;

class LinkedListNode{
    public:
        int data;
        LinkedListNode *next;
        LinkedListNode(int data){
            this->data = data;
            this->next = NULL;
        }
        ~LinkedListNode(){
            int value = this->data;
            //memory free
            if(this->data != NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"Deleted "<<value<<endl;
        }
};
// insert at head/beginning
void insertAtHead(LinkedListNode * &head, int data){
    LinkedListNode *temp = new LinkedListNode(data);
    temp->next = head;
    head = temp;
}
//insert at end/tail
void insertAtEnd(LinkedListNode *&tail, int data){
    LinkedListNode *temp = new LinkedListNode(data);
    tail->next = temp;
    tail = tail->next;
}
//Insert at middle
void insertAtPosition(LinkedListNode *&head, LinkedListNode* & tail, int position, int data){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    LinkedListNode *temp = head;
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtEnd(tail, data);
        return;
    }
    LinkedListNode *node = new LinkedListNode(data);
    node->next = temp->next;
    temp->next = node;
}
//deleting a node using position
void deleteNode(int position, LinkedListNode *& head, LinkedListNode *&tail){
    //deleting start node
    if(position == 1){
        LinkedListNode *temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
    }
    //deleting any node except first
    else{
        LinkedListNode *curr = head;
        LinkedListNode *prev = NULL;
        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete(curr);
    }
}
//traversing a linkedlist
void printList(LinkedListNode *&head){
    LinkedListNode *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    LinkedListNode *node1 = new LinkedListNode(100); 
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    LinkedListNode *head = node1;
    LinkedListNode *tail = node1;
    printList(head);
    //insertion
    insertAtHead(head, 12);
    printList(head);
    insertAtHead(head,15);
    printList(head);
    insertAtEnd(tail,200);
    printList(head);
    insertAtPosition(head,tail,3,150);
    printList(head);
    insertAtPosition(head,tail,1,1500);
    printList(head);
    insertAtPosition(head,tail,5, 1000);
    printList(head);
    insertAtPosition(head,tail,8,2000);
    printList(head);
    deleteNode(8, head, tail);
    printList(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}