#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],prod[3][3],i,j,k;
clrscr();
printf("Enter the 1st matrix=");
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
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
prod[i][j]=0;
for(k=0;k<3;k++)
{
prod[i][j]=prod[i][j]+(a[i][k]*b[k][i]);
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",prod[i][j]);
}
printf("\n");
}
getch();
}