#include<stdio.h>
#include<conio.h>

struct book{
	    char n[25];
	    int p,b;
	   };
void main()
{
 struct book x[3];
 int i;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Enter book name: ");
  scanf("%s",&x[i].n);
  printf("Enter no. of pages: ");
  scanf("%d",&x[i].p);
  printf("Enter book price: ");
  scanf("%d",&x[i].b);
 }
 clrscr();
 printf("\n\tBILL\n\n");
 for(i=0;i<3;i++)
  printf("%d. %s  %d  %d\n",i+1,x[i].n,x[i].p,x[i].b);
 getch();
}