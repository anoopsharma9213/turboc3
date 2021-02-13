#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int day[7],max,min;
max=0;
min=0;
for(int i=0;i<7;i++)
{cout<<"enter the temperature of"<<i+1<<"day";
cin>>day[i];
if(max<day[i])
 max=day[i];
 if(min>day[i])
  min=day[i];

}
 cout<<endl<<max<<"\t"<<min;

 }



