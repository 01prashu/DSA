#include <iostream>
using namespace std;
void max_min(int arr[]  , int size)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
        else if(min >arr[i])
        {
            min=arr[i];
        }
    }
    cout<<max<<" "<<min;
}
int main()
{
    int arr[8]={-1,-1,56,56,7,9,3,45};
    int size=8;
    max_min(arr  , size);
    return 0;
}
