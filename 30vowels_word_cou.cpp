#include <iostream>
using namespace std;
int count_vowel(char name[])
{
    char vowel[]="aeiouAEIOU";
    int c=0;
    for(int i=0;vowel[i]!=0;i++)
    {
        for(int j=0;name[j]!=0;j++)
        {
            if(vowel[i]==name[j])
            {
                c++;
            }
        }
    }
    return c;
}

int c_vowel(char str[])
{
    int c=0;
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]=='A' || str[i]=='E'|| str[i]== 'I' || str[i]=='O' || str[i]=='U')
        {
            c++;
        }
    }
    return c;
}

int main()
{
    
    char name[]="pravin";
    // cout<<count_vowel(name);
    // cout<<c_vowel(name);
    cout<<c_vowel(name);
    return 0;
}