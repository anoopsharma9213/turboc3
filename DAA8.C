#include<stdio.h>

unsigned int m[10][10],s[10][10],p[10];

void m_chain_order(int);
void m_chain_multiply(int,int);

void main()
{
unsigned int n,i,j,k;
 clrscr();
 printf("Enter sequence of dimensions: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter %d dimension : ",i);
  scanf("%d",&p[i]);
 }
 m_chain_order(n);
 printf("\nMatrix M:");
 for(i=1;i<=n-1;i++)
 {
  printf("\n ");
  for(j=n-i,k=1;j<=n-1;j++,k++)
   printf("%d\t",m[k][j]);
 }
 printf("\n\nMatrix S:");
 for(i=1;i<=n-2;i++)
 {
  printf("\n ");
  for(j=n-i,k=1;j<=n-1;j++,k++)
   printf("%d ",s[k][j]);
 }
 printf("\n\nParenthesization of Matrices:\n ");
 m_chain_multiply(1,n-1);
 getch();
}

void m_chain_multiply(int i, int j)
{
 if(j>i)
 {
  printf("(");
  m_chain_multiply(i,s[i][j]);
  printf(".");
  m_chain_multiply(s[i][j]+1,j);
  printf(")");
 }
 else
 {
  printf("A%d",i);
 }
}

void m_chain_order(int n)
{
unsigned int i,j,k,l,q;
 for(i=1;i<n;i++)
  m[i][i]=0;
 for(l=2;l<n;l++)
 {
  for(i=1;i<n-l+1;i++)
  {
   j=i+l-1;
   m[i][j]=60000;
   for(k=i;k<=j-1;k++)
   {
    q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
    if(q<m[i][j])
    {
     m[i][j]=q;
     s[i][j]=k;
    }
   }
  }
 }
}