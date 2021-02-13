#include<stdio.h>
#include<conio.h>

int c=0;
void main()
{
 int a[200],n,i,j;
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

 for(i=0;++c&&i<n;i++)
  for(j=0;++c&&j<n-i;j++)
   if(++c&&a[j]>a[j+1])
   {a[j+1]=a[j+1]+a[j];
    a[j]=a[j+1]-a[j];
    a[j+1]=a[j+1]-a[j];
   }

 printf("\n\nSorted Array:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("No.of Comparisons : %d",c);
 getch();
}