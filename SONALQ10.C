#include<stdio.h>
#include<conio.h>
void main(){
 char s[25];
 int i;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 printf("Reverse string: ");
 for(i=strlen(s)-1;i>=0;i--){
  printf("%c",s[i]);
 }
 getch();
}