#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float r[10],m[10],s[10],sum=0,a[10],i;
cout<<"Enter roll no.,maths marks,science marks"<<endl;
for(i=0;i<=9;i++)
{cin>>r[i]>>m[i]>>s[i];
a[i]=(m[i]+s[i])/2;}
for(i=0;i<=9;i++)
{cout<<"roll="<<r[i]<<"\t"<<"maths="<<m[i]<<"\t"<<"science="<<s[i]<<"\t"<<endl;
sum=sum+a[i];
}
cout<<"avg of class="<<sum/10;
getch();
}