#include <iostream>
using namespace std;
bool possible_solu(int arr [], int n, int mid ,int student)
{
    int page_sum=0;
    int student_count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+page_sum<=mid)
        {
            page_sum=page_sum+arr[i];
        }
        else
        {
            if(student_count>student || arr[i]>mid)
            {
                return false;
            }
            page_sum=arr[i];
        }
    }
    return true;
}
int allocation_problem(int arr[] ,int n)
{
    int s=0 , student=2;
    int sum=0 , ans;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(possible_solu(arr ,n,mid ,student))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[100]={12 , 43 , 67 , 90};
    int n=4;
    cout<<allocation_problem(arr , n);
    return 0;
}