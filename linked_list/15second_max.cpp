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
    ~node()
    {
        int value=this->data;
        if(this->next !=NULL)
        {
            this->next =NULL;
            delete next;
        }
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

int max_ele(node *&head)
{
    node *t=head;
    int max=t->data;
    while(t!=NULL)
    {
        if(t->data >=max)
        {
            max=t->data;
        }
        t=t->next;
    }
    return max;
}
node * delete_ele(node *&head , int value)
{
    node*p=NULL;
    node *curr=head;
    while(curr->data !=value)
    {
        p=curr;
        curr=curr->next;
    }
    p->next=curr->next;
    curr->next=NULL;
    delete curr;
    return head;
}
int second_max(node* &head)
{
    int max=max_ele(head);
    head=delete_ele(head , max);
    int m=max_ele(head);
    return m;   
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insert_node(tail,20);
    insert_node(tail ,0);
    insert_node(tail ,5);
    display(head);
    cout<<"Second Max is: "<<second_max(head)<<endl;
    display(head);
 return 0;
}