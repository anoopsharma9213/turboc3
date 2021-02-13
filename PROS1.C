#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>



void main()
{
 int gd=DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"");
 setfillstyle(1,14);
 putpixel(319,119,14);
 sector(319,149,90,180,20,30);
 putpixel(299,149,14);
 setfillstyle(1,0);
 setcolor(0);
 sector(388,129,180,170,70,70);
 setcolor(14);
 line(318,129,328,159);
 getch();
 closegraph();
}