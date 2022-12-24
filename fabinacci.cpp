#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Count For Fabinacci Series :"<<endl;
    cin>>n;
    int first=0;
    int second=1;
    
    cout<<first<<" "<<second<<" ";
    int i=3;
    for(; ; i++)
    {
        if(i<=n){
            int third=first + second;
            cout<<third<<" ";
            first=second;
            second=third;
        }
        else
        break;
    }
    return 0;
}