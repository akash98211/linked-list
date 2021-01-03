SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head,int value) {
  SinglyLinkedListNode *curr;
  SinglyLinkedListNode *newnode = new SinglyLinkedListNode (0);
  newnode->data=value;
  if(head==NULL || head->data >= newnode->data)
  {
    newnode->next=head;
    head=newnode;
  }
  else
  {
    curr=head;
    while(curr->next!=NULL && curr->next->data<newnode->data)
    {
      curr=curr->next;
    }
    newnode->next=curr->next;
    curr->next=newnode;
  }
  return head;
}