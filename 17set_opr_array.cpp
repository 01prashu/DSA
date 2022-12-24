#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
// void intersection_arr( int arr1[] , int arr2[] , int size1 , int size2)
// {
//     int size3=size1+size2;
//     int arr3[size3];
//     int i=0 , j=0 ,k=0;
//     for(i=0;i<size1;i++)
//     {
//         for(j=0;j<size2;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 arr3[k++]=arr1[i];
//             }
            
//         }
//     }
//     print_array(arr3, 2);
// }
// void uni_array(int arr1[] , int arr2[], int size1, int size2)
// {
//     int size3=size1+size2;
//     int arr3[size3];
//     int i=0, j=0,k=0;
//     while(i<size1 && j<size2 )
//     {
//         if(arr1[i] < arr2[j])
//         {
//             arr3[k++]=arr1[i++];
//         }
//         else if (arr1[i] > arr2[j])
//         {
//             arr3[k++]=arr2[j++];
//         }
//         else{
//             arr3[k++]=arr1[i++];
//             j++;
//         }
//     }
//     for(; i<size1;i++)
//     {
//         arr3[k++]=arr1[i];
//     }
//     for(; j<size2;j++)
//     {
//         arr3[k++]=arr2[j];
//     }
//     cout<<endl;
//     print_array(arr3 , 6);
// }
void intersection_arr(int arr1[] , int arr2[] , int  size1 , int size2)
{
    
    // int arr3[size1+size2];
    // int k=0;
    // for(int i=0;i<size1;i++)
    // {
    //     for(int j=0;j<size2;j++)
    //     {if(arr1[i]==arr2[j])
    //     {
    //         arr3[k++]=arr1[i];

            
    //     }}
    // }
    int i=0,j=0,k=0;
    int n3=size1+size2;
    int arr3[n3];
    while(i<size1 && j<size2)
    {
        
    }
}
int main()
{
    int size1=6, size2=4;
    int arr1[6]={1 ,2 ,2 ,2 ,3 ,4};
    int arr2[4]={2,2,3,3};
    print_array(arr1 , size1);
    cout<<endl;
    print_array(arr2 , size2);
    cout<<endl;
    // uni_array(arr1 , arr2, size1, size2);
    intersection_arr(arr1 , arr2 , size1 , size2);
    return 0;
}