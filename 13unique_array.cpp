#include <iostream>
using namespace std;
int binary_search(int arr[] , int key,int low , int end)
{
    while(low<=end)
    {
        int mid=(low +end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

//## Print unique element of array
// int unique_ele(int arr1[] , int size)
// {
//     int max=arr1[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr1[i] > max)max=arr1[i];
//     }
//     int hash_arr[max]={0};
//     for(int i=1;i<=max;i++)
//     {
//         hash_arr[arr1[i]]++;
//     }
//     for(int i=1;i<=max;i++)
//     {
//         if(hash_arr[i]==1){
//             return i;
//         }
//     }
//     return -1;
// }

int unique_ele(int arr1[] ,int  size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr1[j] && i!=j)
            {
                arr1[i]=-1;
                arr1[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr1[i]>0)
        {
            return arr1[i];
        }
    }
    return -1;
}
int main()
{
    /*
    int arr[]={11,22,33,44,55,77,88};
    int size=sizeof(arr)/sizeof(int);
    int key=55;
    int low=0;
    int end=size;
    cout<<binary_search(arr , key , low ,end);
    */
   
   int arr1[7]={7,7,5,6,4,6,5};
   int size=7;
   cout<<unique_ele(arr1 , size);
    return 0;
}