#include<stdio.h>

int p[3][3]={1,3,7,0,5,4,2,8,6};

void draw();
void play();
void move(int);
void check();

void main()
{
 clrscr();
 draw();
 play();
 getch();
}

void draw()
{
 int i,j;
 printf("\n\t\t8 PUZZLE Problem!!!");
 printf("\n\n\t-------------");
 printf("\n\t|   |   |   |");
 printf("\n\t-------------");
 printf("\n\t|   |   |   |");
 printf("\n\t-------------");
 printf("\n\t|   |   |   |");
 printf("\n\t-------------");
 gotoxy(30,7);
 printf("Press 0: to Exit");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   if(p[i][j]!=0)
    {
     gotoxy(11+4*i,5+2*j);
     printf("%d",p[i][j]);
    }
    else
    {
     gotoxy(11+4*i,5+2*j);
     printf(" ");
    }
}

void play()
{
 int ch;
 printf("\n\n\tUse number to move number into empty slot!!!\n");
 do
 {
  ch=getch()-48;
  if(ch>0&&ch<=8)
   move(ch);
  else if(ch==0)
   exit(0);
  else
  {
   printf("\tWrong Choice!!!");
   getch();
   printf("\r                          \r");
  }
 }while(1);
}

void move(int x)
{
 int i,j,k,l,y,z;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   if(p[i][j]==x)
   {
    k=i;l=j;
   }
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   if(p[i][j]==0)
   {
    y=i;z=j;
   }
 if((k-y<=1&&k-y>=-1)&&(l-z<=1&&l-z>=-1)&&(k-y!=l-z&&k-y!=z-l))
 {
  p[k][l]=0;
  p[y][z]=x;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    if(p[i][j]!=0)
    {
     gotoxy(11+4*i,5+2*j);
     printf("%d",p[i][j]);
    }
    else
    {
     gotoxy(11+4*i,5+2*j);
     printf(" ");
    }
  gotoxy(1,12);
  check();
 }
 else
 {
  printf("\tMovement not Possible!!!Press any key!!!");
  getch();
  printf("\r                                                  \r");
 }
}

void check()
{
 int i,j,k=1,flag=0;
 for(j=0;j<3;j++)
  for(i=0;i<3;i++)
  {
   if(p[i][j]!=k%9)
    flag++;
   k++;
  }
 if(flag==0)
 {
  printf("\n\nCongratulations!!! You have solved the problem!!!");
  getch();
  exit(0);
 }
}