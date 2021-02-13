#include<stdio.h>
#include<conio.h>

float prod(int,float);

void main()
{
 int x;
 float y,p;
 clrscr();
 printf("Enter an integer number: ");
 scanf("%d",&x);
 printf("Enter a float number: ");
 scanf("%f",&y);
 p=prod(x,y);
 printf("Product = %f",p);
 getch();
}

float prod(int a,float b)
{
 float c;
 c=a*b;
 return c;
}