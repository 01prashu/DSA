#include <iostream>
using namespace std;
int main()
{
    // char str[]="prashu";
    // char str1[100];
    // cin>>str1;
    // for(int i=0;str1[i]!=0;i++)
    // {
    //     cout<<i+1<<" "<<str1[i]<<endl;
    // }


    //## Change case of a string
    // char str1[]="PRASHU";
    // //we have to change to "prashu" 
    // int i=0;
    // while(str1[i]!=0)
    // {
        
    //     char ch=str1[i]+32;
    //     cout<<i<<" "<<ch<<endl;
    //     i++;
        
    // }
    // cout<<"Intial string : "<<str1<<endl;
    // for(int i=0;str1[i]!=0;i++)
    // {
    //     str1[i]=str1[i]+32;
    // }
    // cout<<str1;


    //##Toggle case if char is lower then convert to upper vice versa  ex)"wElCoMe" --afetr toggle "WeLcOmE"
    char str1[]="wELCoMe";
    cout<<str1<<endl;
    cout<<endl;
    for(int i=0;str1[i]!=0;i++)
    {
        if(str1[i]>='a')
        {
            str1[i]=str1[i]-32;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
    }
    cout<<str1;
    
    return 0;
}