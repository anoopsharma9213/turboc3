#include<stdio.h>
#include<conio.h>

int find(char *,char);

void main()
{
 char str[25],x;
 clrscr();
 printf("Enter a string:");
 gets(str);
 printf("Enter the character:");
 scanf("%c",&x);
 if(find(str,x)==1)
  printf("\nCharacter found.");
 else printf("\nCharacter not found.");
 getch();
}

int find(char *s,char ch)
{
 int i;
 for(i=0;s[i]!='\0';i++)
  if(s[i]==ch)
   return 1;
 return 0;
}