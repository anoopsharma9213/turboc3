#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,choice;
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
scanf("%d",&b[i][j]);
}
}
printf("Enter the choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d  ",c[i][j]);
}
printf("\n");
}
break;
case 2:
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d  ",c[i][j]);
}
printf("\n");
}
break;
}
getch();
}
