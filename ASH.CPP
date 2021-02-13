#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int m[10],s[10],avg[10],roll[10],i,j,tm,ta,tr,ts;
char name[10][15],tn[15];
cout<<"Enter name,roll no.,marks in maths & science"<<endl;
{for(i=0;i<10;i++)
gets(name[i]);
cin>>roll[i]>>m[i]>>s[i];
avg[i]=(m[i]+s[i])/2;
cout<<avg[i]<<endl;
}
for(i=0;i<10;i++)
{ for(j=i+1;j<9;i++)
if(avg[i]<avg[j])
{ta=avg[i];
avg[i]=avg[j];
avg[j]=ta;
tm=m[i];
m[i]=m[j];
m[j]=tm;
ts=s[i];
s[i]=s[j];
s[j]=ts;
tr=roll[i];
roll[i]=roll[j];
roll[j]=tr;

tn=name[i];
name[i]=name[j];
name[j]=tn;
}}
for(i=0;i<10;i++)
puts(name[i]);
cout<<roll[i]<<endl<<s[i]<<endl<<m[i]<<endl<<avg[i]<<endl;

getch();
}