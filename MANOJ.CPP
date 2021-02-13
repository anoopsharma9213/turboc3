#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,temp,n;
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

i=1;
while(i<n)
{
 temp=a[i];
 l:
 if(temp<a[i-1]&&i!=0)
 {
  a[i]=a[i-1];
  i=i-1;
  goto l;
 }
 else if(i>=0)
 {
  a[i]=temp;
  i=i+1;
 }
}
printf("\n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
getch();
}