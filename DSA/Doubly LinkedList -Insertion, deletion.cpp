// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
       int data;
       Node *prev;
       Node *next;
       Node(int data){
           this->data = data;
           this->prev = NULL;
           this->next = NULL;
       }
};
//get Length of the DLL
int getLength(Node* head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

//Insertion at head
void insertAtHead(Node *&head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
//Insert at tail
void insertAtTail(Node *&tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail=temp;
}

//Insert at position
void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
//Delete a node
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

// traversing the doubly linked list
void print(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = head;
    print(head);
    insertAtHead(head, 11);
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtPosition(tail, head, 3, 5);
    print(head);
    deleteNode(2,head);
    print(head);
    
    
    
    cout<<getLength(head)<<endl;
    return 0;
}