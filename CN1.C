#include<stdio.h>
#include<math.h>

void main()
{
 int a,i=0,b=0,n;
 clrscr();
 printf("Enter the number :");
 scanf("%d",&n);
 a=n;
 while(a!=0)
 {
  b+=a%2*pow(10,i);
  a=a/2;
  i++;
 }
 printf("Number in Decimal:  %.d",b);
 getch();
}