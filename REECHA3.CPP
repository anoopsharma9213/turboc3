#include<iostream.h>
#include<conio.h>
void fact(int n);
void main()
{
clrscr();
int n;
cout<<"enter a number";
cin>>n;
cout<<"Its factorial is";
fact(n);
}
void fact(int n)
{
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
}
cout<<fact;
getch();
}





