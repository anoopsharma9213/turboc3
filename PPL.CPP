#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int i;

class std{
	  int roll;
	  char n[25],mob[11];
   public:
	  std()
	  {
	   roll=0;n[0]=NULL;mob[0]=NULL;
	  }
	  virtual void input()
	  {
	   cout<<"Enter roll number : ";
	   cin>>roll;
	   cout<<"Enter name : ";
	   gets(n);
	   cout<<"Enter mob no. : ";
	   gets(mob);
	  }
	  virtual void disp()
	  {
	   cout<<"Roll No. : "<<roll<<'\n';
	   cout<<"Name : "<<n<<'\n';
	   cout<<"Mob No. : "<<mob<<'\n';
	  }
	 };

class marks:public std{
	    int m[6];
     public:
	    marks();
	    void input();
	    void disp();
	   };

marks::marks()
{
 for(i=0;i<6;i++)
  m[i]=0;
}

void marks::input()
{
 for(i=0;i<6;i++)
 {
  cout<<"Enter marks of "<<i+1<<" subject : ";
  cin>>m[i];
 }
}

void marks::disp()
{
 for(i=0;i<6;i++)
 {
  cout<<"Marks of "<<i+1<<" Subject : "<<m[i]<<'\n';
 }
}

int main()
{
 clrscr();
 std *A, B;
 marks C;
 cout<<"Dynamic Binding!!!";
 cout<<"\nEnter details of student: \n";
 A = &B;
 A->input();
 A->disp();
 A = &C;
 A->input();
 A->disp();
 cout<<"\n\nStatic Binding!!!";
 cout<<"\nEnter details of student: \n";
 B.input();
 C.input();
 B.disp();
 C.disp();
 return 0;
}