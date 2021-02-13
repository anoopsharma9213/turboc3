
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,a[10],e[10],o[10],k=0,j=0;
cout<<"Enter 10 integers"<<endl;
for(i=0;i<10;i++)
{cin>>a[i];
if(a[i]%2==0)
{e[k]=a[i];
k++;  }
else
{o[j]=a[i];
j++;
}  }

cout<<"\tEVEN NOS."<<endl;
for(i=0;i<k;i++)
cout<<e[i]<<endl;
cout<<"\t  ODD NOS."<<endl;
for(i=0;i<j;i++)
cout<<o[i]<<endl;
getch();
}
