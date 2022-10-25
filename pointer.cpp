#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, *p, **p1, ***p2;
    i=20;
    p=&i;
    cout<<"Value of i= "<<i<<endl;
    cout<<"Address of i= "<<&i<<endl;
    cout<<"Address through Pointer= "<<p<<endl;
    cout<<"Value through Pointer= "<<*p<<endl;
    *p=30;
    cout<<"i= "<<i<<endl;
    int k=*p;
    cout<<"Value of k= "<<k<<endl;
    p1=&p;
    cout<<"Address of p1= "<<*p1<<endl;
    cout<<"Value of p1= "<<**p1<<endl;
    p2=&p1;
    cout<<"Address of p2= "<<**p2<<endl;
    cout<<"Value of p2= "<<***p2<<endl;    
    getch();
}
