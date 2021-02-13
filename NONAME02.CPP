#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<graphics.h>
#include<stdlib.h>
#include<iomanip.h>
#include<dos.h>
#include<string.h>
main()
{clrscr();
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm"");
for(int i=0;i<500;i++)
{setcolor(random(i)) ;
circle(i,100,10);
getch();clrscr();
cout<<" aditya ravin"<<endl;
}getch();}

