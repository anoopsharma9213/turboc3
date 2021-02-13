#include<iostream.h>
#include<conio.h>

int main()
{
 int no;
 float ans;
 clrscr();
 cout<<"Enter number : ";
 cin>>no;
 try
 {
  if(no==0)
   throw no;
  else {ans=(float)100/no;
	cout<<"\n100/"<<no<<" = "<<ans;
       }
 }

 catch(int i)
 {
  cout<<"\nException Handled!!!";
  cout<<"\n100 cannot be divided by 0";
 }
 getch();
 return 0;
}