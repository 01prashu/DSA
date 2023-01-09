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
void last_occur(node *&head, int value)
{
    node *temp = head;
    int index = 0;
    int flag = 0;
    while (temp != NULL)
    {
        index++;
        if (temp->data == value)
        {
            flag = index;
        }
        temp = temp->next;
    }
    cout << "Value:" << value << " last Occurance is: " << flag << endl;
}
void first_occur(node *&head, int value)
{
    // node *temp=head;
    // int index=0;
    // int flag=0;
    // while(temp !=NULL)
    // {
    //     index++;
    //     if(temp->data==value)
    //     {
    //         flag=index;
    //         break;
    //     }
    //     temp=temp->next;
    // }

    node *t = head;
    int flag = 0;
    int index = 1;
    if (head->data == value)
    {
        cout << "Value present at head with Occurance: " << index << endl;
    }
    else
    {
        while (t->data != value)
        {
            index++;
            t = t->next;
        }
        cout << "First Occurance Of: " << value << " is at: " << index << endl;
    }
}
void sum_node(node *&head)
{
    node *t=head;
    int sum=0;
    while(t != NULL)
    {
        sum=sum+(t->data);
        t=t->next;
    }
    cout<<"Sum of nodes is: "<<sum<<endl;
}
void largest_ele(node *&head)
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
    cout<<"Largest Element is: "<<max<<endl;
}
int smallest_ele(node *head)
{
    node *t=head;
    int min=t->data;
    while(t !=NULL)
    {
        if(t->data <=min)
        {
            min=t->data;
        }
        t=t->next;
    }
    return min;
}
int main()
{
    node *node1 = new node(100);
    node *head = node1;
    node *tail = node1;
    display(head);
    insert_node(tail, 20);
    insert_node(tail, 1);
    insert_node(tail, 40);
    insert_node(tail, 0);
    display(head);
    last_occur(head, 20);
    first_occur(head, 20);
    sum_node(head);
    largest_ele(head);
    cout<<"Smallest Element : "<<smallest_ele(head)<<endl;
    return 0;
}