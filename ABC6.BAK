#include<stdio.h>

struct state{
	     char n[50],cn[25],g[50],cm[50],lang[50];
	     char fs[200],pop[50],ft[200],area[20],nod[5];
	    }x;

void main()
{
 FILE *f1;
 char y[10];
 clrscr();
 printf("Enter the name of file: ");
 gets(y);
 f1=fopen(y,"w");
 if(f1==NULL)
  printf("\nFile could not be opened.");
 else
  {
   printf("Enter name: ");
   gets(x.n);
   printf("Enter capital name: ");
   gets(x.cn);
   printf("Enter Governor: ");
   gets(x.g);
   printf("Enter Chief Minister: ");
   gets(x.cm);
   printf("Enter Language: ");
   gets(x.lang);
   printf("Enter Famous spot: ");
   gets(x.fs);
   printf("Enter Population: ");
   gets(x.pop);
   printf("Enter Famous Things: ");
   gets(x.ft);
   printf("Enter area: ");
   gets(x.area);
   printf("Enter no. of district: ");
   gets(x.nod);
   fwrite(&x,sizeof(x),1,f1);
   fflush(stdin);
  }
  fclose(f1);
  getch();
}