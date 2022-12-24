#include <iostream>
using namespace std;
//## Print negative value of array
void print_nega(int arr[] , int size)
{
    int i=0;
    while(i<size)
    {
        if(arr[i] < 0)
        {
            cout<<arr[i]<<" ";
        }
        i++;
    }
}

//## Count odd even of an array
void  count_odd_even(int arr[] , int size)
{
    int count_odd=0;
    int count_even=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)count_even++;
        else count_odd++;
    }
    cout<<"ODD "<<count_odd<<endl;
    cout<<"EVEN "<<count_even<<endl;
}
int main()
{
    int arr[10]={-1,2,-3,-4,-5,-6,8,-9,10, -12};
    int size=10;
    // print_nega(arr , size);
    count_odd_even(arr , size);

    return 0;
}