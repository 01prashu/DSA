#include <iostream>
using namespace std;
int pivot_ele(int arr[] , int n)
{
    int s=0 , end= n-1;
    int mid=s+(end-s)/2;
    while(s<end)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;

        }
        else {
            end=mid;
        }
        mid=s+(end -s)/2;
    }
    return s;
}
int main()
{
    int arr[5]={6,1,2,3,4};
    cout<<pivot_ele(arr , 5);
    return 0;
}