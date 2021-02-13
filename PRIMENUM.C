#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the number=");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("No. is not a prime number");
break;
}
}
if(i==n)
printf("No. is prime no.");
getch();
}

