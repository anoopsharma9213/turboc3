#include<stdio.h>
#include<conio.h>
void main(){
 int m[3][3],i,j,flag=0;
 clrscr();
 printf("Enter elements of 3X3 matrix: ");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   scanf("%d",&m[i][j]);
  }
 }
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   if(m[i][j]!=m[j][i]){
    flag++;
   }
  }
 }
 if(flag==0){
  printf("Matrix is Symmetric");
 } else {
  printf("Matrix is Not Symmetric");
 }
 getch();
}