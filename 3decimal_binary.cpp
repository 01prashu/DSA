#include<iostream>

using namespace std;
// void reve(int num)
// {
//     while(num!=0)
//     {
//         int rem1=(num%10);
//         cout<<rem1;
//         num=num/10;
//     }
// }
int main()
{

    // int n=10;
    // // cin>>n;
    // int rev=0;
    // while(n!=0)
    // {
    //     int rem=(n%2);
    //     cout<<rem;
    //     n=n/2;
    // }
    //reverse number
    // int n;
    // cin>>n;
    // while(n!=0)
    // {
    //     int digit=n%10;
    //     for(int i=(n%10);i<=10;i++)
    //     {
    //         cout<<i;
    //         break;
    //     }
    //     n=n/10;
    // }


    //Decimal to binary conversion
    /******************************************************************************************************
     *   logic 1;
     *    --divide decimal number by 2 untile and unless we get n==0 
     *    --remainder stored in rem variable 
     *    --reverse that variable
     *    -- finished
     * 
     * **********************************************************************************************************/
    int n=5;
    int p=4;
    int dt=n & p;
    // cout<<(n>>2)<<endl;
    cout<<(2<<n)<<endl;
    cout<<dt;

    return 0;
}