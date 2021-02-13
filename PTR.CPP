#include<iostream.h>
#include<conio.h>

class std{
	  int a,b,c;
   public:
	  int z;
	  void input();
	  void display();
	 };

int main()
{
 clrscr();
 std a,b;
 std *p;
 a.input();
 b.input();
 p=&std(a);
 void (std::*p1)()=&std::display;
 (b.*p1)();
 p->display();
 int *p2;
 p2=(int*)&std(b);
 cout<<" a"<<*p2<<" b"<<*(p2+1)<<" c"<<*(p2+2)<<" z"<<*(p2+3);
 cout<<" a"<<*(p2+4)<<" b"<<*(p2+5)<<" c"<<*(p2+6)<<" z"<<*(p2+7);
 getch();
 return 0;
}

void std:: input()
{
 cout<<"\nEnter element: ";
 cin>>a>>b>>c>>z;
}

void std:: display()
{
 cout<<"a,b,c,z: "<<a<<b<<c<<z;
}