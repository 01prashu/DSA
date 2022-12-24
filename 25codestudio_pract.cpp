#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int arr[] , int size)
{
    int i,j,k;
    for( i=0;i<size-1;i++)
    {
        for(i=j=k ; j<size;j++)
        {
            if(arr[j] < arr[k])
            {
                k=j;
            }
        }
        swap( arr[i] , arr[k]);
    }
   
}
void insertion(int arr1[] , int arr2[])
int main()
{
    int arr[]={8,6,3,2,5,4};
    int size = sizeof(arr)/sizeof(int);
    print_array(arr, size);
    selection_sort(arr , size);
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<" ";
   }
    // print_array(arr , size);
    return 0;
}