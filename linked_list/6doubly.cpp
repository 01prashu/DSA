#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
int getlength(node *head)
{
    int len=0;
    node *t=head;
    while(t !=NULL)
    {
        len++;
        t=t->next;
    }
    return len;
}
void display(node *head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
void insert_head(node *  &head , int d)
{
    node *nn=new node(d);
    nn->next=head;
    head->prev=nn;
    head=nn;
}
void insert_last(node * &tail , int d)
{
    node *n1=new node(d);
    tail->next=n1;
    n1->prev=tail;
    tail=n1;
}
void insert_pos(node *&tail,node *&head , int data , int pos)
{
    if(pos==1)
    {
        insert_head(head , data);
        return ;
    }
    int c=1;
    node *t=head;
    while(c<pos-1)
    {
        t=t->next;
        c++;
    }
    if(t->next==NULL)
    {
        insert_last(tail , data);
        return;
    }

    node *node_to_insert=new node(data);
    node_to_insert->next=t->next;
    t->next->prev=node_to_insert;
    t->next=node_to_insert;
    node_to_insert->prev=t;
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insert_head(head ,20);
    insert_head(head ,30);
    insert_head(head ,40);
    display(head);
    insert_last(tail ,40);
    insert_last(tail ,50);
    display(head);
    insert_pos(tail , head ,200,3);
    display(head);
    insert_pos(tail ,head ,201 ,8);
    display(head);
    cout<<getlength(head)<<endl; 
    
    
 return 0;
}