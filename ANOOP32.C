#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,i,x;
 int k;
 clrscr();
 printf("Enter the termination point: ");
 scanf("%ld",&n);
 for(x=2;x<=n;x++)
 {i=2;k=0;
  while(i<=x/2)
  {if(x%i==0)
    k++;
   i++;
  }
  if(k==0)
   printf("%ld\n",x);
 }
 getch();
}