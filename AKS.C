#include<stdio.h>
#include<conio.h>
void main()
{
 int avg,sum=0,i;
 int marks[10];
 clrscr();
 for(i=0;i<=9;i++)
 {printf("Enter marks of %d student: ",i+1);
  scanf("%d",&marks[i]);
 }
 for(i=0;i<10;i++)
  sum+=marks[i];
 avg=sum/10;
 printf("\nAverage of class is: %d",avg);
 getch();
}