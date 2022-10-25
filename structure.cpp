#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    char name[10];
    int rollno;
    float marks;
};
int main()
{
    student stu;
    cout<<"Enter the information";
    cout<<"Enter Name: "<<endl;
    cout<<"Enter Rollno: "<<endl;
    cout<<"Enter Marks: "<<endl;    
    cin>>stu.name>>stu.rollno>>stu.marks;
    cout<<"\nThe student information is ";
    cout<<"\nName is "<<stu.name;
    cout<<"\nRollno is "<<stu.rollno;
    cout<<"\nMarks is "<<stu.marks;
    getch();
}
