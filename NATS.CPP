#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int a=5,b=2,c=11;
/*int c=(a++ + ++b ) + --b + ++a;
cout<<a<<"  "<<b<<"  "<<c;    */
//float r=4.234389;
//cout.setf(ios::showpos);
//cout<<setw(8)<<setprecision(3)<<r;

int d=a>b?a>c?6:12:b>c?7:23;
cout<<d;

getch();
}