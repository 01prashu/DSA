#include<iostream>
using namespace std;

//insert in linked list after a element
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
void insertnode(node *&tail , int ele , int data)
{
    if(tail==NULL)
    {
        node *newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node *current=tail;
        while(current->data !=ele)
        {
            current=current->next;
        }
        node *nn=new node(data);
        nn->next=current->next;
        current->next=nn;

    }
}
void display(node *tail)
{
    node *t=tail;
    do
    {
        cout<<tail->data<<"->";
        tail=tail->next;

    } while (tail != t);
    cout<<endl;
}

int main()
{
    node *tail=NULL;
    insertnode(tail ,5 ,1);
    insertnode(tail ,1 ,2);
    insertnode(tail ,2 ,4); 
    display(tail);
    insertnode(tail ,2,3);
    display(tail);
    return 0;
}