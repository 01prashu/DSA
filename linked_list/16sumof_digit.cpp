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
void sum_Of_digit(int data)
{
    int res=0;
    while(data !=0)
    {
        res=res +(data%10);
        data=data/10;
    }
    cout<<res<<"->";
}
void sum_of_ele(node *head)
{
    node*t=head;
    while(t !=NULL)
    {
        sum_Of_digit(t->data);
        t=t->next;
    }
}
int main()
{
    node *nod1=new node(10);
    node *head=nod1;
    node *tail=nod1;
    insert_last(tail ,25);
    insert_last(tail ,15);
    insert_last(tail ,71);
    insert_last(tail ,34);
    display(head);
    sum_of_ele(head);
    return 0;
}