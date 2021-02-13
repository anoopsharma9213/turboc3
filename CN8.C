#include<stdio.h>
#include<conio.h>

void main()
{
 char f[100],g[100],t[100];
 int i,j,c,l,lf;
 clrscr();
 printf("Enter Bit Sequence: ");
 scanf("%s",&f);
 printf("Enter Generator: ");
 scanf("%s",&g);
 l=strlen(g);
 lf=strlen(f);
 strcpy(t,f);
 for(i=0;i<l-1;i++)
  t[lf+i]='0';
 t[lf+i]='\0';
 printf("%s\n%s\n",t,g);
 for(i=0;i<lf;i++)
   if(t[i]=='1')
    break;
 c=strlen(t)-i;
 while(c>=l)
 {
  for(j=0;j<l;j++)
   t[i+j]=((t[i+j]-48)^(g[j]-48))+48;
  for(i=0;i<strlen(t);i++)
   if(t[i]=='1')
    break;
  c=strlen(t)-i;
 }
 for(i=0;i<l-1;i++)
  f[lf+i]=t[lf+i];
 f[lf+i]='\0';
 printf("Frame to be sent: ");
 printf("%s",f);
 getch();
}