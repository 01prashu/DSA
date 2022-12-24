#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// void bubble_sort(int arr[] ,int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=0;j<size-1-i;j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
    
//     print_array(arr , size);
// }

void bubble_sort(int arr[] ,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] ,arr[j+1]);
            }
        }
    }
    
}
int main()
{
    int size=5;
    int arr[5]={9,1,7,11,6};
    print_array(arr , size);
    cout<<endl;
    bubble_sort(arr ,size);
    print_array(arr , size);
    return 0;
}