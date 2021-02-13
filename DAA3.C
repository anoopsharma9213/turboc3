#include<stdio.h>

int a[100];

void mergesort(int,int);
void merge(int,int,int);

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
 mergesort(0,n-1);

 printf("\nSorted Elements:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}

void mergesort(int beg, int end)
{
 int mid;
 if(beg<end)
 {
  mid = (beg+end)/2;
  mergesort(beg,mid);
  mergesort(mid+1,end);
  merge(beg,mid,end);
 }
}

void merge(int beg,int mid,int end)
{
 int i=beg,j=mid+1,t[100],k=0;
 while(i<=mid||j<=end)
 {
  if(i>mid)
  {
   while(j<=end)
   {
    t[k]=a[j];
    j++;
    k++;
   }
   break;
  }
  else if(j>end)
  {
   while(i<=mid)
   {
    t[k]=a[i];
    i++;
    k++;
   }
   break;
   }
  else if(a[i]<=a[j])
  {
   t[k]=a[i];
   i++;
   k++;
  }
  else if(a[j]<a[i])
  {
   t[k]=a[j];
   j++;
   k++;
  }
 }
 for(i=0,j=beg;i<k;i++,j++)
  a[j]=t[i];
}