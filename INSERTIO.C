#include<stdio.h>
#include<conio.h>

int c=0;

void main()
{
 int a[100],n,i,j,k,pos,num;
 clrscr();
 printf("Enter no. of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {printf("Enter Element: ");
  scanf("%d",&a[i]);
 }
 clrscr();
 printf("\n\nOriginal Array:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);

 for(i=1;++c&&i<n;i++)
 {
  pos=i;
  num=a[i];
   for(j=i-1;++c&&j>=0;j--)
    if(++c&&a[j]>a[i])
     pos=j;
  if(++c&&pos!=i)
  {
   for(k=i;++c&&k>pos;k--)
    a[k]=a[k-1];
   a[pos]=num;
  }
 }

 printf("\n\nSorted Array:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("No. of Comparisons: %d",c);
 getch();
}