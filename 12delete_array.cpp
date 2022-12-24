#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0; i<size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void dele_ele( int arr[] ,int  size , int index)
{
    for(int i=index-1;i<size ;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[]={12,10,5,6,7,8,5};
    int size =sizeof(arr)/sizeof(int);
    int index=1;
    print_array(arr ,  size);
    cout<<endl;
    dele_ele( arr , size , index);
    print_array(arr , size-1 );
    cout<<endl;
    return 0;
}