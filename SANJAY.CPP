#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>

void main()
{
 int gd=DETECT,gm,i,j,k;
 clrscr();
 initgraph(&gd,&gm,"");
 circle(304,390,3);
 circle(309,385,3);
 circle(314,380,3);
 circle(319,375,3);
/* for(i=0;i<=30;i+=5)
 {
  if(i<=15)
  {circle(304+i,390+i,3);
   circle(304+i,390-i,3);
  }
  else
  {circle(304+i,405-(i-15),3);
   circle(304+i,375+(i-15),3);
  }
 }

/* delay(300);
 for(i=0,j=1;j<=40;i+=5,j++)
 {
  setfillstyle(1,15);
  if(i<=30)
  {if(i<=15)
    fillellipse(304+i,390-i,3,3);
   else fillellipse(304+i,375+(i-15),3,3);
  }
  else
  {if(i<=45)
    fillellipse(334-(i-30),390+(i-30),3,3);
   else fillellipse(334-(i-30),405-(i-45),3,3);
  }
  setfillstyle(1,7);
  k=i-5;
  if(k<0)
   fillellipse(309,395,3,3);
  else if(k<=30)
  {if(k<=15)
    fillellipse(304+k,390-k,3,3);
   else fillellipse(304+k,375+(k-15),3,3);
  }
  else
  {if(k<=45)
    fillellipse(334-(k-30),390+(k-30),3,3);
   else fillellipse(334-(k-30),405-(k-45),3,3);
  }
  setfillstyle(1,8);
  k=i-10;
  if(k<0)
   fillellipse(314-i,400-i,3,3);
  else if(k<=30)
  {if(k<=15)
    fillellipse(304+k,390-k,3,3);
   else fillellipse(304+k,375+(k-15),3,3);
  }
  else
  {if(k<=45)
    fillellipse(334-(k-30),390+(k-30),3,3);
   else fillellipse(334-(k-30),405-(k-45),3,3);
  }
  setfillstyle(1,0);
  k=i-15;
  if(k<0)
   fillellipse(319-i,405-i,3,3);
  else if(k<=30)
  {if(k<=15)
    fillellipse(304+k,390-k,3,3);
   else fillellipse(304+k,375+(k-15),3,3);
  }
  else
  {if(k<=45)
    fillellipse(334-(k-30),390+(k-30),3,3);
   else fillellipse(334-(k-30),405-(k-45),3,3);
  }
  if(i==60)
   i=0;
  delay(120);
 }*/
 getch();
 closegraph();
}