#include<iostream>
using namespace std;
//Delete By values
class node
{
    public:
    int data;
    node *next;
    node (int f)
    {
        this->data=f;
        this->next=NULL;
    }
};
void traverse(node *head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
void deletefirst(node *head)
{
    
    if(head==NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *temp=head;
        head=head->next;
        delete temp;
    }
}
node * insert_last(node *tail , int data)
{

    node *n1=new node(data);
    tail->next=n1;
    tail=n1;
    return tail;
}
node * delete_value(node *head , int value)
{
    /*
    // ##***Logic 1*****
    node *p=NULL;
    node *q=head;
    while(q->data !=value)
    {
        p=q;
        q=q->next;
    }
    p->next=q->next;
    q->next=NULL;
    */

   //##Logic 2
   //For 1st position we need better logic so we can delete any node
   node *temp=head;
   if(temp->data==value)
   {
     deletefirst(head);
   }
   else
   {
       while(temp!=NULL)
       {
          if(temp->next->data==value)
          {
             node *taragated=temp->next;
             temp->next=taragated->next;
             delete taragated;
          }
          temp=temp->next;
       }
   }
   return head;
  
}

int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    tail=insert_last(tail ,20);
    tail=insert_last(tail ,30);
    tail=insert_last(tail ,40);
    tail=insert_last(tail ,50);
    traverse(head);
    head=delete_value(head ,30);
    traverse(head);
    head=delete_value(head ,50);
    traverse(head);
    head=delete_value(head ,10);
    traverse(head);
 return 0;
}