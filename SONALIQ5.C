#include<stdio.h>
#include<conio.h>
void main(){
 int m[3][3],i,j,sum=0;
 clrscr();
 printf("Enter elements of 3X3 matrix: ");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   scanf("%d",&m[i][j]);
  }
 }
 for(i=0;i<3;i++){
  sum += m[i][i];
 }
 printf("Sum of main diagonal = %d",sum);
 getch();
}