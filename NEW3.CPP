#include<iostream.h>
#include<conio.h>
#include<process.h>

class Calculator{
		 double a,b;
	  public:
		 void insert();
		 void display(double,char);
		 void choice(char);
		 double add();
		 double sub();
		 double mul();
		 double div();

		 void addObject(Calculator X,Calculator Y)
		 {
		  a=X.a+Y.a;
		  b=X.b+Y.b;
		  cout<<"\n\nA : "<<a<<"\n\nB : "<<b;
		 }
		};


int main()
{
 Calculator A,B;
 char ch,ch1;
 clrscr();
/* do{
    clrscr();
    A.insert();
    cout<<"\nEnter 1: Add ";
    cout<<"\nEnter 2: Subtract";
    cout<<"\nEnter 3: Multiply";
    cout<<"\nEnter 4: Division";
    cout<<"\nEnter 0: Exit";
    cout<<"\nEnter Choice: ";
    ch=getch();
    A.choice(ch);
    cout<<"\n\nAnother Calculation (y/n): ";
    ch1=getch();
   }while(ch1=='Y'||ch1=='y');       */
   cout<<"Enter 1st Object: \n";
 A.insert();
 cout<<"Enter 2nd Object: \n";
 B.insert();
 Calculator C;
 C.addObject(A,B);
 getch();
 return 0;
}




void Calculator::insert()
{
 cout<<"Enter A : ";
 cin>>a;
 cout<<"Enter B : ";
 cin>>b;
}

void Calculator::display(double z,char ch)
{
 clrscr();
 if(ch=='1')
  cout<<"\n\t  A : "<<a<<"\n\t+ B : "<<b;
 else if(ch=='2')
  cout<<"\n\t  A : "<<a<<"\n\t- B : "<<b;
 else if(ch=='3')
  cout<<"\n\t  A : "<<a<<"\n\t* B : "<<b;
 else if(ch=='4')
  cout<<"\n\t  A : "<<a<<"\n\t/ B : "<<b;
 cout<<"\n\n\tAns : "<<z;
 getch();
}

void Calculator::choice(char ch)
{
 double z;
 if(ch=='1')
 {
  z=add();
  display(z,ch);
 }
 else if(ch=='2')
 {
  z=sub();
  display(z,ch);
 }
 else if(ch=='3')
 {
  z=mul();
  display(z,ch);
 }
 else if(ch=='4')
 {
  z=div();
  display(z,ch);
 }
 else exit(0);
}

double Calculator::add()
{
 return (a+b);
}

double Calculator::sub()
{
 return (a-b);
}

double Calculator::mul()
{
 return (a*b);
}

double Calculator::div()
{
 return (a/b);
}