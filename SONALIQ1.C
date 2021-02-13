#include<stdio.h>
#include<conio.h>

void main(){
 char s[50],c;
 int i;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 printf("Enter character to search: ");
 scanf("%c",&c);
 printf("Character present at ");
 for(i=0;i<strlen(s);i++){
  if(s[i]==c){
   printf("%d ",(i+1));
  }
 }
 getch();
}