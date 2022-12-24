#include<iostream>
using namespace std;
int main()
{
    // int a=-1;
    // int a=8;
    /*if(a==8)
    {
        cout<<"Value is 9"<<endl;
    }
    if(a>0)
    {
        cout<<"Value is Positive"<<endl;
    }
    if(a>0 & a==9)
    {
        cout<<"value "<<endl;
    }
    else{
        cout<<"negaitive"<<endl;
    }
    */
   /*int p=6;
   int pa=p+2;

   if((p=8)==(pa))
   {
    cout<<"value is 8"<<" \n"<<"value of p is: "<<p<<" "<<"Value of pa is :"<<pa<<endl;
   }
   else{
    cout<<" value is positive"<<endl;
   }*/


  /* int a=10;
   if(a>9)
   {
    cout<<"More Love"<<endl;
   }
   else if(a>8)
   {
    cout<<"medium love "<<endl;
   }
   else{
    cout<<"No love"<<endl;
   }*/

   /*char ch;
   cout<<"Please Enter Any Character: "<<endl;
   cin>>ch;
   if((ch>=65)&&(ch<=90))
   {
    cout<<"Upper Case"<<endl;
   }
   else if((ch>=97)&&(ch<=122))
   {
    cout<<"Lower case"<<endl;
   }
   else{
    cout<<"Numeric Value"<<endl;
   }*/

   
   //Sum of numbers 
   /*int n;
   cout<<"Enter Number whose sum you want: ";
   cin>>n; 
   int sum=0;
   int i=1;
   while(i<=n)
   {
    sum=sum+i;
    i=i+1;
      
   }
   cout<<"Sum is: "<<sum<<endl;
   */

  //##Sum of even numbers
//   int n;
//   cout<<"Enter numbers upto which you want sum:";
//   cin>>n;
//   int sum=0;
//   int i=1;
//   while(i<=n)
//   {
//     if(i%2==0)
//     {
//         sum=sum+i;
//     }
//     i=i+1;
//   }
//   cout<<"Sum of even numbers is : "<<sum<<endl;

//##Sum of oddd numbers 
/* int n;
cout<<"Enter numbers upto which you want sum:";
cin>>n;
int i=1;
int sum=0;
while(i<=n)
{
    if(i%2!=0)
    {
        sum=sum+i;
    }
    i=i+1;
}
cout<<"Sum of Odd numbers is: "<<sum<<endl; */

//## Program to check given number is prime or not

/*int check_num;
cout<<"Enter Number which you have to check ?"<<endl;
cin>>check_num;
for(int i=2;i<check_num;i++)
{
    if(check_num %i==0)
    {
        cout<<"Not prime: "<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}*/
int n;
cin>>n;
while(n!=0)
{
    int digi=(n%10);
    for(int i=n%10;i<=5;i++)
    {
        cout<<i;
        break;
    }
    n=n/10;
}
 return 0;
}