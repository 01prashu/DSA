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
void insert_last(node *&tail, int data)
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
void give_reverse(int data)
{
    int res;
    while (data != 0)
    {
        res = data % 10;
        data = data / 10;
        cout << res;
    }
    cout << "->";
}
void rev_ele(node *&head)
{
    node *t = head;
    while (t != NULL)
    {
        give_reverse(t->data);
        t = t->next;
    }
    cout<<endl;
}

//
int check_palindrome(int data)
{
    int sum=0 , res=0;
    while(data !=0)
    {
        res=data%10;
        sum=(sum *10)+res;
        data=data/10;
    }
    return sum;
}

void palindrome(node *head)
{
    node *t = head;
    int check=0;
    while(t!=NULL)
    {
        check=check_palindrome(t->data);
        if(check==t->data)
        {
            cout<<t->data<<" IS a Palindrome"<<endl;
        }
        t=t->next;
    }
}
int main()
{
    node *node1 = new node(12);
    node *head = node1;
    node *tail = node1;
    insert_last(tail, 22);
    insert_last(tail, 515);
    insert_last(tail, 65);
    display(head);
    rev_ele(head);
   
    palindrome(head);
    
    
    return 0;
}