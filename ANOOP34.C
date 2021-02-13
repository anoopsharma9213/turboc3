#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100],str1[100];
 int n;
 clrscr();
 printf("Enter main string: ");
 gets(str);
 printf("Enter sub string: ");
 gets(str1);
 if(strstr(str,str1)==0)
  printf("\nSub string not present in main string.");
 else
  printf("\nSub string present in main string		.");
 getch();
}