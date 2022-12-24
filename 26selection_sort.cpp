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
// void selection_sort(int arr[] , int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         int min=i;
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[j]<arr[min])
//             {
//                 min=j;
//             }
//         }
//         // if(min != i)
//         // {
//         //     swap(arr[i] , arr[min]);
//         // }
//         swap(arr[i] , arr[min]);
//     }
// }
void selection_sort(int arr[] , int size)
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
}
int main()
{
    int size=5;
    int arr[5]={5,4,3,2,1};
    print_array(arr , size);
    cout<<endl;
    selection_sort(arr , size);
    print_array(arr , size);
    return 0;
}