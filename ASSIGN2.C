#include<iostream.h>
#include<conio.h>

class Rational{
	       int n,d;
	       void lowF()
	       {
		int max,i=1,j=1;
		while(n!=i||d!=j)
		 if(n%i==0&&d%j==0)
		  max=i;
		n=n/i;
		d=d/j;
	       }
	public:
	       Rational()
	       {
		n=1;
		d=2;
	       }
	       Rational(int x,int y)
	       {
		n=x;
		d=y;
		lowF();
	       }
	     /*  addF(Rational A,Rational B)
	       {

	       }*/
	       void prtF()
	       {
		cout<<n<<"/"<<d<<"\n";
	       }
	      };

int main()
{
 Rational A;
 int a,b;
 clrscr();
 cout<<"Enter numerator and denominator : ";
 cin>>a>>b;
 Rational B(a,b);
 cout<<"\nA : ";
 A.prtF();
 cout<<"\nB : ";
 B.prtF();
 getch();
 return 0;
}