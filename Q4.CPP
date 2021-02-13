#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
void swap(int a,int b);
cout<<"enter the values of a and b"<<endl;
cin>>a>>b;
swap(a,b);
cout<<c;
   }

void swap(int y,int x)
{ int temp;
  temp=y;
  y=x;
  x=temp;
getch();
}
