#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
printf("Enter the 1st and 2nd matrix=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
sum+=a[i][i];
}
printf("Sum of Diagonal element=%d",sum);
getch();
}
