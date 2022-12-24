#include<iostream>
using namespace std;
void print_array( int arr [], int size)
{
    for(int i=0 ; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int partition(int arr[ ] , int lb , int ub)
{
    int piovot=arr[lb];
    int start=lb;
    int end=ub;
    while(start <=end)
    {
        while(arr[start] <= piovot)
        {
            start++;
        }
        while (arr[end]>piovot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start] , arr[end]);
        }
    }
    swap(arr[lb] , arr[end]);
    return end;
}
void quick_sort( int arr[] , int lb , int ub)
{
    if(lb < ub)
    {
        int loc =partition(arr , lb , ub);
        quick_sort( arr , lb,loc-1);
        quick_sort( arr ,loc+1 , ub);
    }
}
int main()
{
    int arr[]={20  , 10 , 4, -5 ,6 , 8 , 45 , 67};
    int size= sizeof(arr)/sizeof(int );
    print_array(arr , size);
    quick_sort( arr , 0 ,size-1);
    cout<<endl;
    print_array(arr , size);
    return 0;
}