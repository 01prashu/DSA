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
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory Relese for value: " << value << endl;
    }
};
void insert_node(node *&tail, int ele, int d)
{
    if (tail == NULL)
    {
        node *nn = new node(d);
        nn->next = nn;
        tail = nn;
    }
    else
    {
        node *temp = tail;
        while (temp->data != ele)
        {
            temp = temp->next;
        }
        // now ,temp is point to element
        node *nn = new node(d);
        nn->next = temp->next;
        temp->next = nn;
    }
}
void display(node *tail)
{
    if (tail == NULL)
    {
        cout << "CLL IS EMPTY " << endl;
    }
    else
    {
        node *t = tail;
        do
        {
            cout << t->data << " ";
            t = t->next;
        } while (t != tail);
        cout << endl;
    }
}

void delete_node(node *&tail, int value)
{
    // value--data of node which you to delete
    if (tail == NULL)
    {
        cout << "Your CLL is empty" << endl;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        // current point to value which we have to delete

        if (tail == curr)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *node1 = NULL;
    node *tail = node1;
    insert_node(tail, 4, 1);
    display(tail);
    insert_node(tail, 1, 2);
    insert_node(tail, 2, 3);
    insert_node(tail, 3, 4);
    display(tail);
    insert_node(tail, 2, 10);
    display(tail);
    delete_node(tail, 2);
    display(tail);
    delete_node(tail, 1);
    display(tail);
    delete_node(tail, 4);
    display(tail);
    delete_node(tail, 3);
    display(tail);
    delete_node(tail, 10);
    display(tail);
    return 0;
}