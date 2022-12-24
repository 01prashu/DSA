#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// int  binar_search(int arr[] ,int  size , int k)
// {
//     int l=0;
//     int h=size-1;
//     int mid=(l+h)/2;
//     while(l<=h )
//     {
//         if(arr[mid]==k)
//             return mid;
//         else if(arr[mid]>k)
//             h=mid-1;
//         else 
//             l=mid+1;
//         mid=(l+h)/2;    
        
//     }
//     return -1;
// }
int duplicate(int arr[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}
pair<int,int> missing_repeat(int arr[] , int n)
{
    int d=duplicate(arr , n);
    int digi=0;
    int num=0;
    for(int i=0;i<n-1;i++)
    {
        digi=arr[i]+arr[i+1];
        if(digi/2==arr[i])
        {
            i++;
        }
        else
        {
            num=digi/2;
        }
        
    }
   return make_pair(d,num);

}
void rotateArr(int arr[], int d, int n){
        // code here
        int temp[n]={0};
        int k=0;
        
        for(int i=d;i<n;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        for(int i=0;i<d;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        
        for(int j=0;j<n;j++)
        {
            cout<<temp[j]<<" ";
        }
    }

//## Triplet array
bool triplet(int arr[] , int size , int x)
{
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    
                    return true;
                }
            }
        }
    }
    return false;
}
void print_arr(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort01(int arr[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main()
{
    // int size=6;
    // int x=13;
    // // int k=10;
    // int arr[6]={1 , 4 , 45 ,6, 10, 8};
    // int d=2;
    // // cout<<triplet(arr , size , x);
    // triplet(arr, size , x);
    // cout<<binar_search(arr , size , k);
    // cout<<binar_search(arr , size , 10);
    // cout<<missing_repeat(arr, size);
    // pair<int,int> p=missing_repeat(arr,3);

    // cout<<"duplicate element is "<<p.first<<endl;
    // cout<<"missing element is "<<p.second<<endl;
    // rotateArr( arr ,  d,  size);


    //## Sort 0's . 1's .2's
    int n=5;
    int arr[5]={0,2,1,2,0};
    print_arr(arr, n);
    sort01(arr , n);
    cout<<endl;
    print_arr(arr, n);
    return 0;
}