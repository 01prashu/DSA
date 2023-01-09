#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node(int d=0)
    {
        this->data=d;
        this->next=NULL;
    }
    node *next;
};
void traverse(node *f)
{
    node *temp=f;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
class linkedlist:public node
{
    public:
    int v;
    void get()
    {
        cout<<"Enter value to insert at head"<<endl;
        cin>>v;
        insert_first(v);
       
    }
    node *head=new node(v);
    void insert_first(int d)
    {
        node *nn=new node(d);
        nn->next=head;
        head=nn;
        traverse(head);
        
    }
    
};

int main()
{
    linkedlist ob1[10];
    for(int i=0;i<100;i++)
    {
        ob1->get();
        cout<<"Head is: "<<ob1->head->data<<endl;
    }
    // node *first=new node(5);
    // node *second=new node(7);
    // node *third=new node(4);
    // first->next=second;
    // second->next=third;
    // node *fourth=new node(10);
    // third->next=fourth;
    // traverse(first);
    // cout<<first->next<<endl;
    // cout<<"first next: "<<first->next<<endl;
    // cout<<"second: "<<second<<endl;
    return 0;
}