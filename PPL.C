#include<stdio.h>

void main()
{
 FILE *f1,*f2;
 char ch;
 clrscr();
 printf("INPUT File 043.txt\n\n");
 printf("\nCOPYING...");
 f1=fopen("043.txt","r");
 f2=fopen("029.txt","w");
 while(1)
 {
  ch=fgetc(f1);
  if(ch==EOF)
   break;
  fputc(ch,f2);
 }
 fclose(f1);
 fclose(f2);
 printf("\n\nDATA IN FILE 029.txt\n\n");
 f1=fopen("029.txt","r");
 while(1)
 {
  ch=fgetc(f1);
  if(ch==EOF)
   break;
  printf("%c",ch);
 }
 fclose(f1);
 getch();
}