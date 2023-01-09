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
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_first(node *&tail, node *&head, int data)
{

    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = head;
    }
    else
    {
        node *n1 = new node(data);
        n1->next = head;
        head->prev = n1;
        head = n1;
    }
}
void insert_tail(node *&tail, node *&head, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        node *nn = new node(data);
        tail->next = nn;
        nn->prev = tail;
        tail = nn;
    }
}
void insert_pos(node *&tail, node *&head, int data, int pos)
{
    if (pos == 1)
    {
        insert_first(tail, head, data);
        return;
    }
    int c = 1;
    node *node_to_insert = new node(data);
    node *t = head;
    while (c < pos - 1)
    {
        t = t->next;
        c++;
    }
    if (t->next == NULL)
    {
        insert_tail(tail, head, data);
        return;
    }
    node_to_insert->next = t->next;
    t->next->prev = node_to_insert;
    t->next = node_to_insert;
    node_to_insert->prev = t;
}
void display(node *&head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insert_first(tail, head, 20);
    display(head);
    insert_first(tail, head, 30);
    insert_first(tail, head, 40);
    insert_first(tail, head, 50);
    display(head);
    insert_tail(tail ,head ,60);
    insert_tail(tail , head ,70);
    display(head);
    
    // node *nod1=new node(10);
    // node *head=nod1;
    // node *tail=nod1;
    // insert_first(head , 20);
    // insert_first(head ,30);
    // display(head);
    // insert_tail(tail ,40);
    // insert_tail(tail ,50);
    // insert_tail(tail ,60);
    // display(head);
    // insert_pos(tail , head , 100 , 1);
    // display(head);
    // insert_pos(tail ,head ,200 ,8);
    // display(head);
    // insert_pos(tail , head , 201 ,9);
    // display(head);
    return 0;
}