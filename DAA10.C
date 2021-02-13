#include<stdio.h>

int p[10],q[11],root[11][11],w[11][11],n,z=0;
float c[11][11];

void OBST();
void bst(int,int);

void main()
{
 int i,j;
 clrscr();
 printf("Enter number of keys : ");
 scanf("%d",&n);
 printf("Enter Frequencies:\n");
 for(i=1;i<=n;i++)
 {
  printf("p[%d] : ",i);
  scanf("%d",&p[i]);
 }
 for(i=0;i<=n;i++)
 {
  printf("q[%d] : ",i);
  scanf("%d",&q[i]);
 }
 OBST();
 getch();
 printf("\nBinary Search Tree:\n");
 bst(1,n-1);
 getch();
}

void OBST()
{
 int i,j,k,l,r,t;
 for(i=1;i<=n;i++)
 {
  c[i][i-1] = q[i-1];
  w[i][i-1] = q[i-1];
 }
 n++;
 for(l=1;l<=n;l++)
 {
  for(i=1;i<n-l+1;i++)
  {
   j=i+l-1;
   c[i][j] = 30000.00;
   w[i][j]=w[i][j-1]+p[j]+q[j];
   for(r=i;r<=j;r++)
   {
    t=c[i][r-1]+c[r+1][j]+w[i][j];
    if(t<c[i][j])
    {
     c[i][j]=t;
     root[i][j]=r;
    }
   }
  }
 }

 printf("\nWeight MAtrix:");
 for(i=1;i<=n;i++)
 {
  printf("\n ");
  for(j=n-i,k=1;j<=n-1;j++,k++)
   printf("%02d ",w[k][j]);
 }
 printf("\n\nCost MAtrix C:");
 for(i=1;i<=n;i++)
 {
  printf("\n ");
  for(j=n-i,k=1;j<=n-1;j++,k++)
   printf("%05.2f ",c[k][j]);
 }
 getch();
 printf("\n\nRoot MAtrix:");
 for(i=1;i<=n;i++)
 {
  printf("\n ");
  for(j=n-i,k=1;j<=n-1;j++,k++)
   printf("%02d ",root[k][j]);
 }
}

void bst(int i, int j)
{
 if(root[i][j]!=0)
  printf("K%d",root[i][j]);
 else printf("-");
 if(j>i)
 {
  printf("(");
  bst(i,root[i][j]-1);
  printf(".");
  bst(root[i][j]+1,j);
  printf(")");
 }
}