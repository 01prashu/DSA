#include <iostream> 
using namespace std;
void print_array( int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void odd_even_arr( int arr[] , int size)
{
    int  c=0;
    for(int i=0 ;i<size;i++)
    {
        if(arr[i] %2 ==0)
        {
            c=c+1;
        }
    }
    int odd[size-c];
    int even[c];
    int k=0, m=0;
    for(int i=0 ; i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[k++]=arr[i];
        }
        else{
            odd[m++]=arr[i];
        }
    }
    cout<<endl;
    print_array(odd , size-c);
    print_array(even , c);
}
int main()
{
    int arr[6]={7,4,3,6,8,5};
    int size=6;
    print_array(arr , size);
    odd_even_arr(arr , size);
    
    return 0;
}