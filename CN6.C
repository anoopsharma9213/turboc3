#include<stdio.h>
#include<string.h>

void main()
{
 char frame[50];
 int i,j,n;
 clrscr();
 printf("Enter the frame: ");
 scanf("%s",&frame);
 n=strlen(frame);
 for(i=0;frame[i]!='\0';i++)
 {
  if((frame[i]=='d'||frame[i]=='D')&&(frame[i+1]=='l'||frame[i+1]=='L')&&(frame[i+2]=='e'||frame[i+2]=='E'))
  {
   if((frame[i+3]=='d'||frame[i+3]=='D')&&(frame[i+4]=='l'||frame[i+4]=='L')&&(frame[i+5]=='e'||frame[i+5]=='E'))
   {
    for(j=i;j<=n;j++)
    {
     frame[j]=frame[j+3];
    }
    n-=3;
    i+=2;
   }
   else if((frame[i+3]=='s'||frame[i+3]=='S')&&(frame[i+4]=='t'||frame[i+4]=='T')&&(frame[i+5]=='x'||frame[i+5]=='X'))
   {
    for(j=i;j<=n;j++)
    {
     frame[j]=frame[j+6];
    }
    n-=6;
    i--;
   }
   else if((frame[i+3]=='e'||frame[i+3]=='E')&&(frame[i+4]=='t'||frame[i+4]=='T')&&(frame[i+5]=='x'||frame[i+5]=='X'))
   {
    for(j=i;j<=n;j++)
    {
     frame[j]=frame[j+6];
    }
    n-=6;
    i--;
   }
  }
 }
 printf("Frame Recieved: ");
 printf("%s",frame);
 getch();
}