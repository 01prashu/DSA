#include <iostream>
using namespace std;
void duplicate(char str[])
{
    char dupli=0;
    for(int i=0;str[i]!=0;i++)
    {
        for(int j=i+1;str[j]!=0 &&str[j]>0;j++)
        {
            if(str[i]==str[j])
            {
                dupli=str[i];
                cout<<dupli;
                str[j]=-1;
            }
            
        }
    }
}
void count_freq(char str[])
{
    int hash_table[26]={0};
    for(int i=0;str[i]!=0;i++)
    {
        hash_table[str[i]-97]++;

    }
    for(int i=0;i<26;i++)
    {
        if(hash_table[i]>0)
        {
            char ch=i+97;
            cout<<ch<<" repeat "<<hash_table[i]<<" times"<<endl;
        }
    }

    
}
int main()
{
    char str[]="aabbccddeeffgghhiijjkklmn";
    // duplicate(str);
    count_freq(str);
    return 0;
}