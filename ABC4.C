#include<stdio.h>
#include<conio.h>

int a[25],b[25];

void read();
void sort();
void merge();
void print();

void main()
{
 clrscr();
 read();
 sort();
 merge();
 print();
 getch();
}

void read()
{
 int i;
 printf("Enter 1st Array: ");
 for(i=0;i<5;i++)
  scanf("%d",&a[i]);
 printf("Enter 2nd Array: ");
 for(i=0;i<5;i++)
  scanf("%d",&b[i]);
}

void sort()
{
 int i,j,t;
 for(i=0;i<5;i++)
  for(j=i;j<5;j++)
   if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
 for(i=0;i<5;i++)
  for(j=i;j<5;j++)
   if(b[i]>b[j])
    {
     t=b[i];
     b[i]=b[j];
     b[j]=t;
    }
}

void merge()
{
 int i,j,t;
 for(i=0;i<5;i++)
  a[i+5]=b[i];
 for(i=0;i<10;i++)
  for(j=i;j<10;j++)
   if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
}

void print()
{
 int i;
 printf("\nSorted and Merged Array: \n");
 for(i=0;i<10;i++)
  printf("%d ",a[i]);
}