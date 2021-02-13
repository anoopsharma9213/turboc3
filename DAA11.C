#include<stdio.h>

int W,n,w[10],b[10],B[10][10];

void knapsac();

void main()
{
 int i;
 clrscr();
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Enter Maximum weight:");
 scanf("%d",&W);
 printf("Enter weight and profit:\n");
 for(i=1;i<=n;i++)
 {
  printf("w[%d] : ",i);
  scanf("%d",&w[i]);
  printf("b[%d] : ",i);
  scanf("%d",&b[i]);
 }
 knapsac();
 getch();
}

void knapsac()
{
 int i,j;
 w[0]=b[0]=0;
 for(j=0;j<=W;j++)
  B[0][j]=0;
 for(i=1;i<=n;	i++)
 {
  B[i][0]=0;
  for(j=0;j<=W;j++)
  {
   if(w[i]<=j)
   {
    if((b[i]+B[i-1][j-w[i]])>B[i-1][j])
     B[i][j]=b[i]+B[i-1][j-w[i]];
    else B[i][j]=B[i-1][j];
   }
   else B[i][j]=B[i-1][j];
  }
 }

 printf("\nWeight Matrix:\n");
 for(i=0;i<=W;i++)
 {
  for(j=0;j<=n;j++)
   printf("%d ",B[j][i]);
  printf("\n");
 }
 printf("\nMaximum profit is %d",B[n][W]);
}