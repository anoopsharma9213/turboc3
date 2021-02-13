#include <string.h>
#include<stdio.h>

char p[20],t[20];

void main()
{
 int i,n,m,s,flag;
 clrscr();
 printf("Enter text : \n");
 gets(t);
 printf("Enter pattern : \n");
 gets(p);
 n = strlen(t);
 m = strlen(p);
 for(s=0;s<=n-m;s++)
 {
  flag=0;
  for(i=0;i<m;i++)
   if(p[i]!=t[s+i])
   {
    flag++;
    break;
   }
  if(flag==0)
   printf("Valid shift at %d.\n",s);
 }
 getch();
}