
#include<iostream>
using namespace std;
class A
{
    static int x;
    public:
    static int fun()
    {
        return x;
    }
};
class base
{
    int data;
    public:
    static void myfun()
    {
        cout<<"I am static function "<<endl;
    }

};
class derieved:public base
{
    static int value;
    public:
    static int  get_data()
    {
        return value;
    }
    void display()
    {
        myfun();
    }
};
int derieved::value=10;
// int A :: x=10;
int main()
{
    // cout<<A::fun();
    cout<<derieved::get_data()<<endl;
    derieved d1;
    d1.display();
    return 0;
}