#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,flag=0;
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
for(j=0;j<3;j++)
{
printf("%d  ",a[i][j]);
if(a[i][j]!=a[j][i])
flag++;
}
printf("\n");
}
if(flag==0)
printf("Matrix is symmeytric");
else
printf("Matrix is not symmetric");
getch();
}
