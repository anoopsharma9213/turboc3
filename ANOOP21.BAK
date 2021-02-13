#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],b[100][100],c[100][100],i,j,k	;
 int m,n,p,q;
 clrscr();
 printf("Enter the no. of rows and column for 1st matrix:\n");
 scanf("%d%d",&m,&n);
 printf("Enter the no. of rows and column for 2nd matrix:\n");
 scanf("%d%d",&p,&q);
 if(n!=p)
  printf("\n\tMatrix multiplication not possible!!!");
 else
  {
   printf("\n\tEnter 1st matrix:\n");
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
   printf("\n\tEnter the 2nd matrix:\n");
   for(i=0;i<p;i++)
    for(j=0;j<q;j++)
     scanf("%d",&b[i][j]);
   for(i=0;i<m;i++)
    for(j=0;j<q;j++)
    {c[i][j]=0;
     for(k=0;k<n;k++)
      c[i][j]+=(a[i][k]*b[k][j]);
    }
   clrscr();
   printf("\n\t1st matrix:\n");
   for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
    printf("\n");
   }
   printf("\n\t2nd matrix:\n");
   for(i=0;i<p;i++)
   {for(j=0;j<q;j++)
     printf("%d ",b[i][j]);
    printf("\n");
   }
   printf("\n\tMultiplied matrix:\n");
   for(i=0;i<m;i++)
   {for(j=0;j<q;j++)
     printf("%d ",c[i][j]);
    printf("\n");
   }
  }
 getch();
}