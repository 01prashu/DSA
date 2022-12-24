#include<iostream>
using namespace std;
class increment
{
    int x;
    public:
    increment(int xv=0)
    {
        x=xv;
    }
    // increment operator++()
    // {
    //     increment obj;
    //     obj.x=++x;
    //     return obj;
    // }
    //  increment operator++()
    void display()
    {
        cout<<"x = "<<x<<endl;
    }

};

class friend_binary
{
    int x;
    int y;
    public:
    friend_binary(int xv =0, int vv=0)
    {
        x=xv;
        y=vv;
    }
    friend friend_binary operator+(friend_binary & , friend_binary &);
    void displaay()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    
};
friend_binary operator+(friend_binary& obj1 , friend_binary& obj2)
{
    friend_binary obj3;
    obj3.x=obj1.x +obj2.x;
    obj3.y=obj1.y+obj2.y;
    return obj3;
}
int main()
{
    // increment ob(7) , obj;
    // ob=++ob;
    // ob.display();
    friend_binary o(4 , 5) , o1(4 ,5);
    friend_binary o2;
    o2=o+o1;
    o2.displaay();
    return 0;
}