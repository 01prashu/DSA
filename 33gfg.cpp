#include <iostream>
using namespace std;
void equlibrium(int arr[], int size)
{
    int l=1 ,h=size , mid=(l+h)/2;
    for(int i=1;i<=size;i++)
    {
        mid=(l+h)/2;
        int j=mid-1 , k=mid+1 , left=0 , right=0;
        while(j>=1 && k<=size)
        {
            left=left+arr[j];
            j--;
            right=right+arr[k];
            k++;
        }
        if(right > left)
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    cout<<mid<<endl;
}


void max_pro(int arr[] , int size)
{
    int max_prod=1;
    
}
int main()
{
    int size = 5;
    int arr[5] = {6,-3,10,0,2};
    // kth_smallestnum(arr , size);
    // equlibrium(arr, size);
    max_pro(arr,  size);
    return 0;
}