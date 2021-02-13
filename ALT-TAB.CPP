#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a,d,t,b[10],i;
 char ch,c[10];
 printf("\nEnter the number of windows:");
 scanf("%d",&a);
 clrscr();
 gotoxy(10,10);
 for(i=0;i<a;i++)
 {
  b[i]=i+1;
  printf("%d \t",b[i]);
  c[i]=' ';
 }
 gotoxy(10,11);
 c[0]='*';
 for(i=0;i<a;i++)
  printf("%c\t",c[i]);
 ch=getch();
 d=ch;
 i=0;
 while(d!=27)
 {
  if(d==9)
  {
   c[i]=' ';
   i+=1;
   if(i>a-1)
    i=0;
   c[i]='*';
  }
  else if(d==97)
  {
   c[0]='*';
   c[i]=' ';
   t=b[i];
   for(int j=i;j>0;j--)
   {
    b[j]=b[j-1];
   }
   b[0]=t;
   i=0;
  }
  clrscr();
  gotoxy(10,10);
  for(int j=0;j<a;j++)
   printf("%d\t",b[j]);
  gotoxy(10,11);
  for( j=0;j<a;j++)
   printf("%c\t",c[j]);
  ch=getch();
  d=ch;
 }
}
