#include <iostream>
using namespace std;
// int main()
// {
    
//     int arr1[10]={1};//here only 0th value of array is 1
//     //this for loop intialize all the index values of array with 1
//     for(int i=1;i<10;i++)
//     {
//         arr1[i]=1;
//     }
//     for(int i=0;i<10;i++)
//     {
//         cout<<arr1[i]<<endl;
//     }
   
//     return 0;
// }
void selction_sort( int arr[] , int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        swap(arr[i] , arr[min]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int arr[]={20,3,4,56,10,-2};
    int size=sizeof(arr)/sizeof(int );
    selction_sort( arr , size);
    return 0;
}