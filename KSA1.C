#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
void main()
{
 int a[1000],g[10]={0,0,0,0,0,0,0,0,0,0},n;
 int gd=DETECT,gm,i;
 clrscr();
 printf("Enter the no. of students: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {printf("Enter marks of %d student: ",i+1);
  scanf("%d",&a[i]);
  g[a[i]/10]++;
 }
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(0);
 settextstyle(4,0,2);
 outtextxy(200,100,"Processing Data");
 setcolor(14);
 for(i=1;i<=150;i++)
 {rectangle(200,200,200+i,208);
  delay(30);
 }
 clrscr();
 closegraph();
 printf("\n\t\tFREQUENCY OF MARKS\n\n");
 for(i=0;i<=9;i++)
  printf("\n%d - %d =>\t%d",i*10,i*10+9,g[i]);
 getch();
}