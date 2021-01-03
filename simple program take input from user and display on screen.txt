#include <bits/stdc++.h>
#include <stdlib.h>
  using namespace std;

struct node
{
  int data;
  struct node *next;
};

struct node *create_list(struct node *head,int x)
{
  struct node *new_node,*temp;
  temp = head;
  new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = x;
  new_node->next = NULL;
  if(head==NULL)
  {
    head=new_node;
    temp=head;
  }
  else
  {
   while(temp->next!=NULL)
     temp = temp->next;
   temp->next=new_node;
  }
  return head;
}

void PrintMiddle(struct node *head)
{
  struct node *ptr1 = head;
  struct node *ptr2 = head;
  if(head!=NULL)
  {
  while(ptr1!=NULL && ptr1->next!=NULL)
  {
    ptr1 = ptr1->next->next;
    ptr2 = ptr2->next;
  }
  printf("%d\n",ptr2->data);
  }
}

// void printlist( struct node * head)
// {
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

int main()
{
  int t;cin>>t;
  while(t--)
  {
  int n,x;
  cin>>n;
  
    struct node *head=NULL;
    
    while(n--)
    {
    cin>>x;
    head = create_list(head,x);
    }
    
   
//   printlist(head);
   
   PrintMiddle(head);
    cout<<endl;
    
  }
    return 0;
}