#include<stdio.h>
#include<conio.h>
#include<process.h>

void circle();
void rectangle();
void triangle();
void square();

void main()
{
 int ch;
 m:
 clrscr();
 printf("\nEnter 1: Area of Circle. ");
 printf("\nEnter 2: Area of Triangle. ");
 printf("\nEnter 3: Area of Rectangle. ");
 printf("\nEnter 4: Area of Square. ");
 printf("\nEnter 0: Exit. ");
 printf("\n\nEnter Choice: ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: circle();
	  break;
  case 2: triangle();
	  break;
  case 3: rectangle();
	  break;
  case 4: square();
	  break;
  case 0: exit(0);
	  break;
  default:{printf("\n\n\tWrong Choice!!!");
	   getch();
	  }
 }
 goto m;
}

void circle()
{float r,a;
 printf("\nEnter radius: ");
 scanf("%f",&r);
 a=3.14*r*r;
 printf("\n\n\tArea of Circle: %f",a);
 getch();
}

void triangle()
{float b,h,a;
 printf("\nEnter base and height: ");
 scanf("%f%f",&b,&h);
 a=0.5*b*h;
 printf("\n\n\tArea of Triangle: %f",a);
 getch();
}

void rectangle()
{float l,b,a;
 printf("\nEnter length and breadth: ");
 scanf("%f%f",&l,&b);
 a=l*b;
 printf("\n\n\tArea of Rectangle: %f",a);
 getch();
}

void square()
{float s,a;
 printf("\nEnter Side: ");
 scanf("%f",&s);
 a=s*s;
 printf("\n\n\tArea of Square: %f",a);
 getch();
}
