#include<stdio.h>

void main()
{
 char s[11];
 int i,ch;
 clrscr();
 printf("PASSWORD: ");
 i=0;
 a:
 ch=getch();
 if(ch==8)
 {
  if(i==0)
   goto a;
  printf("\b \b");
  i--;
  goto a;
 }
 else if(ch==9)
  goto a;
 else if(ch==13);
 else if(i==10)
  goto a;
 else
 {
  printf("*");
  s[i]=ch;
  i++;
  goto a;
 }
 s[i]='\0';
 printf("\nPASSWORD : %s",s);
 getch();
}