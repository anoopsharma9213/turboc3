#include<stdio.h>

int a[10];

void quick(int, int);
int part(int, int);

void main()
{
 int i,n;
 clrscr();
 printf("Enter number of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter %d number: ",i+1);
  scanf("%d",&a[i]);
 }
 quick(0,n-1);

 printf("\nSorted Elements:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}

void quick(int beg, int end)
{
 int q;
 if(beg<end)
 {
  q = part(beg,end);
  quick(beg,q-1);
  quick(q+1,end);
 }
}

int part(int p, int r)
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