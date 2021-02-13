#include<stdio.h>
#include<conio.h>
void main()
{
 struct book{
	     char n[25];
	     int price,pages;
	    };
 struct book b1,b2,b3;
 clrscr();
 printf("\tEnter names, prices & no. of pages of 3 book:\n");
 scanf("%s%d%d",&b1.n,&b1.price,&b1.pages);
 scanf("%s%d%d",&b2.n,&b2.price,&b2.pages);
 scanf("%s%d%d",&b3.n,&b3.price,&b3.pages);
 clrscr();
 printf("\n\n\tAnd this is what you entered:\n\n");
 printf("%s  Rs.%d  %d\n",b1.n,b1.price,b1.pages);
 printf("%s  Rs.%d  %d\n",b2.n,b2.price,b2.pages);
 printf("%s  Rs.%d  %d\n",b3.n,b3.price,b3.pages);
 getch();
}