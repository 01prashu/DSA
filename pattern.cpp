#include<iostream>
using namespace std;
int main()
{
    /*
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" * "<<" ";
        }
        cout<<endl;
    }
    
   int row;
   cin>>row;
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<(row/2);j++)
    {
        cout<<" * ";
    }
    cout<<endl;
   }
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
        cout<<" * ";
    }
    cout<<endl;
  }
   */
//   int num;
//   cin>>num;
//   for(int i=1;i<=num;i++)
//   {
//     for(int j=i;j<=num;j++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//   }

// int num;
// cin>>num;
// for(int i=num;i>=1;i--)
// {
//     for(int j=i;j>=1;j--)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         cout<<n-j+1<<" ";
//     }
//     cout<<endl;
// }



// int n;
// cin>>n;
// int value=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++)
//     {
//         cout<<value<<"  ";
//         value++;
//     }
//     cout<<endl;
// }


// int st;
// cin>>st;
// for(int i=1;i<=st;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


// int num;
// cin>>num;
// int count=1;
// for(int i=1;i<=num;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
    
//     for(int j=1, value=i;j<=i;j++,value++)
//     {
//         cout<<value<<" ";

//     }
//     cout<<endl;
// }


// int method2;
// cin>>method2;
// for(int i=1;i<=method2;i++)
// {
//     for(int j=1;j<=i;j++)
//     {

//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1,n=i;j<=i;j++)
//     {
//         cout<<n-j+1<<" ";
//     }
//     cout<<endl;
// }


//##Character Pattern
//   (1)
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         char ch='A'+i;
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++){
//         char col='A'+j;
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// int c=0;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++,c++)
//     {
//         char ch='A'+c;
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// int val;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1,val=i;j<=i;j++,val++)
//     {
//         char ch ='A'+val-1;
//         cout<<ch<<" ";
        
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;

// for(int i=1;i<=n;i++)
// {
//     char ch ='A'+n-i;
//     for(int j=1;j<=i;j++)
//     {
        
//         cout<<ch<<" ";
//         ch++;
        
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     char ch='A'+i-1;
//     for(int j=1;j<=n;j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     int space=n-i;
//     for(int j=1;j<=space;j++)
//     {
//         cout<<" ";
//     }
//     for(int k=space;k<n;k++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }


// int num;
// cin>>num;
// for(int i=1;i<=num;i++)
// {
//     for(int j = 1; j<=num; j++)
//     {
//         if(j>=i)
//         {
//             cout<<"*"<<" ";
//         }
//         else
//         {
//             cout<<"  ";
//         }
        

//     }
//     cout<<endl;
// }
// int n;
// cin>>n;
// int value=n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=n;j>=i;j--)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=n-i+1; j>=1;j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


//final pattern
// int n;
// cin>>n;
// int k=n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         // 
//         if(i>=j)
//         {
//             cout<<j<<" ";
//         }
        
//     }
    
//     for(int k=1;k<=n-i;k++)
//     {
//         cout<<"*"<<" ";
//     }
//     for(int p=n;p>=i;p--)
//     {
//         cout<<p<<" ";
//     }
    
//     cout<<endl;
//     // for(int j=1; j<=i-1; j++)
//     // {
//     //     cout<<"*"<<" ";
//     // }
//     // cout<<endl;
// }


// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<"*"<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

    return 0;
}