#include<stdio.h>
#include<conio.h>
void main(){
 char s[25],sub[10];
 int i,j,flag;
 clrscr();
 printf("Enter a string: ");
 gets(s);
 printf("Enter search string: ");
 gets(sub);
 for(i=0;i<strlen(s);i++){
  if(s[i]==sub[0]){
   flag=0;
   for(j=0;j<strlen(sub);j++){
    if(s[i+j]!=sub[j]){
     flag++;
    }
   }
  }
 }
 if(flag==0){
  printf("Substring is present in String");
 } else {
  printf("Substring not present in String");
 }
 getch();
}