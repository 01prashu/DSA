#include <iostream>
using namespace std;
void pair_sum(int arr[] , int n , int target)
{
    int sum=0;
    int t=0 , s1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum-t;
        s1=s1+arr[i];
        if(s1<=target)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int arr[4]={2,7,11,15};
    pair_sum(arr, 4 , 9);
    return 0;
}