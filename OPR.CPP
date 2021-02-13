#include<iostream.h>
#include<conio.h>

class complex{
	      int real,img;
      public :
	      complex();
	      complex(int,int);
	      void display();
	      complex operator+(complex);
	     };

int main()
{
 int a,b;
 clrscr();
 cout<<"\nEnter 1st No. :";
 cin>>a>>b;
 complex A(a,b);
 cout<<"\nEnter 2nd No. :";
 cin>>a>>b;
 complex B(a,b),C(5,4),D(10,3),E;
 E=A+B+C+D;
 E.display();
 getch();
 return 0;
}



complex:: complex()
{
 real=img=0;
}

complex:: complex(int x,int y)
{
 real=x;
 img=y;
}

void complex:: display()
{
 cout<<"\nComplex No.:  "<<real<<"+"<<img<<"i";
}

complex complex:: operator+(complex R)
{
 complex t;
 t.real=real+R.real;
 t.img=img+R.img;
 return t;
}