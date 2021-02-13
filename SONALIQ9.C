#include<stdio.h>
#include<conio.h>
void main(){
 char s1[25],s2[25];
 int i,j, flag=0;
 clrscr();
 printf("Enter 1st string: ");
 gets(s1);
 printf("Enter 2nd string: ");
 gets(s2);
 if(strlen(s1)==strlen(s2)){
  for(i=0;i<strlen(s1);i++){
   for(j=0;j<strlen(s2);j++){
    if(s1[i]==s2[j]){
     flag++;
     break;
    }
   }
  }
  if(flag == strlen(s1)){
   printf("Strings are anagrams");
  } else {
   printf("Strings are not anagrams");
  }
 } else {
  printf("Strings are not anagrams");
 }
 getch();
}