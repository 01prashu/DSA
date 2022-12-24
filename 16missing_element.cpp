#include <iostream>
using namespace std;

//## These methode for single missing element
int missing_ele(int arr[] , int size)
{
    
    if(size>0 && size<=2)
    {
        return arr[0]-1;
        
    }
    else{
        for(int i=0;i+1<size;)
        {
            int digi=arr[i]+arr[i+1];
            if(digi/2==arr[i])
            {
                i++;
            }
            else
            {
                return digi/2;
            }
        }
        
    }
    return -1;
        
}
// void missing_ele2(int arr[] , int size)
// {
//     int sum1=0 ,sum2=0;
//     for(int i=arr[0] ;i<arr[size];i++)
//     {
//         sum1=sum1+i;
//     }
//     for(int i=0;i<size;i++)
//     {
//         sum2=sum2+arr[i];
//     }
//     cout<<sum1-sum2;
// }
int main()
{
    int size=2;
    int arr[2]={3};
    cout<<missing_ele(arr , size);
    return 0;
}