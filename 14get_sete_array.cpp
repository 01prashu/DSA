#include <iostream>
using namespace std;

//### Getting element of an array with given index
// void get_element( int arr [], int size , int index)
// {
//     if((index >=1) && (index <=size))
//     {
//         cout<<arr[index]<<endl;
//     }
//     else{
//         cout<<"Enter valid index"<<endl;
//     }
// }


//## set function --set value at any index

// void set_element(int arr[] , int size , int index , int value)
// {
//     if(index>=1 && index <=size)
//     {
//         arr[index]=value;
//     }
// }
void print_array(int arr[] , int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
//##Find pair whose sum k
void pair_sum(int arr[] , int size , int k)
{
    for(int i=0;i<size;i++)
    {
        for(int j=size-1;j>=0;j--)
        {
            if(arr[i] + arr[j]==k)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                
            }
            
        }
    }
}
int main()
{
    int arr[8]={3,4,5,2,7,10,34,56};
    int size =8;
    // int size=sizeof(arr)/sizeof(int);
    int index=3;
    // get_element( arr , size , index-1);
    // print_array(arr , size);
    // cout<<endl;
    // set_element (arr , size , 3-1, 200 );
    print_array(arr , size);
    cout<<endl;
    int k=7;
    pair_sum(arr , size,k);
    return 0;
}