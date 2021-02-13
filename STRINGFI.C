#include<stdio.h>
#include<conio.h>
void main()
{
int l,i;
char c,s[20];
clrscr();
printf("Enter the string=");
gets(s);
scanf("%c",&c);
for(l=0;s[l]!='\0';l++);
for(i=0;i<l;i++)
{
if(s[i]==c)
printf("%d",(i+1));
}
getch();
}

