#include<stdio.h>

int a,b,ca,cb,stp[2][20],i;
void check();
void fill();
void empty();
void transfer();

void main()
{
 int ch,k;
 clrscr();
 printf("Enter capacity of Jug A: ");
 scanf("%d",&a);
 printf("Enter capacity of Jug B: ");
 scanf("%d",&b);
 ca=cb=i=0;
 do
 {
  clrscr();
  printf("\n\t\t\tWater Jug Problem!!!");
  printf("\n\tPress 1: Fill Jugs");
  printf("\n\tPress 2: Empty Jugs");
  printf("\n\tPress 3: Transfer Water");
  printf("\n\tPress 0: Exit");
  printf("\nEnter Choice: ");
  ch=getch()-48;
  switch(ch)
  {
   case 1:fill();
	  break;
   case 2:empty();
	  break;
   case 3:transfer();
	  break;
   case 0:
	  break;
   default: printf("\tWrong Choice!!!");
	    getch();
  }
  if(ca==2)
  {
   clrscr();
   printf("\n\tCongratulations!!!\nYou have solved Water Jug Problem!!!");
   printf("\n\nSequence of steps:\nWater in Jug A    Jug B");
   for(k=0;k<i;k++)
   {
    printf("\n           %d        %d",stp[0][k],stp[1][k]);
   }
   getch();
   ch=0;
  }
 }while(ch!=0);
}

void check()
{
 printf("\n\n  The Problem is to fill any jug to excatly 2 ltrs");
 getch();
}

void fill()
{
 int ch;
 l:
 clrscr();
 printf("\n\n\tEnter 1: Fill Jug A");
 printf("\n\tEnter 2: Fill Jug B");
 printf("\n\tEnter 0: Back");
 printf("\nEnter Choice:");
 ch=getch()-48;
 switch(ch)
 {
  case 1:if(ca==a)
	 {
	  printf("\t Jug already filled!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  ca=a;
	  stp[0][i]=ca;
	  stp[1][i]=0;
	  i++;
	 }
	 break;
  case 2:if(cb==b)
	 {
	  printf("\t Jug already filled!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  cb=b;
	  stp[0][i]=0;
	  stp[1][i]=cb;
	  i++;
	 }
	 break;
  case 0:
	 break;
  default: printf("\tWrong Choice!!!");
	   getch();
	   goto l;
 }
 printf("\n\n\tJug A: %d\n\n\tJug B: %d",ca,cb);
 getch();
}

void empty()
{
 int ch;
 l:
 clrscr();
 printf("\n\n\tEnter 1: Empty Jug A");
 printf("\n\tEnter 2: Empty Jug B");
 printf("\n\tEnter 0: Back");
 printf("\nEnter Choice:");
 ch=getch()-48;
 switch(ch)
 {
  case 1:if(ca==0)
	 {
	  printf("\t Jug already empty!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  ca=0;
	  stp[0][i]=0;
	  stp[1][i]=cb;
	  i++;
	 }
	 break;
  case 2:if(cb==0)
	 {
	  printf("\t Jug already empty!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  cb=0;
	  stp[0][i]=ca;
	  stp[1][i]=0;
	  i++;
	 }
	 break;
  case 0:
	 break;
  default: printf("\tWrong Choice!!!");
	   getch();
	   goto l;
 }
 printf("\n\n\tJug A: %d\n\n\tJug B: %d",ca,cb);
 getch();
}

void transfer()
{
 int ch;
 l:
 clrscr();
 printf("\n\n\tEnter 1: Transfer Jug A to Jug B");
 printf("\n\tEnter 2: Transfer Jug B to Jug A");
 printf("\n\tEnter 0: Back");
 printf("\nEnter Choice:");
 ch=getch()-48;
 switch(ch)
 {
  case 1:if(ca==0)
	 {
	  printf("\tNothing to transfer!!!");
	  getch();
	  goto l;
	 }
	 else if(cb==b)
	 {
	  printf("\tJug B already full!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  cb+=ca;
	  ca=0;
	  if(cb>b)
	  {
	   ca=cb-b;
	   cb=cb-ca;
	  }
	  stp[0][i]=ca;
	  stp[1][i]=cb;
	  i++;
	 }
	 break;
  case 2:if(cb==0)
	 {
	  printf("\tNothing to transfer!!!");
	  getch();
	  goto l;
	 }
	 else if(ca==a)
	 {
	  printf("\tJug A already full!!!");
	  getch();
	  goto l;
	 }
	 else
	 {
	  ca+=cb;
	  cb=0;
	  if(ca>a)
	  {
	   cb=ca-a;
	   ca=ca-cb;
	  }
	  stp[0][i]=ca;
	  stp[1][i]=cb;
	  i++;
	 }
	 break;
  case 0:
	 break;
  default: printf("\tWrong Choice!!!");
	   getch();
	   goto l;
 }
 printf("\n\n\tJug A: %d\n\n\tJug B: %d",ca,cb);
 getch();
}