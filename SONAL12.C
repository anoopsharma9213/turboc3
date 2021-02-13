#include<stdio.h>
#include<conio.h>
void main(){
 char s[100][50],temp[50];
 int i,j,k,n,flag;
 clrscr();
 printf("Enter number of students: ");
 scanf("%d",&n);
 fflush(stdin);
 for(i=0;i<n;i++){
  printf("Enter name of %d student: ",(i+1));
  gets(s[i]);
 }
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
   flag = 0;
   for(k=0;k<strlen(s[i]);){
    if(s[i][k]>s[j][k]){
     flag++;
     break;
    } else if(s[i][k]==s[j][k]){
     k++;
    } else {
     break;
    }
   }
   if(flag!=0){
    strcpy(temp,s[i]);
    strcpy(s[i],s[j]);
    strcpy(s[j],temp);
   }
  }
 }
 clrscr();
 printf("Students Data\n");
 for(i=0;i<n;i++){
  printf("%s\n",s[i]);
 }
 getch();
}