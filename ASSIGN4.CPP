#include<iostream.h>
#include<conio.h>

class Rectangle{
		float len,wid;
	 public:
		Rectangle()
		{
		 len=1;
		 wid=1;
		}
		void get()
		{
		 cout<<"Enter Length (1 to 20): ";
		 cin>>len;
		 cout<<"Enter Width (1 to 20): ";
		 cin>>wid;
		}
		int set()
		{
		 if(len<=0||len>20)
		  return 1;
		 else if(wid<=0||wid>20)
		  return 2;
		 else return 0;
		}
		void calPA()
		{
		 int p=2*(len+wid),a=len*wid;
		 cout<<"\nPerimeter : "<<p;
		 cout<<"\nArea : "<<a;
		}
	       };

int main()
{
 Rectangle A;
 clrscr();
 A.get();
 if(A.set()==1)
  cout<<"Invalid Length !!!";
 else if(A.set()==2)
  cout<<"Invalid Width !!!";
 else{clrscr();
      A.calPA();
     }
  getch();
 return 0;
}