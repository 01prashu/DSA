#include <iostream>
#include<array>
using namespace std;

/*
void my_swap( int *p , int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void alternate_swap(int a[] , int size)
{
    for(int i=0;i+1<size;i=i+2)
    {
        my_swap(&a[i],&a[i+1]);
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    int size =sizeof(a)/sizeof(a[0]);
    alternate_swap(a , size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
*/

// ## Program for count smallest number of an array
//  void count_small_ele(int arr[], int n , int value)
//  {
//      int count=0;
//      for(int i=0;i<n;i++)
//      {
//          if(arr[i]<value)
//          {
//              count++;
//          }
//      }
//      cout<<count;
//  }
//  int main()
//  {
//      int arr[]={1, 2, 4, 5, 8, 10};
//      int size =sizeof(arr)/sizeof(int);
//      int X = 9;
//      count_small_ele(arr , size , X);
//      return 0;
//  }

// ## Second largest element
//  int main()
//  {

//     int arr[]={1,2,3,4,5,6};
//     int size =sizeof(arr)/sizeof(int);
//     int maxi=INT16_MIN , mini=INT16_MAX;
//     int second_large=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>maxi)
//         {
//             maxi=arr[i];
//         }

//     }
//     // cout<<maxi;
//     for(int i=0;i<size;i++)
//     {
//         if((arr[i] < maxi) && (arr[i] > second_large))
//         {
//             second_large=arr[i];
//         }
//     }

//     cout<<second_large;

//     return 0;
// }

// ## Make swap  array group of input value --ex)--{2,3,4,5,6,7,8,7} k=4 {3,2,5,4,6,7,8,9}
/*
void swap_group(int arr[], int size, int k)
{
    for (int i = 0; i + 1 < k; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void rev_array(int arr[], int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

void grp_rev(int arr[] , int size , int k)
{
    for(int start=0 , end=k-1; start <=end;start++,end--)
    {
        if(start <k)
        {
            swap(arr[start] , arr[end]);
        }
        // else
        // {
        //     swap(arr[start], arr[end]);
        // }
        
    }
    
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int k = 4;
    int n = 5;
    print_array(arr, size);
    cout << endl;
    // swap_group(arr, size, k);
    grp_rev(arr , size ,k);
    print_array(arr, size);

    return 0;
}
*/


//## DUplicate element in array 
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void duplicate(int arr[] , int size)
{
    int c=0;
    int index;
    int value=0;
    for(int i=0;i<size ;i++)
    {
        for(int j=0;j<size ; j++)
        {
            if((arr[i]==arr[j]) && ( i != j))
            {
                c++;
                index=i+1;
                value=arr[j];
            }
        }
    }
    cout<<value<<" repeat "<<c<<" times"<<" second position at "<<index;
}

void unique(int arr[] , int n)
{
    
}
void pair_sum( int arr[] , int n)
{
    for(int i=0; i+1<=n;i+=2)
    {
        if(i+1 < n)
        {
            cout<<arr[i]+arr[i+1]<<" ";
        }
        else
        {
            cout<<arr[i];
        }
    }
}
int main()
{
    int arr []={5,5,5,3,5};
    int size =sizeof(arr)/sizeof(int);
    // duplicate(arr , size);
    // repeat_count(arr , size);
    print_array(arr , size);
    cout<<endl;
    pair_sum(arr , size);
    
    
    return 0;
}