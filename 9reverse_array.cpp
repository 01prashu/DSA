#include <iostream>
using namespace std;
// void reverse_arr(int a[], int siz)
// {
//     for (int start = 0, end = (siz - 1); start>end; start++, end--)
//     {
//         int temp = a[start];
//         a[start] = a[end];
//         a[end] = temp;
//         // if(i==j)
//         // {
//         //     break;
//         // }
//         // else{
//         //     int temp=a[i];
//         //     a[i]=a[j];
//         //     a[j]=temp;
//         // }
//     }
// }
void group_rev(int arr[] , int size , int k)
{
    // for(int i=0, j=k-1;i<=j;i++ ,j--)
    // {
    //     swap(arr[i],arr[j]);
    // }
    for(int i=k , j=size-1;i<=j;i++,j--)
    {
        swap(arr[i] , arr[j]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int k=5;
    group_rev(arr , size ,k);

    // int arr[5]={1,2,3,4,5};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int arr[100];
    // int size;
    // cout << "Enter Size of an Array: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // reverse_arr(arr, size);
    // cout << "Reversed Array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}