#include<stdio.h>
#include<conio.h>

void main()
{
 int x,i;
 clrscr();
 for(i=0;i<500;i++)
 {x=0;
  delay(10);
  x=kbhit();
  if(x!=0)
  {x=getch();
   printf("%d",x);
  }
 }
// getch();
}