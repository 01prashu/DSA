#include<iostream>
using namespace std;
class person
{
    //the class which does not need to create object , such class made to form inherited class these class callad as abstract data type
    public:
    string mb;
    string address;
    string name;
    virtual void myfun()=0;//pure virtual function
    
};
class student :public person
{
    public:
    student(string n , string add , string name)
    {
        mb=n;
        address=add;
        name =name;
    }
    
    void myfun()
    {
        cout<<"Please check your information is correct or not"<<endl;
    }
    void display()
    {
        cout<<mb<<endl;
        cout<<address<<endl;
        cout<<name<<endl;
    }
};
class professor:public person
{
    public:
    professor(string n , string add , string nam)
    {
        mb=n;
        address=add ;
        name=n;
    }
    void myfun()
    {
        cout<<"Please check whether your information is it correct or not"<<endl;
    }
    void display()
    {
        cout<<mb<<endl;
        cout<<address<<endl;
        cout<<name<<endl;
    }
};
int main()
{
    student obj1("9284172429","prashu" ,"puna");
    obj1.display();
    return 0;
}