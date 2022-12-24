#include<iostream>
using namespace std;
int main()
{
   /* 
   //### Program for reverse number
   int n;
    cout<<"Enter Number which you want to reverse: "<<endl;
    cin>>n;
    cout<<"Reverse Number is"<<endl;
    while(n!=0)
    {
        int digit=n%10;
        for(int i=(n%10);i<=10;i++)
        {
            cout<<i;
            break;
        }
        
        n=n/10;
    }
    */
    

    //##Program for subtraction of product of digit and sum of digit
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int product=1;
    int sum=0;
    while(n !=0)
    {
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int sub=(product)-(sum);
    cout<<"Subtraction of "<<product<<" and "<<sum<<" is "<<sub<<endl;
    return 0;
}