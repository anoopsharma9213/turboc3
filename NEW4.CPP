#include<iostream.h>
#include<conio.h>
#include<time.h>

class Carpark{
	      int noc;
	      float pay;
	      char cno[25];
	      time_t et;
       public:
	      void initialize();
	      void active();

	     };

int main()
{
 Carpark A;
 A.initialize();
 clrscr();
 A.active();
 return 0;
}

void Carpark::initialize()
{
 cout<<"\n\n\t\t\tGood Morning !!!";
 cout<<"\n\n\t\tEnter Tariff : ";
 cin>>pay;
}

void Carpark::active()
{
 cout<<"\n\n\tNumber of Cars : ";
 cout<<noc;
 cout<<"\n\n\t\tCar No: ";

 cin>>cno;
 cout<<"\n\n\t\tTime: ";
 et=time(NULL);
 cout<<et;
}