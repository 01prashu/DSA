#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node*p;
};
void display(Node *temp)
{
    // we are created Node *temp --which is assign to first node 
    // Using this temp pointer we traverse in linked list
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        temp=temp->p;
    }
    
}
int main()
{
    Node*first , *second  , *third ;
    first=new Node;
    second = new Node;
    third = new Node;
    first->data=10;
    first->next=second;// stored address of second node
    
    second->data=20;
    second->next=third ;// stored address of third node into second node
    
    third->data=30;
    third->next=NULL;//there is no any other node created so it stored null
    
    display(first);
    return 0;
}