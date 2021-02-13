#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void start();

void main()
{
 start();
}

void start()
{
 int gd=DETECT,gm,i=1;
 int poly[8]={317,229,317,249,321,249,321,229};
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 fillpoly(4,poly);
 while(kbhit()==0)
 {
  x=getch();
  if(x==0)
  {
   x=getch();
   if(x==77)
    j=0;
   else if()
  }
  setcolor(1);
  setfillstyle(1,1);
  fillpoly(4,poly);
  if(poly[1]==1)
  {
   poly[1]=poly[7]=458;
   poly[3]=poly[5]=478;
  }
  poly[1]=poly[1]-i;
  poly[3]=poly[3]-i;
  poly[5]=poly[5]-i;
  poly[7]=poly[7]-i;
  setcolor(14);
  setfillstyle(1,14);
  fillpoly(4,poly);
  delay(10);
 }
 getch();
 closegraph();
}