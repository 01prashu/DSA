#include<iostream>
using namespace std;
int main()
{
    int p=10;
    int *ptr=&p;
    int *(*ptr1)=&ptr;
 return 0;
}