#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// void insertion_sort(int arr[] , int size)
// {
//     for(int i=1;i<size;i++)
//     {
//         int j=i-1;
//         int temp=arr[i];
//         while(j >=0 && arr[j] > temp)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         // arr[j+1]=temp;
//         arr[j+1]=temp;
//     }
//     print_array(arr , size);

// }

void insertion_sort(int arr[] , int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j] > temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int size=7;
    int arr[7]={12,3,5,7,2,9,4};
    print_array(arr , size);
    cout<<endl;
    insertion_sort(arr , size);
    print_array(arr , size);
    return 0;
}