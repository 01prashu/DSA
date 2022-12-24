#include <iostream>
using namespace std;
void print_array(int arr[] , int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
// void merge_array(int arr1[] ,int arr2[] ,int size1 , int size2)
// {
//     int size3=size1+size2;
//     int arr3[size3];
//     int j=0;
//     for(int i=0;i<size1;i++)
//     {
//         arr3[i]=arr1[i];
//         j++;
//     }
//     for(int i=0;i<size2;i++)
//     {
//         arr3[j]=arr2[i];
//         j++;
//     }
//     cout<<endl;
//     print_array(arr3 , size1+size2);
// }

//## merge array in sorted order
void merge_arr(int arr1[] , int arr2[] , int size1 , int size2)
{
    int i=0, j=0,k=0;
    int size3=size1+size2;
    int arr3[size3];
    while(i<size1 && j<size2)
    {
        if(arr1[i] <arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    for(;i<size1;i++)
    {
        arr3[k++]=arr1[i];
    }
    for(; j<size2;j++)
    {
        arr3[k++]=arr2[j];
    }
    cout<<endl; 
    print_array(arr3 , size3);
}

int main()
{
    int size1=4;
    int size2=4;
    int arr1[4]={67,69,71,74};
    int arr2[4]={65,76,77,88};
    print_array(arr1, size1);
    cout<<endl;
    print_array(arr2 , size2);
    merge_arr(arr1 , arr2 , size1, size2);
    cout<<endl;
    
    

    return 0;
}