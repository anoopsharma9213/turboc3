#include<stdio.h>
#include<conio.h>
void main(){
 int n, ct[100], cnu[100], i;
 clrscr();
 printf("Enter number of customers: ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
  printf("Enter type of %d customer: ",(i+1));
  scanf("%d",&ct[i]);
  printf("Enter number of units consumed of %d customer: ",(i+1));
  scanf("%d",&cnu[i]);
 }
 printf("Rebate of\n");
 for(i=0;i<n;i++){
  switch(ct[i]){
   case 1:
    if(cnu[i]<=60){
     printf("%d customer is 10\n",(i+1));
    } else if(cnu[i]>60 && cnu[i]<=100){
     printf("%d customer is 5\n",(i+1));
    } else {
     printf("%d customer is 4\n",(i+1));
    }
    break;
   case 2:
    if(cnu[i]<=60){
     printf("%d customer is 8\n",(i+1));
    } else if(cnu[i]>60 && cnu[i]<=100){
     printf("%d customer is 4\n",(i+1));
    } else {
     printf("%d customer is 2\n",(i+1));
    }
    break;
   case 3:
    if(cnu[i]<=60){
     printf("%d customer is 6\n",(i+1));
    } else if(cnu[i]>60 && cnu[i]<=100){
     printf("%d customer is 3\n",(i+1));
    } else {
     printf("%d customer is 1\n",(i+1));
    }
    break;
  }
 }
 getch();
}