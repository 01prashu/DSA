#include<iostream>
using namespace std;
void sort012(int arr[], int n)
{
    int start=0 , end=n-1;
    int k=start;
    while(start<end)
    {
        if(arr[k]>arr[end])
        {
            swap(arr[k] , arr[end]);
            k++;
            // end--;
        }
        if(arr[k]<arr[end])
        {
            swap(arr[k] , arr[end]);
            k++;
        }
        else
        {
            k++;
        }
        end--;
       
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int n=5;
    int arr[100]={0 ,2 ,1 ,2 ,0};
    sort012(arr, n);
    
 return 0;
}