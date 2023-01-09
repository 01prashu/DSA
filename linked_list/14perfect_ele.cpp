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
void insert_node(node *&tail, int data)
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
int check_perfect(int data)
{
    int p=0;
    for(int i=1;i<data;i++)
    {
        if(data %i==0)
        {
            p=p+i;
        }
    }
    if(data==p)
    {
        return 1;
    }
    return -1;
}
void perfect_ele(node *head)
{
    node *t=head;
    int prefect=0;
    while(t != NULL)
    {
        if(check_perfect(t->data)==1)
        {
            cout<<t->data<<" Is A Perfect Element"<<endl;
        }
        t=t->next;
    }
}
int check_prime(int data)
{
    // int flag=1;
    for(int i=2;i<(data)/2;i++)
    {
        if(data %i == 0)
        {
           return 0;
        }
    }
    return 1;
}
void prime_num(node *head)
{
    node *temp=head;
    while(temp != NULL)
    {
        if(check_prime(temp->data))
        {
            cout<<temp->data<<" Prime Number"<<endl;
        }
        temp=temp->next;
    }
}
void add_even(node *head)
{
    int sum=0;
    node *t=head;
    while(t != NULL)
    {
        if((t->data)%2==0)
        {
            sum=sum +t->data;
        }
        t=t->next;
    }
    cout<<"Sum OF Even nodes are: "<<sum<<endl;
}
int main()
{
    node *node1=new node(1);
    node *head=node1;
    node*tail=node1;
    insert_node(tail ,5);
    insert_node(tail ,6);
    insert_node(tail ,28);
    insert_node(tail ,2);
    display(head);
    perfect_ele(head);
    prime_num(head);
    add_even(head);
    return 0;
}