#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int no[5],d[5],t[5],i,j;
    cout<<"enter 5 no";
    for(i=0;i<=4;i++)
    cin>>no[i];
    clrscr();
     int a;
    for (i=0;i<=3;i++)
    for (j=j+1;j<=4;j++)
    {
    if (no[i]>no[j]);
     {a=no[i];
     no[i]=no[j];
     no[j]=a;

     }
     for (i=0;i<=4;i++)
     {
    d[i]=5.0/100*no[i];
    t[i]=no[i]-d[i];
    for (i=0;i<=4;i++)
    cout<<no[i]<<"           "<<t[i];
    cout<<endl;}
    getch();}
    }