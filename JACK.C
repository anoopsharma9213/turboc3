#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<process.h>

void main()
{
 int gm,gd,i;
 clrscr();
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(15);
 settextstyle(7,0,4);
 outtextxy(40,50,"HELLO!");
 for(i=1;i<=400;i++)
 {if(i%2==0)
   setcolor(14);
  else
   setcolor(4);
  circle(319,239,i);
  delay(20);
 }
 setcolor(4);
 rectangle(0,0,639,479);
 getch();
 closegraph();
}