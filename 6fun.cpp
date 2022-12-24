#include <iostream>
using namespace std;
bool iseven(int n)
{
    if (n & 1)
        return 0;
    return 1;
}
int main()
{
    int n ;
    cin>>n;
    if(iseven(n)==0)
    {
        cout<<"ODD Number"<<endl;
    }
    else {
        cout<<"Even number"<<endl;
    }
    
    return 0;
}