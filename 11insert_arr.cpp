#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0; i<size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void insert(int arr[] , int size , int index , int value)
{
    for(int i=size; i>=index; i--)
    {
        arr[i] =arr[i-1];
    }
    arr[index]=value;
}
int main()
{
    // int arr[7]={6,7,8,9,4,-2};
    // print_array(arr , 7);
    // cout<<endl;
    // insert( arr , 10 , 4 , 200);
    // print_array(arr , 7);
    int arr[100];
    int size,index ,value;
    cout<<"Enter size of array: ";
    cin>>size;
    int req_size=size+1;
    cout<<"Enter Your array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<" Enter Index and insertion value : ";
    cin>>index>>value;
    print_array(arr , size);
    cout<<endl;
    insert( arr , size, index , value);
    print_array(arr , req_size);
    
    return 0;
}