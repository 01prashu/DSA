#include <iostream>
using namespace std;
// int first_ocur(int arr[] , int size , int key)
// {
//     int start=0;
//     int end=size-1;
//     int index=-1;
//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             index=mid;
//             end=mid-1;
//         }
//         else if(key < arr[mid])
//         {
//             end=mid-1;
//         }
//         else if(key >arr[mid])
//         {
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return index;
// }

int peak_ele(int arr[] , int size)
{
    int start=0 , end=size-1 ;
    int mid=start +(end-start)/2;
    while(start < end)
    {
        if(arr[mid] <arr[mid+1])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start + (end - start)/2;
    }
    return start;
}
int main()
{
    int arr[8]={0,1,2,3,4,12,3,2};
    int size=8 , key=5;
    // cout<<first_ocur(arr , size , key);
    cout <<peak_ele(arr , size);

    return 0;
}