#include<stdlib.h>
#include<math.h>

float a[900][2],n;

void selectpoint();
float calcirclepoint();

void main()
{
 float c,pi;
 clrscr();
 printf("Enter number of points : ");
 scanf("%f",&n);
 selectpoint();
 c = calcirclepoint();
 pi = 4.00*c/n;
 printf("\nTotal number of points : %.0f",n);
 printf("\n\nNumber of points inside circle : %.0f",c);
 printf("\n\nValue of PI : %.7f",pi);
 getch();
}

void selectpoint()
{
 int i,j,flag;
 float x,y;
 for(i=0;i<n;i++)
 {
  do
  {
   flag = 1;
   a[i][0] = ((rand()%99)+1)/100.00;
   a[i][1] = ((rand()%99)+1)/100.00;
   for(j=0;j<i;j++)
    if(a[i][0]==a[j][0]&&a[i][1]==a[j][1])
    {
     flag=0;
     break;
    }
  }while(flag==0);
 }
}

float calcirclepoint()
{
 int p=0,i;
 for(i=0;i<n;i++)
  if(a[i][1]>0.50 - sqrt(0.25-((a[i][0]-0.50)*(a[i][0]-0.50)))&&a[i][1]<0.50 + sqrt(0.25-((a[i][0]-0.50)*(a[i][0]-0.50))))
   p++;
 return p;
}