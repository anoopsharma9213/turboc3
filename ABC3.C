#include<stdio.h>
#include<conio.h>

void leap(int);

void main()
{
 int a;
 clrscr();
 printf("Enter a year: ");
 scanf("%d",&a);
 leap(a);
 getch();
}

void leap(int y)
{
 if(y%4==0)
  printf("\n%d is leap year.",y);
 else printf("\n%d is not a leap year.",y);
}