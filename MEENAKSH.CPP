#include<stdio.h>
#include<conio.h>
void main()
{
int a[4],i,j,temp;
clrscr()
printf("enter the array");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
 {
 for(j=o;j<=4;j++)
 {
 if(a[i]<a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
 for(i=0;i<=4;i++)
 {
 printf("%d",a[i]);
 }
 getch();
 }
