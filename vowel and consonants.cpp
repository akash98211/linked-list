// Complete the arrangeVowCon function below.

/*
For your reference:

SinglyLinkedListNode {
char data;
SinglyLinkedListNode* next;
};
To create a new node below constructor is provided
SinglyLinkedListNode(char node_data)
*/

bool isvowel(char x)
{
  return (x=='a' || x=='i' || x=='o' || x=='u' || x=='e');
}

SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head)
{
SinglyLinkedListNode *newhead = head;
SinglyLinkedListNode *latestvowel;
SinglyLinkedListNode *curr=head;

//if list is empty
if(head==NULL)
return head;

//check if first characteris vowel of not
if(isvowel(head->data))
latestvowel=head;

//first charachter is not vowel so keep moving till next vowel we will find 
else
 { while(curr->next!=NULL && !isvowel(curr->next->data))
  curr=curr->next;
  
  if(curr->next==NULL)
  return head;
  
  latestvowel = newhead = curr->next;
        curr->next = curr->next->next;
        latestvowel->next = head;
 }
 
 while(curr!=NULL && curr->next!=NULL)
 {
   if(isvowel(curr->next->data))
   {
     if(latestvowel==curr)
     latestvowel=curr=curr->next;
     
     else
     { SinglyLinkedListNode *temp=latestvowel->next;
       latestvowel->next=curr->next;
       latestvowel=latestvowel->next;
       curr->next=curr->next->next;
       latestvowel->next=temp;
        
     }
   }
   else
   curr=curr->next;
 }

return newhead;
}