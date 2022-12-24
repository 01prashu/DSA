#include <iostream>
using namespace std;
//## Soretd array
 void hash_dupli(int arr [], int size)
 {
    int size_hash=arr[size];
    int hash_array[size_hash]={0};
    for(int i=0;i<size;i++)
    {
        hash_array[arr[i]]++;
    }
    for(int i=0;i<size_hash;i++)
    {
        if(hash_array[i] >= 1)
        {
            cout<<i <<" repeat "<<hash_array[i]<<" times"<<endl;
        }
    }
 }


 //## FInd Duplicate for unsorted array
void unsort_ar_dupli(int arr [], int size2)
{
    for(int i=0;i<size2-1;i++)
    {
        int count=1;
        for(int j=i+1; j<size2;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        if(count >1 && arr[i] !=-1)
        {
            cout<<arr[i]<<" repeat "<<count<<" times"<<endl;
        }
    }
}

void unsort_hash_ar(int arr[] , int size)
{
    //for hash table first of all we should know the size of hash
    // for that we first calculate maximum of arr[] then maximum element will be the size of hash table
    //1) Calculate the max of array 
    //2) declared size of hash 

    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int hash_arr[max]={0};//size of hash_array should be the max of array given

    //this for loop increment the values of hash_array 
    for(int i=0;i<size;i++)
    {
        hash_arr[arr[i]]++;
    }
    for(int i=0;i<max;i++)
    {
        if(hash_arr[i]>=1)
        {
            cout<<i<<" repeat "<<hash_arr[i]<<" times";
        }
    }
    
}
int main()
{
    int arr[8]={1,2,2,2,3,4,4,4};
    int size1=8;
    int unsort_array[10]={34,5,6,7,6,6,7,5,10,10};
    int size2=10;
    // hash_dupli(arr , size1);
    unsort_ar_dupli(unsort_array , size2);

    return 0;
}