#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class student
{
public:
char name[10];
char DOB[10];
long int telephone;
int rollno;

bool operator == (const student &i1)
{
if(rollno==i1.rollno)

return 1;
return 0;
}
bool operator<(const student &i1)
{
if(rollno<i1.rollno)
return 1;
return 0;
}
};
vector<student>ol;
void print(student& i1);
void display();
void insert();
void search();
bool compare(const student &i1, const student &i2)
{
return i1.rollno<i2.rollno;
}
int main()
{
int ch;
while(1)
{
cout<<"\n***Menu***";
cout<<"\n1.Insert";
cout<<"\n2.Display";
cout<<"\n3.Search";
cout<<"\n4.sort";
cout<<"\n5.exit";
cout<<"\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:
insert();
break;

case 2:
display();
break;

case 3:
search();
break;

case 4:
cout<<"\n\n sorted on roll numbers";
display();
break;

case 5:
exit(0);
}

} 
return 0;
}
void insert()
{
    student i1;
    cout<<"\n Enter Student Name:";
    cin>>i1.name;
    cout<<"\n Enter Student DOB:";
    cin>>i1.DOB;
    cout<<"\n Enter Student Telephone:";
    cin>>i1.telephone;
    cout<<"\n Enter Student Roll number:";
    cin>>i1.rollno;
    ol.push_back(i1);

}
void display()
{
    for_each(ol.begin(),ol.end(),print);

}
void print(student &i1)
{
	cout<<"\n";
    cout<<"\nStudent Name:"<<i1.name;
    cout<<"\nStudent DOB:"<<i1.DOB; 
    cout<<"\nStudent Telephone:"<<i1.telephone;
    cout<<"\nStudent Roll number:"<<i1.telephone;
}
void search()
{
    vector<student>::iterator p;
    student i1;
    cout<<"\nEnter Student roll number to search:";
    cin>>i1.rollno;
    p=find(ol.begin(),ol.end(),i1);
    if(p==ol.end())
{
    cout<<"\n found.";
}
else
{
    cout<<"\n Found.";
}
}
