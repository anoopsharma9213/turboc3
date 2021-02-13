#include<stdio.h>
void main()
{
 FILE *f1;
 char m[25];
 int i;
 clrscr();
 f1=fopen("Password","w");
 gets(m);
 for(i=0;m[i]!='\0';i++)
  m[i]+=15;
 fputs(m,f1);
 fclose(f1);
 getch();
}