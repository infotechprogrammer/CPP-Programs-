
#include<iostream>
#include<conio.h>
using namespace std;
class biodata      //base class
{
    char name[20];
    char sem[20];
    int age;
    int rollno;
    public:
    void readbio();
    void displaybio();
};
class marks        //base class
{
char subject[10];
float total;
public:
void readm();
void displaym();
};
class final:public biodata, public marks
{
long int phoneno;
public:
void readp();
void displayp();
};
void biodata::readbio()
{
    cout<<"Enter Name : "<<endl;
    cin>>name;
    cout<<"Enter Semester : "<<endl;
    cin>>sem;
    cout<<"Enter Age : "<<endl;
    cin>>age;
    cout<<"Enter RollNo : "<<endl;
    cin>>rollno;
}
void biodata:: displaybio()
{
cout<<"Name is : "<<name<<endl;
cout<<"Semester is : "<<sem<<endl;
cout<<"Age is : "<<age<<endl;
cout<<"RollNo is : "<<rollno<<endl;
}
void marks::readm()
{
    cout<<"Enter Subject name : "<<endl;
    cin>>subject;
    cout<<"Enter Marks"<<endl;
    cin>>total;
}
void marks::displaym()
{
    cout<<"Subject Name : "<<subject<<endl;
    cout<<"Marks are : "<<total<<endl;
}
void final::readp()
{
    cout<<"Enter phone number : "<<endl;
    cin>>phoneno;
}
void final::displayp()
{
    cout<<"Phone Number is : "<<phoneno<<endl;
}
int main()
{
    final obj;
    obj.readbio();
    obj.readm();
    obj.readp();
    cout<<"\nHere below all data of student is displayed : \n";
    obj.displaybio();
    obj.displaym();
    obj.displayp();
    getch();
}
