#include<stdio.h>
#include<conio.h>
void main(){
 float qty[25],price[25],total=0;
 int i,n;
 clrscr();
 printf("Enter number of items: ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
  printf("Enter price of %d item: ",(i+1));
  scanf("%f",&price[i]);
  printf("Enter quantity of %d item: ",(i+1));
  scanf("%f",&qty[i]);
  if(qty[i]>100){
   total += ((qty[i]*price[i]) - (0.20*qty[i]*price[i]));
  } else {
   total += ((qty[i]*price[i]) - (0.10*qty[i]*price[i]));
  }
 }
 if(total>5000){
  total = (total - (0.10*total));
 }
 printf("Total Expenses Rs. %.2f",total);
 getch();
}