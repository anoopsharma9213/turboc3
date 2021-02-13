#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
 int i,j,a[5],s[5],c[5];
 float sq[5];

for(i=0;i<=4;i++)
{cout<<"ENTER A INTEGER"<<endl;
cin>>a[i];
s[i]=a[i]*a[i];
c[i]=a[i]*a[i]*a[i];
sq[i]=sqrt(a[i]);
}
clrscr();

for(i=0;i<=4;i++)
{ cout<<a[i]<<'\a'<<'\t'<<s[i]<<'\a'<<'\t'<<c[i]<<'\a'<<'\t'<<sq[i]<<endl;
}
getch();
}

