#include <iostream>
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
void insert_node(node *&tail ,int ele , int data)
{
    if(tail==NULL)
    {
        node *t=new node(data);
        t->next=t;
        t->prev=t;
        tail=t;
    }
    else
    {
        
        node *curr=tail;
        while(curr->data !=ele)
        {
            curr=curr->next;
        }
        //current present at a place of element
        node *nn=new node(data);
        nn->next=curr->next;
        curr->next->prev=nn;
        nn->prev=curr;
        curr->next=nn;
    }

}
void display(node *tail)
{
    node *t=tail;
    do
    {
        cout<<t->data<<" ";
        t=t->next;
    } while (t !=tail);
    cout<<endl;
    
}
void insert_pos(node *&tail , int pos , int data)
{
    if(pos==1)
    {
        
    }
    
}
int main()
{
    node *n1=NULL;
    node *tail=n1;
    insert_node(tail ,5,1);
    display(tail);
    insert_node(tail ,1 ,2);
    insert_node(tail ,1 ,4);
    insert_node(tail ,2 ,3);
    insert_node(tail ,3,4);
    insert_node(tail ,3 ,5);
    display(tail);
    insert_pos(tail ,2 ,200);
    display(tail);
    insert_pos(tail ,1 ,100);
    display(tail);
    return 0;
}