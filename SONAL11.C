#include<stdio.h>
#include<conio.h>

void main(){
 char s[50],c;
 int i,count=0;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 printf("Enter character to search: ");
 scanf("%c",&c);
 for(i=0;i<strlen(s);i++){
  if(s[i]==c){
   count++;
  }
 }
 printf("Number of presence of %c : %d",c,count);
 getch();
}