#include <iostream>
using namespace std;
int binary_search(int arr[] ,  int s , int e , int k)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
} 
int piovot(int arr[] , int size)
{
    int s=0 , e=size-1 , mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int size=7;
    int arr[]={4,5,7,-2,0,1 , 3};
    int target=5;
    int p=piovot(arr , size);
    if(target >=arr[p] && target<arr[size-1])
    {
        cout<<binary_search(arr,p , size ,target);
    }
    else{
        cout<<binary_search(arr , 0 , p-1 , target);
    }
    
    // cout<<search(arr , 7 , 0);
    return 0;
}