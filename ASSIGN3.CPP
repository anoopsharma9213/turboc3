#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

class Time{
	   int hh,mm,ss;
	   char pp[3];
	   int tick;
    public:
	   Time()
	   {
	    struct time t;
	    gettime(&t);
	    hh=t.ti_hour;
	    mm=t.ti_min;
	    ss=t.ti_sec;
	    if(hh>=0&&hh<=12)
	    {strcpy(pp,"AM");
	    }
	    else if(hh>=13&&hh<=23)
	    {strcpy(pp,"PM");
	     hh=hh-12;
	    }
	   }
	   void tickM()
	   {
	    int tick=1;
	    ss=ss+tick;
	    if(ss>=60)
	    {mm=mm+ss/60;
	     ss=ss%60;
	    }
	    if(mm>=60)
	    {hh=hh+mm/60;
	     mm=mm%60;
	    }
	    if(hh>11&&strcmp(pp,"AM")==0)
	     strcpy(pp,"PM");
	    if(hh>11&&strcmp(pp,"PM")==0)
	     strcpy(pp,"AM");
	    if(hh>12)
	     hh=hh-12;
	   }
	   void display()
	   {
	    cout<<"Current Time: "<<hh<<":"<<mm<<":"<<ss<<" "<<pp;
	   }
	  };

int main()
{
 Time A;
 int i;
 clrscr();
 A.display();
 for(i=1;i<=100;i++)
 {
  clrscr();
  A.tickM();
  A.display();
  delay(1000);
 }
 getch();
 return 0;
}