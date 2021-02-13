#include<iostream.h>
#include<conio.h>

class Account{
	      long int acn,bal;
	      static int r;
       public:
	      Account();
	      void input();
	      void display();
	      static void updt(int);
	     };

int Account:: r=3;

int main()
{
 int a;
 clrscr();
 Account A,B,*p;
 p=&Account(A);
 p->input();
 B.input();
 clrscr();
 cin>>a;
 A.updt(a);
 p->display();
 cout<<*p;
 *p++;
 cout<<*p;
 getch();
 return 0;
}


Account:: Account()
{
 acn=bal=0;
}

void Account:: input()
{
 cout<<"\n\t\tEnter Account No.: ";
 cin>>acn;
 cout<<"\n\t\tEnter Balance: ";
 cin>>bal;
}

void Account:: display()
{
 cout<<"\n\t\tAccount No.: "<<acn;
 cout<<"\n\t\tBalance: "<<bal;
 cout<<"\n\tInterest: "<<r;
}

void Account:: updt(int a)
{
 r=a;
}