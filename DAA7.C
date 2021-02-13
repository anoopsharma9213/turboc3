#include<stdlib.h>
#include<stdio.h>

int a[10];

int randompartition(int, int);
int randomselect(int, int, int);
int partition(int, int);

void main()
{
 int i,n,num;
 clrscr();
 printf("Enter number of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter %d number: ",i+1);
  scanf("%d",&a[i]);
 }
 printf("Enter order of statistic : ");
 scanf("%d",&i);
 num=randomselect(0,n-1,i-1);
 printf("%dth order statistic :  %d",i,num);
 getch();
}

int randomselect(int p, int r, int i)
{
 int q,k;
 if(p==r)
  return a[p];
 q = randompartition(p,r);
 if(i<=q)
  return randomselect(p,q,i);
 else return randomselect(q+1,r,i);
}

int randompartition(int p, int r)
{
 int i;
 i = (rand()%(r-p+1))+p;
 if(a[i]!=a[r])
 {
  a[i]=a[i]+a[r];
  a[r]=a[i]-a[r];
  a[i]=a[i]-a[r];
 }
 return partition(p,r);
}

int partition(int p, int r)
{
 int x = a[r], i=p-1, j;
 for(j=p;j<=r-1;j++)
 {
  if(a[j]<=x)
  {
   i++;
   if(a[i]!=a[j])
   {
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
   }
  }
 }
 if(a[i+1]!=a[r])
 {
  a[i+1] = a[i+1]+a[r];
  a[r]=a[i+1]-a[r];
  a[i+1]=a[i+1]-a[r];
 }
 return i+1;
}
