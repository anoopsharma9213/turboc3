#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

class start{
     public:
	    start();
	   };

start::start()
{
 clrscr();
 int gd=DETECT,gm,i,j,k,l,m;
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 for(i=0;i<=5;i++)
 {
  circle(20,20,i);
  circle(20,459,i);
  circle(618,20,i);
  circle(618,459,i);
 }
 for(i=0;i<10;i++)
 {line(18+25*i,19+22*i,43+25*i,41+22*i);
  line(18+25*i,459-22*i,43+25*i,437-22*i);
  line(617-25*i,19+22*i,592-25*i,41+22*i);
  line(617-25*i,459-22*i,592-25*i,437-22*i);
  delay(100);
 }
 for(i=0,j=0,k=0,l=0;i<=25;i++,j++)
 {
  setcolor(14);
  if(i<21)
  {line(245,239-i,390,239-i);
   line(245,239+i,390,239+i);
  }
  else
  {
   for(m=0;m<4;m++)
   {line(245+(i-20)+m,239+i+m,390-(i-20)-m,239+i+m);
    line(245+(i-20)+m,239-i-m,390-(i-20)-m,239-i-m);
   }
  }
  setcolor(4);
  if(i>=12)
   line(264+j,239-i,314-j,239-i);
  else
  {line(264+j,239-i,276+j,239-i);
   line(302-j,239-i,314-j,239-i);
  }
  if(i>=8&&i<=16)
   line(264,239+i,314,239+i);
  else
  {line(264,239+i,276,239+i);
   line(302,239+i,314,239+i);
  }
  if(i>=8&&i<=16)
   line(317,239-i,327,239-i);
  else if(i<=9)
  {line(317,239-i,362-l,239-i);
   l++;
  }
  else line(317,239-i,364,239-i);

  if(i<=5)
   line(344+j,239+i,362+j,239+i);
  else if(i>=5&&i<=12)
   line(349,239+i,367,239+i);
  else if(i<=16&&i>=12)
   {line(349-k,239+i,367-k,239+i);
    k++;
   }
  else {line(317,239+i,367-k,239+i);
	k++;
       }
  setcolor(0);
  setfillstyle(1,0);
  if(i>=20)
  {ellipse(20,20,0,360,25-i,25-i);
   ellipse(20,459,0,360,25-i,25-i);
   ellipse(618,20,0,360,25-i,25-i);
   ellipse(618,459,0,360,25-i,25-i);
   for(m=0;m<=40;m++)
   {ellipse(11+m+((i-20)*40),239,0,360,0,229);
    ellipse(620-(m+((i-20)*40)),239,0,360,0,229);
   }
  }
  delay(100);
 }
 setfillstyle(1,0);

 getch();
 closegraph();
}
int main()
{
 start A;
 return 0;
}