#include<stdio.h>
#include<conio.h>

void main()
{
 char ch,ch1;
 int i=1;
 clrscr();
 printf("     1     2     3     4     5     6     7\n");
 a:
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==-108)
  {
   if(i==1)
   {
    printf("\b ");
    gotoxy(20,10);
    printf("This is %d Window!!!",i);
    gotoxy(6,2);
    printf(".");
   }

   else
   {
    printf("\b ");
    gotoxy(20,10);
    printf("This is %d Window!!!",i);
    gotoxy(6*i,2);
    printf(".");
   }
   i++;

   if(i==8)i=1;
  }
  goto a;
 }
}