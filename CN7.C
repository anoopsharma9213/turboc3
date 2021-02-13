#include<stdio.h>
#include<conio.h>

char s[100][100],t[100];
int i,j,n,w;
void sum();


void main()
{
 clrscr();
 printf("Enter number of words: ");
 scanf("%d",&n);
 printf("Enter length of each word: ");
 scanf("%d",&w);
 for(i=0;i<n;i++)
 {
  printf("Enter %d byte: ",i+1);
  scanf("%s",&s[i]);
 }
 sum();
 strcpy(s[n],t);
 n++;
 clrscr();
 printf("Bytes Transferred: \n");
 for(i=0;i<n;i++)
  printf("%s\n",s[i]);
 printf("\n\nBytes Received: \n");
 for(i=0;i<n;i++)
  printf("%s\n",s[i]);
 sum();
 printf("\nChecksum: ");
 printf("%s",t);
 printf("\n\nFrame Correct!!!");
 getch();
}

void sum()
{
 char c='0';
 for(i=0;i<w;i++)
  t[i]='0';
 t[i]='\0';
 for(i=0;i<n;i++)
 {
  for(j=w-1;j>=0;j--)
  {
   if(t[j]=='0'&&s[i][j]=='0')
   {
    if(c=='0');
    else
    {
     t[j]='1';
     c='0';
    }
   }
   else if((t[j]=='1'&&s[i][j]=='0')||(t[j]=='0'&&s[i][j]=='1'))
   {
    if(c=='0')
     t[j]='1';
    else
    {
     t[j]='0';
     c='1';
    }
   }
   else if(t[j]=='1'&&s[i][j]=='1')
   {
    if(c=='0')
     t[j]='0';
    else
     t[j]='1';
    c='1';
   }
  }
  j=w-1;
 while(c=='1')
  {
   if(t[j]=='1')
   {
    t[j]='0';
    c='1';
   }
   else
   {
    t[j]='1';
    c='0';
   }
   j--;
  }
 }
 for(i=0;i<w;i++)
  if(t[i]=='1')
   t[i]='0';
  else t[i]='1';
}