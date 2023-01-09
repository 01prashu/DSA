#include<iostream>
using namespace std;
//insert at last 
class node
{
    public:
    int data;
    node *next;
    node(int d=0)
    {
        this->data=d;
        next=NULL;
    }
};
void traverse(node*head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_last( node *tail ,int d)
{
//    node *t=head;
//     node *n1 =new node(d);
//     while(t->next !=NULL)
//     {
//         t=t->next;
//     }
//     t->next=n1;
    node *n1=new node(d);
    tail->next=n1;
    tail=n1;
}
int main()
{
    node *first=new node(10);
    node *head=first;
    node *tail=first;
    traverse(head);
    insert_last(tail ,20);
    insert_last(tail , 30);
    traverse(head);
    insert_last(tail ,40);
    insert_last(tail , 50);
    traverse(head);

 return 0;
}