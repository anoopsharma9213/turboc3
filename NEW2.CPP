#include<iostream.h>
#include<conio.h>

class Highscore{
		long int prev,updt,nog,tots;
	 public:
		Highscore(int x)
		{
		 prev=x;
		 nog=0;
		 tots=0;
		}
		void input()
		{
		 cout<<"Enter the Updated Highscore : ";
		 cin>>updt;
		 nog++;
		}
		void calc()
		{
		 if(updt<prev)
		  tots-=updt;
		 else tots+=updt;
		}
		void output()
		{
		 calc();
		 cout<<"\nTotal number of Games played : "<<nog;
		 cout<<"\nNew Score : "<<updt;
		 cout<<"\nTotal Score : "<<tots;
		}
	       };

int main()
{
 clrscr();
 int a;
 cout<<"Enter Previous Score : ";
 cin>>a;
 Highscore A(a);
 A.input();
 clrscr();
 A.output();
 getch();
 return 0;
}