#include<stdio.h>
#include<conio.h>
void main(){
 char s[50];
 int i, j, flag = 0;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 for(i=0,j=strlen(s)-1;i<j;i++,j--){
  if(s[i]!=s[j]){
   flag++;
  }
 }
 if(flag==0){
  printf("String is palindrome");
 } else {
  printf("String is not palindrome");
 }
 getch();
}