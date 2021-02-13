#include<stdio.h>
#include<string.h>

void main()
{
 char frame[50],ends[50];
 int i,j,flag=0,n;
 clrscr();
 printf("Enter Frame in 1s and 0s: \n");
 scanf("%s",&frame);
 n=strlen(frame);
 for(i=0;frame[i]!='\0';i++)
 {
  if(frame[i]=='1')
  {
   flag=0;
   for(j=i;j<i+5;j++)
    if(frame[j]!='1')
     flag++;
   if(flag==0)
   {
    for(j=n;j>=i+5;j--)
     frame[j+1]=frame[j];
    frame[i+5]='0';
    n++;
    i=i+5;
   }
  }
 }
 strcpy(ends,"01111110");
 strcat(ends,frame);
 strcat(ends,"01111110");
 strcpy(frame,ends);
 printf("Frame for transmission: \n");
 printf("%s",frame);
 getch();
}