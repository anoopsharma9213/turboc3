#include<string.h>
#include<stdio.h>

char X[15],Y[15];
int c[15][15];

void LCS_Length(int,int);
void LCS(int,int);

void main()
{
 clrscr();
 printf("Enter first String : ");
 gets(X);
 printf("Enter second String : ");
 gets(Y);
 LCS_Length(strlen(X),strlen(Y));
 printf("\nLength of LCS : %d",c[strlen(X)][strlen(Y)]);
 LCS(strlen(X),strlen(Y));
 getch();
}

void LCS_Length(int m, int n)
{
 int i,j;
 for(i=0;i<=m;i++)
  for(j=0;j<=n;j++)
   c[i][j]=0;
 for(i=1;i<=m;i++)
  for(j=1;j<=n;j++)
   if(X[i-1]==Y[j-1])
    c[i][j]=c[i-1][j-1]+1;
   else
   {
    if(c[i-1][j]<=c[i][j-1])
     c[i][j]=c[i][j-1];
    else c[i][j]=c[i-1][j];
   }

 printf("\nSequence Matrix:\n");
 for(i=0;i<=m;i++)
 {
  for(j=0;j<=n;j++)
   printf("%d ",c[i][j]);
  printf("\n");
 }
}

void LCS(int m,int n)
{
 char L[15];
 int i=m,j=n,k=c[m][n]-1;
 printf("\nLCS : ");
 while(i>0&&j>0)
 {
  if(c[i][j]==c[i-1][j-1]+1 && X[i-1]==Y[j-1])
  {
   L[k]=X[i-1];
   i--;j--;
   k--;
  }
  else if(c[i][j]==c[i-1][j])
   i--;
  else if(c[i][j]==c[i][j-1])
   j--;
 }
 L[c[m][n]]='\0';
 puts(L);
}