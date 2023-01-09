#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insert_last(node *&tail, int data)
{
    node *nn = new node(data);
    tail->next = nn;
    tail = nn;
}
void display(node *head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << endl;
}
int give_product(int d)
{
    int prod=1 , res=0;
    while(d != 0)
    {
        res=d%10;
        prod=prod*res;
        d=d/10;
    }
    return prod;
}
void prod_ele(node *head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<give_product(t->data)<<"->";
        t=t->next;
    }
    cout<<endl;
}
void produ_all_ele(node *head)
{
    node*t=head;
    int prod=1;
    while(t !=NULL)
    {
        prod=prod*t->data;
        t=t->next;
    }
    cout<<"Product Of All Element is: "<<prod<<endl;
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insert_last(tail ,11);
    insert_last(tail ,23);
    insert_last(tail ,35);
    insert_last(tail ,45);
    display(head);
    prod_ele(head);
    produ_all_ele(head);
    return 0;
}