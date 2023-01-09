#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert_head(node *&head  ,int data)
{
    node *nn=new node(data);
    nn->next=head;
    head=nn;
}
void insert_last(node *&tail , int data)
{
    node *nn=new node(data);
    tail->next=nn;
    tail=nn;
}
void insert_pos(node *&head , node * &tail , int data , int pos)
{
    if(pos==1)
    {
        insert_head(head  ,data);
        return;
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
    else
    {
        node *nn=new node(data);
        nn->next=t->next;
        t->next=nn;
    }
}
void display(node *head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
node* reverse_ll(node *&head , node *&tail )
{
    node* prev=NULL;
    node *curr=head; 
    node *forward=NULL;
    while(curr !=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    tail=head;
    head=prev;

    return head;

}
void count(node *head)
{
    node *t=head;
    int c=0;
    while(t !=NULL)
    {
        c++;
        t=t->next;
    }
    cout<<c<<endl;
}
int main()
{
    node *node1=new node(10);
    node*head=node1;
    node *tail =node1;
    // display(head);
    // insert_head(head ,20);
    // insert_head(head ,30);
    // insert_head(head ,40);
    // display(head);
    insert_last(tail ,20);
    insert_last(tail ,30);
    insert_last(tail ,40);
    // display(head);

    // insert_pos(head ,tail ,100 ,5);
    // display(head);
    insert_pos(head ,tail ,100 ,1);
    display(head);
    head=reverse_ll(head ,tail);
    display(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    count(head);
 return 0;
}