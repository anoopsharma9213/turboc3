#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 int x[1000],n=0,i;
 clrscr();
 printf("\nEnter the no. of elements to be inputted: ");
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {printf("Enter %d no.: ",i+1);
  scanf("%d",&x[i]);
 }
 for(i=0;i<a;i++)
  n+=(x[i]*x[i]);
 printf("Sum => %d",n);
 getch();
}