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
    ~node()
    {
        this->next=NULL;
        delete next;
    }
};
node *insert(node *head, int data)
{
    node *nn = new node(data);
    nn->next = head;
    head = nn;
    return head;
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
node *delete_position(node *head, int pos)
{

    if (pos == 1)
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    else
    {
        int c = 1;
        node *prev = NULL;
        node *current = head;
        while (c <pos)
        {
            prev = current;
            current = current->next;
            c++;
        }
        prev->next = current->next;
    }
}
int main()
{
    // node *node1 = new node(10);
    // node *head = node1;
    // node *tail = node1;
    // head = insert(head, 20);
    // head = insert(head, 30);
    // head = insert(head, 40);
    // head = insert(head, 50);
    // display(head);
    // delete_position(head, 3);
    // display(head);
    // head=delete_position(head, 1);
    // display(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;


    //How to handle tail 
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    display(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    delete_position(head, 5);
    display(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    return 0;
}