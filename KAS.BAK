//#include<graphics.h>
//#include<stdlib.h>
#include<process.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>

//void sum();
//void mul();
//void diff();
//void div();
void rev();
void pal();
void ang();
void cal();
void frm();

void start();

void main()
{
 start();
}

/*void start()
{
 int gd,gm;
 clrscr();
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(15);
 setbkcolor(4);
 settextstyle(4,0,4);
 outtextxy(200,200,"ANOOP");
 rectangle(0,0,639,479);
 getch();
 closegraph();
}
*/

void start()
{
 int a;
 x:
 clrscr();
 printf("\n\tEnter 1: For printing the reverse number.");
 printf("\n\tEnter 2: For checking number is palindrome.");
 printf("\n\tEnter 3: For checking number is angstrom.");
 printf("\n\tEnter 4: For calculator.");
 printf("\n\tEnter 5: For making formations.");
 printf("\n\tEnter 0: Exit.");
 printf("\n\t\tEnter the choice: ");
 scanf("%d",&a);
 switch(a)
 {case 1: rev();
	  break;
  case 2: pal();
	  break;
  case 3: ang();
	  break;
  case 4: cal();
	  break;
  case 5: frm();
	  break;
  case 0: exit(0);
	  break;
  default:
  {printf("\t\tWRONG INPUT!!!\n\t\tTRY AGAIN...");
   delay(500);
   goto x;
  }
 }
}

void rev()
{
 long int a,b;
 clrscr();
 printf("\nEnter the number: ");
 scanf("%ld",&a);
 printf("\nReverse no. is: ");
 while(a!=0)
 {b=a%10;
  printf("%d",b);
  a=a/10;
 }
 getch();
 start();
}

void pal()
{
 getch();
}

void ang()
{
 getch();
}

void cal()
{
 getch();
}

void frm()
{
 getch();
}