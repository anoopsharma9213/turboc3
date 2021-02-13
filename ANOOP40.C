#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],b[100][100],i,j;
 int m,n;
 clrscr();
 printf("Enter no. of rows and columns of matrix:\n");
 scanf("%d%d",&m,&n);
 printf("Enter matrix:\n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   b[i][j]=a[j][i];
 clrscr();
 printf("\tMatrix:\n");
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
   printf("%d ",a[i][j]);
  printf("\n");
 }
 printf("\tTranspose:\n");
 for(i=0;i<n;i++)
 {for(j=0;j<m;j++)
   printf("%d ",b[i][j]);
  printf("\n");
 }
 getch();
}