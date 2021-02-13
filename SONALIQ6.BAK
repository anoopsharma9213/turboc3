#include<stdio.h>
#include<conio.h>
void main(){
 int m[3][3],n[3][3],prod[3][3],i,j,k;
 clrscr();
 printf("Enter elements of 1st 3X3 matrix: ");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   scanf("%d",&m[i][j]);
  }
 }
 printf("Enter elements of 2nd 3X3 matrix: ");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   scanf("%d",&n[i][j]);
  }
 }
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   prod[i][j]=0;
   for(k=0;k<3;k++){
    prod[i][j] += (m[i][k]*n[k][i]);
   }
  }
 }
 clrscr();
 printf("Matrix A:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%d ",m[i][j]);
  }
  printf("\n");
 }
 printf("Matrix B:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%d ",n[i][j]);
  }
  printf("\n");
 }
 printf("Matrices Product:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%d ",prod[i][j]);
  }
  printf("\n");
 }
 getch();
}