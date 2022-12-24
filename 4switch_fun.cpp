#include <iostream>
using namespace std;
int main()
{
    /*
    cout << "Which Opration you want to perform " << endl;
    cout << "a... Addition" << endl;
    cout << "b... Subtraction" << endl;
    cout << "c... Multiplication" << endl;

    while (1)
    {

        char ch;
        cin >> ch;

        switch (ch)
        {
        case 'a':
            int a, b;
            cout << "Enter Two Number " << endl;
            cin >> a >> b;
            cout << "Sum is: " << a + b << endl;
            ;
            break;
        case 'b':

            cout << "Enter Two Number " << endl;
            cin >> a >> b;
            cout << "Subtraction is : " << a - b << endl;
            break;
        case 'c':

            cout << "Enter Two Number " << endl;
            cin >> a >> b;
            cout << "Multiplication is : " << a * b << endl;
            break;

        default:
            cout << "Invalid synatax" << endl;
            break;
        }
        char condition;
        cout << "Do you want you continue ..y/n " << endl;
        cin>>condition;
        switch (condition)
        {
        case 'y':
            cout << "Please Again Enter which operation you want to perform" << endl;
            break;
        case 'n':
            cout<<"You Are existed now !!"<<endl;
            exit(0);//This exit(0)--terminates from program
            break;
        default:
            cout << "Please Enter valid Syntax";
            break;
        }
    }
    */

    // Continue
    /*
    for(int i=1;i<=20;i++)
    {
     if(i%2 !=0)// If " i " became an odd number then skip , otherwise print it...
     {
         continue;
     }
     else{
         cout<<i<<endl;
     }
    }
    */

    /*while (1)
    {
        int opr;
        cout<<"Enter your choice"<<endl;
        cin >> opr;
        switch (opr)
        {
        case 1:
            cout << "Number one case" << endl;
            break;
        case 2:
            cout << "Number two case" << endl;
            continue;//here continue  act as brek within while infintie loop only ---otherwise is not working in simply switch cases
        case 3:
            cout << "Number three case" << endl;
            continue;
        default:
            cout << "invalid syntax" << endl;
            
        }
    }
    */

   

   //## Note question
   int amount=1333;
   int hundred;
   int remaining;
   int fifty;
   int twenty;
   int ten;
   if(amount>=100)
   {
    hundred=(amount)/100;
    cout<<"Hundred Notes: "<<hundred<<endl;
    remaining=(amount -(hundred *100));
    if(remaining>=50 && remaining<100)
    {
        fifty=remaining/50;
        cout<<"Fifty Notes: "<<fifty<<endl;
        remaining=(remaining -(fifty *50));
    }
    if(remaining >=20 && remaining <50)
    {
        twenty=(remaining)/20;
        cout<<"Twenty Notes: "<<twenty<<endl;
        remaining=(remaining -(twenty *20));
    }
    if(remaining >=10 && remaining <20)
    {
        
        ten=(remaining)/10;
        cout<<"Ten notes are: "<<ten<<endl;
        remaining=(remaining -(ten *10));
    }
    cout<<"Remaining coin is: "<<remaining<<endl;
   }

    return 0;
}