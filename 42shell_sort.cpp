#include <iostream>
using namespace std;
void print_array(int arr[]  , int size)
{
    for(int i=0 ;i<size ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void shell_sort(int arr[] , int size)
{
    
    for(int gap=size/2 ; gap >=1 ;gap=gap/2)
    {
        for(int j=gap ; j<size ;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(arr[i+gap] > arr[i])
                {
                    break;
                }
                else
                {
                    swap(arr[i+gap] , arr[i]);
                }
            }
        }
    }
}
int main()
{
    int arr[]={23 , 34 , 56 , 1, 4, 5, 10  , -1};
    int size = sizeof(arr)/sizeof(int);
    print_array(arr  , size);
    shell_sort(arr , size);
    print_array(arr , size);
    return 0;
}