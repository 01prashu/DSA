#include<iostream>
using namespace std;

void min_array(int arr [] , int size)
{
    int min=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"Minimum Value is: "<<min<<endl;
}
void max(int a[], int n)
{
    int maximum=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i] > maximum)
        {
            maximum=a[i];
        }
    }
    cout<<"Maximun value is : "<<maximum<<endl;
}
int main()
{
    // int arr[]={9,6,-17,86,-5,7};
    // int arr_size=sizeof(arr)/sizeof(int);
    int arr[100];
    int arr_size;
    cout<<"Enter your array size: ";
    cin>>arr_size;
    
    cout<<"Enter Your array here "<<endl;
    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    // int arr_size = sizeof(arr)/sizeof(int);
    
    max(arr ,arr_size);
    min_array(arr ,arr_size);
    return 0;
}