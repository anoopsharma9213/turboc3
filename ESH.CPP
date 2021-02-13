#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[7],n;
void sum(int a[],int n);
cout<<"enter the elements of the array";
cout<<endl;
for(int i=0;i<7;i++)
cin>>a[i] ;
sum(a,n);
}
void sum(int x[],int y)
{
   float sum=0;
   for(int i=0;i<y;i++)
   sum=sum+x[i];
}
