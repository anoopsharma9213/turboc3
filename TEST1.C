#include<stdlib.h>
#include<time.h>

int a[10000];

int randompartition(int, int);
int partition(int, int);
void quicksort(int, int);

void main()
{
 clock_t start, end;
 float time;
 int i,n=10000;
 clrscr();
 for(i=0;i<n;i++)
  a[i]=10000-i;
 start = clock();
 quicksort(0,n-1);
 end = clock();
 for(i=0;i<n;i++)
  printf("%d",a[i]);
 time = (end-start)/CLK_TCK;
 printf("\nElements Sorted\n\n\tTime Taken : %.20f",time);
 getch();
}

int randompartition(int p, int r)
{
 int i;
 i = (rand()%(r-p+1))+p;
 if(a[i]!=a[r])
 {
  a[i]=a[i]+a[r];
  a[r]=a[i]-a[r];
  a[i]=a[i]-a[r];
 }
 return partition(p,r);
}

int partition(int p, int r)
{
 int x = a[r], i=p-1, j;
 for(j=p;j<=r-1;j++)
 {
  if(a[j]<=x)
  {
   i++;
   if(a[i]!=a[j])
   {
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
   }
  }
 }
 if(a[i+1]!=a[r])
 {
  a[i+1] = a[i+1]+a[r];
  a[r]=a[i+1]-a[r];
  a[i+1]=a[i+1]-a[r];
 }
 return i+1;
}

void quicksort(int beg, int end)
{
 int q;
 if(beg<end)
 {
  q = randompartition(beg,end);
  quicksort(beg,q-1);
  quicksort(q+1,end);
 }
}