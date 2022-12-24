#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
   
};
// node ::node* insert_begining(node*head , int data)
// {

// }

void display(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node * insert_begening(node *head , int data)
{
    node *ptr =new node;
    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return head;
}
node *insert_end(node *head , int data)
{
    node *ptr =head;
    node *new_node = new node;
    new_node->data=data;
    new_node->next=NULL;
    while(ptr->next !=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    return head;
    
}
int main()
{
    node *head;
    head->data=10;
    head->next=NULL;
    
    // head = insert_begening(head  , 20);
    // display(head);
    // head= insert_begening(head , 30);
    // display(head);
    // head = insert_begening(head  , 40);
    // display(head);
    head =insert_end(head ,20);
    display(head);
    head=insert_end(head , 30);
    display(head);
    head = insert_end(head , 40);
    display(head);
    return 0;
}