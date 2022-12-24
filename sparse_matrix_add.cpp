#include<iostream>
using namespace std;

int main()
{
   int a[5]={30,45,60,20,5};
   int b[5]={10,25,40,65,15};
   int c[10];
   int i=0 , j=0 ,k=0;
   while(i<5 && j<5)
   {
    if(a[i]>=b[j])
    {
        c[k]=b[j];
        j++;
        k++;
    }
    else{
        c[k]=a[i];
        i++;
        k++;
    }
   }
   for(;i<5;i++)
   {
    c[k]=a[i];
   }
   for(;j<5;j++)
   {
    c[k]=b[j];
   }
   for(int i=0;i<10;i++)
   {
    cout<<c[i]<<" ";
   }
    return 0;
}