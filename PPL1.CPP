#include<iostream.h>

class complex{
	      int a,b;
       public:
	      complex();
	      complex(int,int);
	      complex operator+(complex &);
	      void print();
	     };

complex::complex()
{
 a=b=0;
}

complex::complex(int x,int y)
{
 a=x;b=y;
}

complex complex::operator+(complex &A)
{
 complex C;
 C.a = A.a+a;
 C.b = A.b+b;
 return C;
}

void complex::print()
{
 cout<<a<<"+i"<<b<<'\n';
}

int main()
{
 int x,y;
 cout<<"\nEnter real part : ";
 cin>>x;
 cout<<"Enter imaginary part : ";
 cin>>y;
 complex A(x,y),B(5,2),C;
 cout<<"A : ";
 A.print();
 cout<<"B : ";
 B.print();
 C=A+B;
 cout<<"C (A+B) : ";
 C.print();
 return 0;
}