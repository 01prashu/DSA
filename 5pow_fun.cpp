#include<iostream>
using namespace std;
int main()
{
    int num,pow;
    cout<<"Enter Number and power"<<endl;
    cin>>num>>pow;
    int ans=1;
    for(int i=1;i<=pow;i++)
    {
        ans=ans*num;
    }
    cout<<num<<" Whose power of "<<pow<<" is : "<<ans<<endl;
    return 0;
}