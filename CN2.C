#include<stdio.h>
#include<string.h>

void main()
{
 char str[50],ends[50];
 int i,j,n;
 clrscr();
 printf("Enter the frame: ");
 scanf("%s",&str);
 n=strlen(str);
 for(i=0;str[i]!='\0';i++)
 {
  if((str[i]=='d'||str[i]=='D')&&(str[i+1]=='l'||str[i+1]=='L')&&(str[i+2]=='e'||str[i+2]=='E'))
  {
   for(j=n;j>=i;j--)
   {
    str[j+3]=str[j];
   }
   n=n+3;
   i=i+3;
  }
 }
 strcpy(ends,"dlestx");
 strcat(ends,str);
 strcpy(str,ends);
 strcat(str,"dleetx");
 printf("Frame for tramsmission: \n");
 printf("%s",str);
 getch();
}