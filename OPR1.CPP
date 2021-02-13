#include<iostream.h>
#include<conio.h>

class Complex{
	      int real,img;
       public:
	      Complex();
	      Complex(int,int);
	      void input();
	      void display();
	      friend Complex operator+(Complex,Complex);
	      friend Complex operator+(Complex,int);
	      friend Complex operator+(int,Complex);
	      Complex operator=(const Complex&);
	      friend int operator==(Complex,Complex);
	     };


int main()
{
 Complex A,B,C(2,4),D,E,F;
 clrscr();
 A.input();
 B.input();
 D.input();
 clrscr();
 cout<<"A: ";
 A.display();
 B=B+4;
 cout<<"B: ";
 B.display();
 cout<<"C: ";
 C.display();
 D=5+A;
 cout<<"D: ";
 D.display();
 A=A+B+C+D;
 E=F=B;
 cout<<"E: ";
 E.display();
 cout<<"F: ";
 F.display();
 cout<<"A: ";
 A.display();
 if((A==C)==0)
  cout<<"Yes!!!";
 getch();
 return 0;
}

Complex:: Complex()
{
 real=img=0;
}

Complex:: Complex(int a,int b)
{
 real=a;
 img=b;
}

void Complex:: input()
{
 cout<<"\nEnter real part: ";
 cin>>real;
 cout<<"Enter img part: ";
 cin>>img;
}

void Complex:: display()
{
 cout<<"\nComplex No. : "<<real<<"+"<<img<<"i\n";
}

Complex operator+(Complex A,Complex B)
{
 Complex T;
 T.real=A.real+B.real;
 T.img=A.img+B.img;
 return T;
}

Complex operator+(Complex A,int b)
{
 Complex T;
 T.real=A.real+b;
 T.img=A.img;
 return T;
}

Complex operator+(int a,Complex B)
{
 Complex T;
 T.real=a+B.real;
 T.img=B.img;
 return T;
}

Complex Complex:: operator=(const Complex& A)
{
 real=A.real;
 img=A.img;
 return *this;
}

int operator==(Complex A,Complex B)
{
 if((A.real==B.real)&&(A.img==B.img))
  return 1;
 else return 0;
}