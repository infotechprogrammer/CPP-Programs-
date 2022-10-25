#include<iostream.h>
#include<conio.h>
void main()
{
int fact(int);    //declaration
int n, factorial;
cout<<"Enter the number\n";
cin>>n;
factorial=fact(n);  //calling
cout<<"\n Factorial of number "<<n<<" = "<<factorial;
getch();
}
int fact(int a)
{
int b;
if(a==1)
return(1);
else
b=a*fact(a-1);
return(b);
}
