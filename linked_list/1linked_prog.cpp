#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
};

void display(node *temp)
{
    while(temp !=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<" END ";
}
int main()
{
    node*head;
    node*second;
    node*third;
    node*fourth;
    node*fifth;
    //We created node here
    head=new node;
    second=new node;
    third=new node;
    fourth=new node;
    fifth = new node;

    //now its time to assign data to node 
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;

    display(head);


    return 0;
}