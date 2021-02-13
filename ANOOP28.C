#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100],str1[100];
 int a;
 clrscr();
 printf("Enter 1st String: ");
 gets(str);
 printf("Enter 2nd String: ");
 gets(str1);
 a=strstr(str,str1);
 if(a==0)
  printf("\nString not present.");
 else
  printf("\nString present at %d position.",a);
 getch();
}