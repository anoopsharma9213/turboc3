#include<iostream.h>
#include<conio.h>

class Rational{
	       int n,d;
	       void lowF(int *a,int *b)
	       {
		int max,i=1,j=1;
		if(*a>=0)
		while(*a>=i||*b>=j)
		{if((*a%i==0)&&(*b%j==0))
		  max=i;
		  i++;
		  j++;
		}
		else if(*a<0)
		{*a=-*a;
		 while(*a>=i||*b>=j)
		 {if((*a%i==0)&&(*b%j==0))
		   max=i;
		   i++;
		   j++;
		 }
		 *a=-*a;
		}
		 *a=*a/max;
		 *b=*b/max;
		}
	public:
	       Rational()
	       {
		n=1;
		d=2;
		cout<<"Default value initialized : "<<n<<"/"<<d;
	       }
	       Rational(int x,int y)
	       {
		n=x;
		d=y;
		lowF(&n,&d);
	       }
	       void addF(Rational A,Rational B)
	       {
		int ns,ds;
		ns=(A.n*B.d)+(A.d*B.n);
		ds=A.d*B.d;
		lowF(&ns,&ds);
		cout<<"\nSum = "<<ns<<"/"<<ds;
	       }
	       void subF(Rational A,Rational B)
	       {
		int na,da;
		na=(A.n*B.d)-(A.d*B.n);
		da=A.d*B.d;
		lowF(&na,&da);
		cout<<"\nDifference = "<<na<<"/"<<da;
	       }
	       void mulF(Rational A,Rational B)
	       {
		int nm,dm;
		nm=(A.n*B.n);
		dm=A.d*B.d;
		lowF(&nm,&dm);
		cout<<"\nProduct = "<<nm<<"/"<<dm;
	       }
	       void divF(Rational A,Rational B)
	       {
		int nd,dd;
		nd=(A.n*B.d);
		dd=A.d*B.n;
		lowF(&nd,&dd);
		cout<<"\nDivision = "<<nd<<"/"<<dd;
	       }
	       void prtF()
	       {
		cout<<n<<"/"<<d<<"\n";
	       }
	      };

int main()
{
 clrscr();
 cout<<"A :  ";
 Rational A;
 int a,b;
 cout<<"\nEnter numerator and denominator for B: ";
 cin>>a>>b;
 Rational B(a,b);
 cout<<"\nA : ";
 A.prtF();
 cout<<"\nB : ";
 B.prtF();
 A.addF(A,B);
 A.subF(A,B);
 A.mulF(A,B);
 A.divF(A,B);
 getch();
 return 0;
}