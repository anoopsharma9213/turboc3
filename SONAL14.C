#include<stdio.h>
#include<conio.h>
void main(){
 char n[25];
 int count=0,space[4],i;
 clrscr();
 printf("Enter name: ");
 gets(n);
 for(i=0;i<strlen(n);i++){
  if(n[i]==' '){
   space[count] = i+1;
   count++;
  }
 }
 if(count==0){
  printf("Name is %s",n);
 } else if(count==1){
  printf("Name is %c. ",n[0]);
  for(i=space[0];i<strlen(n);i++){
   printf("%c",n[i]);
  }
 } else {
  printf("Name is %c. ",n[0]);
  printf("%c. ",n[space[0]]);
  for(i=space[1];i<strlen(n);i++){
   printf("%c",n[i]);
  }
 }
 getch();
}