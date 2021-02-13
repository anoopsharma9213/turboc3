#include<time.h>
#include<stdio.h>

void main()
{
 clock_t start, end;
 float time;
 int i,n,a[10],num,j;
 clrscr();
 printf("Enter number of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter %d number: ",i+1);
  scanf("%d",&a[i]);
 }
 printf("Enter element to search :");
 scanf("%d",&num);
 start = clock();
 for(i=0;i<30000;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[j]==num)
    break;
  }
 }

 end = clock();
 time = (end-start)/CLK_TCK;
 time = time/30000.00000000000000;
 printf("\n Time Taken for searching : %.20f",time);
 getch();
}