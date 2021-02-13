#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
 int gd=DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 line(118,19,118,24);
 line(119,25,126,25);
 putpixel(127,26,14);
 line(128,27,129,27);
 getch();
 closegraph();
}