#include<stdio.h>

void main()
{
 char frame[50];
 int i,c=0;
 clrscr();
 printf("Enter the frame: ");
 scanf("%s",&frame);
 for(i=0;frame[i]!='\0';i++)
  if(frame[i]=='1')
   c++;
 if(c%2==0)
  printf("\nFrame is having PARITY EVEN!!!");
 else printf("\nFrame is having PARITY ODD!!!");
 getch();
}