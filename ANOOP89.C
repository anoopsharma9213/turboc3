#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],i,j,k=0;
 int m,n;
 clrscr();
 printf("Enter no. of rows & columns of matrix:\n");
 scanf("%d%d",&m,&n);
 if(m==n)
 {printf("Enter the matrix:\n");
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    if(i==j&&a[i][j]!=1)
     k++;
    else if(i!=j&&a[i][j]!=0)
	  k++;
  if(k==0)
   printf("\n\tMatrix is identity matrix.\n");
  else printf("\n\tMatrix is not identity matrix.\n");
 }
 else printf("\n\tMatrix is not identity matrix.\n");
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
   printf("%d ",a[i][j]);
  printf("\n");
 }
 getch();
}