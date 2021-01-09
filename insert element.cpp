#include <bits/stdc++.h>
#include <stdlib.h>
  using namespace std;

 class Node
{   public:
    int data;
    Node *next;
};

Node *create_list(Node *head,int x)
{
  Node *new_node,*temp;
  temp = head;
  new_node = (Node*)malloc(sizeof(Node));
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

void INSERT_in_end(Node* head,int x)
{   
    Node *current=head;
    Node *insert_node;
    Node *store=NULL;
    insert_node=(Node*)malloc(sizeof(Node));
    insert_node->data=x;
     
    if(head==NULL)
    return ;
    
    while(current!=NULL)
    {
        if(insert_node->data > current->data && current->next==NULL)
        {
            current->next=insert_node;
            insert_node->next=NULL;
        }
        
        if(insert_node->data > current->data &&  insert_node->data < current->next->data)
        {
            store->data=current->next->data;
            current->next=insert_node;
            insert_node->next=store;
            
        }
        current=current->next;
    }
    
    
}


void printlist( Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
  int n,x;
  cin>>n;
  
    Node *head=NULL;
    
    while(n--)
    {
    cin>>x;
    head = create_list(head,x);
    }
     int y;cin>>y;
     INSERT_in_end(head,y);
    //  INSERT_in_middle(head,y);
    //  INSERT_in_start(head,y);
     printlist(head);
    cout<<endl;
    
  }
    return 0;
}