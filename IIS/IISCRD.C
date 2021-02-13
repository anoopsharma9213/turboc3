#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>


void crdit();

/*void main()
{
 crdit();
}
*/

void crdit()
{
 int gd=DETECT,gm,i=0;
 int poly[]={0,0,0,479,639,479,639,0};
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(230,200,"Credit");
 delay(200);
 for(i=0;i<500;i++)
 {
  setcolor(4);
  setfillstyle(1,0);
  fillpoly(4,poly);
  settextstyle(4,0,7);
  setcolor(14);
  outtextxy(230,200-i,"Credit");
  settextstyle(7,0,2);
  outtextxy(240,440-i,"Prepared By :");
  settextstyle(3,0,1);
  outtextxy(210,480-i,"Anoop Kumar Sharma");
  outtextxy(210,510-i,"Aakash Bhatia");
  outtextxy(210,540-i,"Abhishek Kumar(09)");
  outtextxy(210,570-i,"Abhishek Kumar(10)");
  outtextxy(210,600-i,"Abhishek Agarwal");
  outtextxy(210,630-i,"Abhishek Modi");
  outtextxy(210,660-i,"Abhishek Rana");
  outtextxy(210,720-i,"Special Thanks To:");
  settextstyle(7,0,5);
  outtextxy(90,750-i,"Mr. Rohit Khokher");
  delay(30);
 }
 delay(1500);
 closegraph();
}