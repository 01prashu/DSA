#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    node *next;
};
void display(node *&head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << endl;
}
void insert_head(node * &tail, node * &head, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *nn = new node(data);
        nn->next = head;
        head = nn;
    }
}
void insert_last(node *&tail, node *&head, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
        return;
    }
    else
    {
        node *nn = new node(d);
        tail->next = nn;
        tail = nn;
        return ;
        
    }
}
void insert_at(node * &tail,node * &head, int data, int pos)
{
    if (pos == 1)
    {
        insert_head(tail,head, data);
        return;
    }
    int c = 1;
    node *t = head;
    node *n1 = new node(data);

    while (c < pos - 1)
    {
        t = t->next;
        c++;
    }
    if(t->next==NULL)
    {
        insert_last(tail ,head,data);
        return;
    }
    n1->next = t->next;
    t->next = n1;
}

int main()
{
    // node *node1=new node(10);
    node *head = NULL;
    node *tail = NULL;

    // insert_head(tail , head ,10);
    insert_last(tail ,head ,10);
    display(head);
    insert_head(tail ,head ,20);
    insert_last(tail ,head ,30);
    insert_last(tail ,head ,40);
    display(head);
    insert_at(tail ,head ,50 ,5);
    display(head);
    insert_at(tail ,head ,20,3);
    display(head);
    // tail =insert_last(tail ,20);
    // tail=insert_last(tail ,30);
    // tail=insert_last(tail ,40);
    // display(head);
    // cout<<"Tail is: "<<tail->data<<endl;
    // insert_at(head ,100 ,2);
    // display(head);
    
    return 0;
}