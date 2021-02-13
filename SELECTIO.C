#include<stdio.h>
#include<conio.h>

void main()
{
 char a[100],t,ch;
 int n=0,i,j,pos;
 clrscr();
 printf("Enter string: ");
 scanf("%s",&a);
 for(i=0;a[i]!='\0';i++)
  n++;
 clrscr();
 printf("\n\nOriginal String:\n");
 printf("%s",a);

 for(i=0;i<n-1;i++)
 {pos=i;
  ch=a[i];
  for(j=i+1;j<n;j++)
   if(a[j]<ch)
   {
    pos=j;
    ch=a[j];
   }

  if(pos!=i)
  {
   a[i]=a[i]+a[pos];
   a[pos]=a[i]-a[pos];
   a[i]=a[i]-a[pos];
  }

 }
 printf("\n\nSorted String:\n");
 printf("%s",a);
 getch();
}