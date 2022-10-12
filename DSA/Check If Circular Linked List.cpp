bool isCircular(Node *head)
{
   // Your code here
    if(head==NULL) return 1;

   Node* temp= head->next;

   while(temp!=NULL and temp!=head) {

       temp=temp->next;

   }

   if(temp == head) return 1;

   return 0;
}
