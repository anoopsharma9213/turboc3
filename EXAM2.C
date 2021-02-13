#include<stdio.h>
#include<conio.h>

union book{
	   int price;
	   int nop;
	   char n[25];
	  }x[3];

void main()
{
 int i;
 clrscr();
// for(i=0;i<3;i++)
 {
  printf("Enter %d element: ",i+1);
  printf("Enter name: ");
  scanf("%s",&x[0].n);
//  printf("Enter Price:");
//  scanf("%d",&x[0].price);
//  printf("Enter No. of Pages:");
//  scanf("%d",&x[0].nop);
 }
 clrscr();
 printf("\t\tBILL\n\n");
// for(i=0;i<3;i++)
  printf("\n%s\t%d\t%d\n",x[0].n,x[0].nop,x[0].price);
 getch();
}