#include<iostream>
using namespace std;
//Implimentation of two stack in single array
class twostack
{
    public:
    int top1;
    int top2;
    int *arr;
    int size;
    
    twostack(int n)
    {
        this->size=n;
        this->arr=new int[n];
        this->top1=-1;
        this->top2=n;
    }
    //intialise array with -1
    void set_array()
    {
        for(int i=0;i<size;i++)
        {
            arr[i]=-1;
        }
    }
    void push1(int data);
    void push2(int data);
    int pop1();
    int pop2();
    void display()
    {
        for(int i=size-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

};
void twostack::push1(int data)
{
    if(top2-top1 >1)
    {
        top1++;
        arr[top1]=data;
    }
    else
    {
        cout<<"Stack Overflow"<<endl;
    }
}
void twostack::push2(int data)
{
    if(top2-top1>1)
    {
        top2--;
        arr[top2]=data;
    }
    else
    {
        cout<<"Stack Overflow 2"<<endl;
    }
}
int twostack::pop1()
{
    if(top1==-1)
    {
        cout<<"Stack Underflow1"<<endl;
        exit(1);
    }
    else
    {
        int x=arr[top1];
        top1--;
        return x;
    }
}
int twostack::pop2()
{
    if(top2 >size-1)
    {
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    else
    {
        int x=arr[top2];
        top2++;
        return x;
    }

}
int main()
{
    twostack a(6);
    a.push2(100);
    a.push1(20);
    a.push1(30);
    a.push2(40);
    a.push2(50);
    a.push2(60);
    a.display();
    // a.push2(70);
    // a.push1(7);
 return 0;
}