#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>

void start();

void main()
{
 start();
}

void start()
{
 int gd=DETECT,gm,v=0,h=0;
 char ch;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 circle(5,5,5);
 setcolor(15);
 circle(5,5,4);
 setcolor(4);
 circle(5,5,3);
 m:
 ch=getch();
 if(ch=='s'||ch=='S')
 {if(v!=469)
   v++;
  setfillstyle(0,14);
  ellipse(319,239,0,360,500,400);
  fillellipse(319,239,500,400);
  setcolor(4);
  circle(5+h,5+v,5);
  setcolor(15);
  circle(5+h,5+v,4);
  setcolor(4);
  circle(5+h,5+v,3);
 }
 else if(ch=='w'||ch=='W')
      {if(v!=0)
	v--;
       setfillstyle(0,14);
       ellipse(319,239,0,360,500,400);
       fillellipse(319,239,500,400);
       setcolor(4);
       circle(5+h,5+v,5);
       setcolor(15);
       circle(5+h,5+v,4);
       setcolor(4);
       circle(5+h,5+v,3);
      }
 else if(ch=='a'||ch=='A')
      {if(h!=0)
	h--;
       setfillstyle(0,14);
       ellipse(319,239,0,360,500,400);
       fillellipse(319,239,500,400);
       setcolor(4);
       circle(5+h,5+v,5);
       setcolor(15);
       circle(5+h,5+v,4);
       setcolor(4);
       circle(5+h,5+v,3);
      }
 else if(ch=='d'||ch=='D')
      {if(h!=629)
	h++;
       setfillstyle(0,14);
       ellipse(319,239,0,360,500,400);
       fillellipse(319,239,500,400);
       setcolor(4);
       circle(5+h,5+v,5);
       setcolor(15);
       circle(5+h,5+v,4);
       setcolor(4);
       circle(5+h,5+v,3);
      }
 else if(ch==13)
  exit(0);
 goto m;
}