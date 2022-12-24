#include<iostream>
using namespace std;
class unary_increment
{
    int x;
    public:
    unary_increment(int xv=0)
    {
        x=xv;
    }
    friend unary_increment operator+(unary_increment &);
    void display()
    {
        cout<<"x = "<<x<<endl;
    }
};
unary_increment operator+(unary_increment & obj1)
{
    unary_increment obj2;
    obj2.x=obj1.x+1;
    return obj2;

}
int main()
{
    unary_increment o(5);
    unary_increment o2;
   o2=+o;
   o2.display();
       
    return 0;
}