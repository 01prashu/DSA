#include <iostream>
using namespace std;
void rev_str(char str[] , int size)
{
   char temp[size];
   int i;
   for(i=0;str[i]!=0;i++){}
   i=i-1;
   for(int j=0;i>=0 ;i--)
   {
    temp[j]=str[i];
    j++;
   }
   cout<<temp;
}
int main()
{
    // char str[]="How are you My dear fr    ie   nd";
    // int word=1;
    // for(int i=0;str[i]!=0;i++)
    // {
    //     if(str[i]==' ' && str[i-1]!=' ')
    //     {
    //         word++;
    //     }
    // }
    // cout<<word<<endl;

    //##reverse string
    char str[]="Prashant";
    int size =sizeof(str)/sizeof(char);
   
    rev_str(str , size);
    // cout<<str;
    return 0;
}