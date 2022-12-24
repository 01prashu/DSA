#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"Base class  "<<endl;
    }
};
class derived1:public base
{
    public:
    void display()
    {
        cout<<"Derived 1"<<endl;
    }
};
class derived2:public derived1
{
    public:
    void display()
    {
        cout<<"Derived 2"<<endl;
    }
};
int main()
{
    base *ptr;
    derived1 ptr1;
    derived2 ptr2;
    ptr = &ptr1;
    ptr->display();
    ptr = &ptr2;
    ptr->display();
    return 0;
}