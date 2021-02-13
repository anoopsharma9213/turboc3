#include<stdio.h>

void main()
{
 FILE *f1;
 char y[10],r[50];
 int i;
 clrscr();
 printf("Enter the name of file:");
 gets(y);
 f1=fopen(y,"w");
 if(f1==NULL)
  printf("File could not be opened.");
 else
  {
   for(i=0;i<7;i++)
   {printf("Enter name: ");
    gets(r);
    fwrite(&r,sizeof(r),1,f1);
    fflush(stdin);
   }
  }
 fclose(f1);
 getch();
}