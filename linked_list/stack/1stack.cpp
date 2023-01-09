#include<iostream>
using namespace std;
class stack
{
    public:
    int top;
    int size;
    int *stack_arr;
    stack(int s)
    {
        this->top=-1;
        this->size=s; 
        this->stack_arr=new int[s];
    }
    bool isfull()
    {
        if(top>=size-1)
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
        // if(top <size-1)
        // {
        //     top++;
        //     stack_arr[top]=data;
        // }
        if(isfull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            // cout<<"Stack Overflow"<<endl;
            top++;
            stack_arr[top]=data;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void pop()
    {
        // if(isempty())
        // {
        //     cout<<"Stack Underflow"<<endl;
        // }
        // else
        // {
        //     int val;
        //     val=stack_arr[top];
        //     top--;
        // }
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek()
    {
        if(top >=0)
        {
            return stack_arr[top];
        }
        else
        {
            cout<<"Stack Is Empty so no top is available"<<endl;
        }
        
    }
    void display()
    {
        if(top>=0)
        {
            for(int i=top;i>=0;i--)
            {
                cout<<stack_arr[i]<<endl;
            }
        }
        else
        {
            cout<<"Stack Is Empty"<<endl;
        }
        
    }

};
int main()
{
    stack st(5);
    st.push(1);
    st.pop();
    st.push(3);
    st.pop();
    // st.display();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    st.pop();
    cout<<endl;
    st.display();
    // st.push(60);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // st.display();
    // cout<<st.peek();
   
    // st.pop();
    // cout<<st.peek()<<endl;
    // st.display();
 return 0;
}