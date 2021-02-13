#include<iostream.h>
#include<conio.h>
void main()
{ int x[10];
float Sd,mean,sum=0,term,tot=0;
cout<<"Input 10 nos."<<endl;
for(int i=0;i<10;i++)
{ cin>x[i];
sum=sum/10;}
mean=sum/10;
for(i=0;i<10;i++)
{ term=pow((x[i]-mean),2);
tot=tot+term;
} SD=(sqrt(tot))/10;
cout<<SD;
getch();
}




