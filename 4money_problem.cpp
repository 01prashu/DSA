#include <iostream>
using namespace std;
// class money
// {
//     int amount;
//     int note;
//     int reamining;

// public:
//     void hun(int amount);
//     void fifty(int amount);
//     void twenty(int amount);
//     void ten(int amount);
// };
// void money::hun(int a)
// {
//     amount = a;
//     note = (amount) / 100;
//     reamining=(amount -(note*100));
//     cout << "Note Of 100 : " << note << endl;
//     cout << "Remaining coin is : " << reamining << endl;
// }
// void money::twenty(int t)
// {
//     amount = t;
//     note = (amount) / 20;
//     reamining = (amount - (note * 20));
//     cout << "Note Of 20 : " << note << endl;
//     cout << "Remaining coin is : " << reamining << endl;
// }
// void money::fifty(int a)
// {
//     amount = a;
//     note = (amount) / 50;
//     reamining = (amount - (note * 50));
//     cout << "Note Of 50 : " << note << endl;
//     cout << "Remaining coin is : " << reamining << endl;
// }
// int main()
// {
//     int amount ;
//     cout<<"Enter Amount Of Money "<<endl;
//     cin>>amount;
//     int opr;
//     cout << "Enter Which Rupees Note Calculation You want ?" << endl;
//     cout << "1 . No of hundred note : " << endl;
//     cout << "2 . No of fifty note" << endl;
//     cout << "3 . No of twenty note" << endl;
//     cin >> opr;
//     switch (opr)
//     {
//     case 1:
//         money m1;
//         m1.hun(amount);
//         break;
//     case 2: 
//         money m2;
//         m2.fifty(amount);
//         break;
//     case 3:
//         money m3;
//         m3.twenty(amount);
//         break;
//     default: cout<<"Invalid Input"<<endl;
//         break;

//     }
//     return 0;
// }


int main()
{
    int amount=1386;
    int hun , fifty , twenty , ten , coin , rem;
    if(amount >100)
    {
        hun=amount/100;
        rem=(amount -(hun)*100);
        if((rem >=50) && (100> rem))
        {
            fifty=rem/50;
            rem=(rem -(fifty)*50);
        }
        if((rem >=20) && (50> rem))
        {
            twenty=rem/20;
            rem=(rem -(twenty)*20);
        }
        if((rem >=10)&& (rem <20))
        {
            ten=rem/10;
            rem = (rem -(ten)*10);
        }
    
        
    }
    cout<<"Hundred: "<<hun<<endl;
    cout<<"fifty" <<fifty<<endl;
    cout<<"twenty: "<<twenty<<endl;
    cout<<"ten : "<<ten<<endl;
    cout<<"remaining: "<<rem<<endl;

    return 0;
}