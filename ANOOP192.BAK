#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],b[100][100],i,j,k=0;
 int m,n,p,q;
 clrscr();
 printf("Enter no. of rows & columns of 1st matrix:\n");
 scanf("%d%d",&m,&n);
 printf("Enter no. of rows & columns of 2nd matrix:\n");
 scanf("%d%d",&p,&q);
 if(m==p&&n==q)
 {printf("Enter 1st matrix:\n");
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  printf("Enter 2nd matrix:\n");
  for(i=0;i<p;i++)
   for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    if(a[i][j]!=b[i][j])
     k++;
  if(k==0)
   printf("\n\tMatrices are equal.");
  else printf("\n\tMatrices not equal.");
 }
 else printf("\n\tMatrices not equal.");
 getch();
}