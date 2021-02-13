#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
 int i,j,a[10],b[10],o[10];

for(i=0;i<10;i++)
{cout<<"ENTER A INTEGER"<<endl;
cin>>a[i];
}
clrscr();
cout<<"EVEN"<<endl;
for(i= 0;i<10;i++)
if(a[i]%2==0) cout<<a[i]<<endl;
cout<<endl;
cout<<"ODD"<<endl;
for (i=0;i<10;i++)
if(a[i]%2!=0) cout<<a[i]<<endl;

getch();
}

