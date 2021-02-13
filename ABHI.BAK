#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
 FILE *fp,*ft;
 char ch,s[100],a[100],cp;
 fp=fopen("ice.dat","w");
 if(!fp)
 {
  printf("cannot open file.");
  exit(1);
}
while(strlen(gets(s))>0)
{
 fputs(s,fp);
 fputs("\n",fp);
}
fclose(fp);
fp=fopen("ice.dat","r");
if(!fp)
{
 printf("cannot open file.");
 exit(1);
}
while(1)
{
 ch=fgetc(fp);
 if(ch==EOF)
 break;
 printf("%c",ch);
}
fclose(fp);
 ft=fopen("ice.dat","w");
 if(!ft)
 {
  printf("cannot open file.");
  exit(1);
}
while(strlen(gets(s))>0)
{
 fputs(s,ft);
 fputs("\n",ft);
}
fclose(ft);
fp=fopen("ice.dat","r");
if(!fp)
{
 printf("cannot open file.");
 exit(1);
}
while(1)
{
 ch=fgetc(fp);
 if(ch==EOF)
 break;
 printf("%c",ch);
}
fclose(fp);
getch();
}