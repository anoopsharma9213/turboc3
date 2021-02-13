#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>

class Rectangle{
		int x1,x2,x3,x4;
		int y1,y2,y3,y4;
	 public:
		Rectangle()
		{
		 set();
		}
		void set()
		{l:
		 cout<<"Enter (x1,y1) : ";
		 cin>>x1>>y1;
		 if((x1<0||x1>20)||(y1<0||y1>20))
		 {cout<<"Invalid Coordinates !!!\n";
		  goto l;
		 }
		 m:
		 cout<<"Enter (x2,y2) : ";
		 cin>>x2>>y2;
		 if((x2<0||x2>20)||(y2<0||y2>20))
		 {cout<<"Invalid Coordinates !!!\n";
		  goto m;
		 }
		 n:
		 cout<<"Enter (x3,y3) : ";
		 cin>>x3>>y3;
		 if((x3<0||x3>20)||(y3<0||y3>20))
		 {cout<<"Invalid Coordinates !!!\n";
		  goto n;
		 }
		 o:
		 cout<<"Enter (x4,y4) : ";
		 cin>>x4>>y4;
		 if((x4<0||x4>20)||(y4<0||y4>20))
		 {cout<<"Invalid Coordinates !!!\n";
		  goto o;
		 }
		 if(y1!=y2||y3!=y4||x1!=x4||x2!=x3)
		 {cout<<"Coordinates not corresponds to Rectangle !!!";
		  getch();
		  exit(0);
		 }
		}
		void calLWPA()
		{
		 int a=abs(x2-x1),b=abs(y4-y1),p=2*(a+b),A=a*b;
		 if(a>b)
		 {cout<<"\nLength : "<<a<<"\nWidth : "<<b;
		  cout<<"\nPerimeter : "<<p<<"\nArea : "<<A;
		 }
		 else if(a<b)
		 {cout<<"\nLength : "<<b<<"\nWidth : "<<a;
		  cout<<"\nPerimeter : "<<p<<"\nArea : "<<A;
		 }
		 else {cout<<"\nIt is a Square. "<<"\nSide : "<<a;
		  cout<<"\nPerimeter : "<<p<<"\nArea : "<<A;
		 }
		}
		void setFillcharacter()
		{int s=x1,f=y1;
		 char fc,pc;
		 cout<<"\n\nEnter Fill Character : ";
		 cin>>fc;
		 cout<<"Enter Outline Character : ";
		 cin>>pc;
		 clrscr();
		 gotoxy(x1,y1);
		 while(f<=y4)
		 {s=x1;
		  gotoxy(s,f);
		  while(s<=x2)
		  {cout<<fc;
		   s++;
		  }
		  f++;
		 }
		 gotoxy(x1,y1);
		 for(f=x1;f<=x2;f++)
		  cout<<pc;
		 gotoxy(x4,y4);
		 for(f=x4;f<=x3;f++)
		  cout<<pc;
		 gotoxy(x1,y1);
		 for(f=y1;f<=y4;f++)
		 {gotoxy(x1,f);
		  cout<<pc;
		  gotoxy(x2,f);
		  cout<<pc;
		 }
		}
	       };

int main()
{
 clrscr();
 cout<<"Enter Rectangle Coordinates (Clockwise) : \n";
 Rectangle A;
 clrscr();
 A.calLWPA();
 A.setFillcharacter();
 getch();
 return 0;
}