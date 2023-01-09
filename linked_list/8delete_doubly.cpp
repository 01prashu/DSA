// delete In doubly linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
        int v = this->data;
        this->next = NULL;
        this->prev = NULL;
        delete next;
        cout << "********************************" << endl;
        cout << "Memory releases for: " << v << endl;
    }
};
void insert_last(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insert_first(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insert(node *&tail, node *&head, int data, int pos)
{
    if (pos == 1)
    {
        insert_first(head, data);
        return;
    }
    int c = 1;
    node *t = head;
    while (c < pos - 1)
    {
        t = t->next;
        c++;
    }
    if (t->next == NULL)
    {
        insert_last(tail, data);
        return;
    }
    else
    {
        node *n1 = new node(data);
        n1->next = t->next;
        t->next->prev = n1;
        n1->prev = t;
        t->next = n1;
    }
}
void display(node *head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
void delete_mid(node *&head, node *&tail, int pos)
{
    if (pos == 1)
    {
        node *t = head;
        head->next->prev = NULL;
        head = head->next;
        t->next = NULL;
        delete t;
        return;
    }

    int c = 1;
    node *p = NULL;
    node *current = head;
    while (c < pos)
    {
        p = current;
        current = current->next;
        c++;
    }
    if (current->next == NULL)
    {

        p->next = NULL;
        tail = p;
        current->prev = NULL;
        delete current;
    }
    else
    {
        p->next = current->next;
        current->next->prev = p;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    node *nod1 = new node(20);
    node *head = nod1;
    node *tail = nod1;
    insert_first(head, 30);
    insert_first(head, 40);
    insert_first(head, 50);
    insert_first(head, 60);
    display(head);
    delete_mid(head, tail, 4);
    display(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    delete_mid(head, tail, 4);
    display(head);
    delete_mid(head, tail, 3);
    display(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    delete_mid(head, tail, 1);
    display(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    // delete_mid(head ,2);
    // display(head);
    // delete_mid(head ,1);
    // display(head);

    return 0;
}