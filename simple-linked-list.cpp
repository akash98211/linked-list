#include <bits/stdc++.h>
  using namespace std;
  
  struct node
  {
      int data;
      struct node *next;
  };
  
 struct node* createlist(struct node *head)
 {
     struct node *newnode , *temp;
     for (int i = 0; i < 6; i++) {
         newnode=(struct node*)malloc(sizeof(struct node));
         
         if(head==NULL)
         return head;
         
         newnode->data=i;
         newnode->next=NULL;
         
         if(head== Null)
         {
             head=newnode;
             temp=head;
         }
         
         temp->next=newnode;
         temp=newnode;
     }
     return head;
 }
  void printlist(struct node * head)
  {
      while(head!=null)
      {
          cout<<head->data<<" ";
          head=head->next;
      }
  }
  int main()
  {
   
        struct node * head=Null;
        head=createlist(head);
        printlist(head);
        
    
    return 0;
  }