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
        if(next !=NULL)
        {
            this->next=NULL;
            delete next;
        }
    }
};
class stack
{
    public:
    node *top;
    stack()
    {
        this->top=NULL;
    }
    bool isempty()
    {
        if(top==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int data)
    {
        node *temp=new node(data);
        if(!temp)
        {
            cout<<"Stack Overflow"<<endl;
            exit(1);
        }
        else
        {
            temp->next=top;
            top=temp;
        }

    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            exit(1);
        }
        else
        {
            node *temp=top;
            top=top->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void display()
    {
        if(isempty())
        {
            cout<<"Stack Underflow"<<endl;
            exit(1);
        }
        else
        {
            node *temp=top;
            while(temp !=NULL)
            {
                cout<<temp->data;
                temp=temp->next;
                if(temp !=NULL)
                {
                    cout<<"->";
                }
            }
            
            cout<<endl;
        }
    }
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Underflow"<<endl;
            exit(1);
        }
        else
        {
            return top->data;  

        }
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(12);
    st.push(14);
    st.display();
    st.pop();
    st.display();
    st.pop();
    st.pop();
    st.push(20);
    st.display();
    cout<<st.isempty()<<endl;
    cout<<st.peek();
 return 0;
}