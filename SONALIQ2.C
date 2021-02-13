#include<stdio.h>
#include<conio.h>

void main(){
 int age, day;
 clrscr();
 printf("Enter the age: ");
 scanf("%d",&age);
 if(age<6){
  printf("Children under 6 not admitted!");
 }
 else{
  printf("Enter day (1 for Sunday, 2 for Monday,...): ");
  scanf("%d",&day);
  if(day==1||day==7){
   if(age>=6&&age<=11){
    printf("Ticket Price: Rs. 150");
   } else if(age>=60){
    printf("Ticket Price: Rs. 125");
   } else {
    printf("Ticket Price: Rs. 250");
   }
  } else {
   if((age>=6&&age<=11)||(age>=60)){
    printf("Ticket Price: Rs. 100");
   } else {
    printf("Ticket Price: Rs. 200");
   }
  }
 }
 getch();
}