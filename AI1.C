#include<stdio.h>

int stp[3][2][30],m=3,c=3,m1,c1,b[2],bp,i,j;

void load();
void unload();
void move();

void main()
{
 int ch,k;
 m1=c1=bp=i=0;
 b[0]=b[1]=-1;
 stp[0][0][i]=3;
 stp[0][1][i]=3;
 stp[1][0][i]=0;
 stp[1][1][i]=0;
 stp[2][0][i]=0;
 stp[2][0][i]=0;
 do{
    clrscr();
    printf("\n\t\tMissionaries and cannibals problem!!!");
    printf("\n\tBank 1\tBank 2");
    printf("\nMis.       %d        %d",m,m1);
    printf("\nCan.       %d        %d",c,c1);
    printf("\n\tPress 1: Load Passenger");
    printf("\n\tPress 2: Unload Passenger");
    printf("\n\tPress 3: Move Boat");
    printf("\n\tPress 0: Exit");
    switch(getch()-48)
    {
     case 1: load(); break;
     case 2: unload(); break;
     case 3: move(); break;
     case 0: ch=0;break;
     default: printf("\n\t Wrong Choice!!!");
    }
    if((m<c&&bp==1&&m!=0)||(m1<c1&&bp==0&&m1!=0))
    {
     printf("\n\n\tYou killed missionary!!!\nYOU LOST!!!");
     getch();
     ch=0;
    }
    if(m1==3&&c1==3)
    {
     i++;
     stp[0][0][i]=0;
     stp[0][1][i]=0;
     stp[1][0][i]=0;
     stp[1][1][i]=0;
     stp[2][0][i]=3;
     stp[2][1][i]=3;
     printf("\n\n\tCongratulations!!!\nYou have solved Problem!!!");
     printf("\n\nSteps Taken:");
     printf("\nBank 1\tBoat\tBank 2");
     printf("\n M C  \tM C \tM C");
     for(k=0;k<=i;k++)
     {
      printf("\n %d %d  \t%d %d \t%d %d",stp[0][0][k],stp[0][1][k],stp[1][0][k],stp[1][1][k],stp[2][0][k],stp[2][1][k]);
     }
     getch();
     ch=0;
    }
   }while(ch!=0);
}

void load()
{
 l:
 clrscr();
 printf("\n\n\tPress 1: Load Missionary");
 printf("\n\tPress 2: Load Cannible");
 printf("\n\tPress 0: Back");
 switch(getch()-48)
 {
  case 1:
	 if(b[0]!=-1&&b[1]!=-1)
	 {
	  printf("\n\tNo space in boat!!!");
	  getch();
	  goto l;
	 }
	 else if((m==0&&bp==0)||(m1==0&&bp==1))
	 {
	  printf("\n\tNo missionary to load");
	  getch();
	  goto l;
	 }
	 else
	 {
	  if(bp==0)
	  {
	   if(b[0]==-1)
	    j=0;
	   else j=1;
	   b[j]=0;
	   m--;
	  }
	  else
	  {
	   if(b[0]==-1)
	    j=0;
	   else j=1;
	   b[j]=0;
	   m1--;
	  }
	 }
	 break;
  case 2:
	 if(b[0]!=-1&&b[1]!=-1)
	 {
	  printf("\n\tNo space in boat!!!");
	  getch();
	  goto l;
	 }
	 else if((c==0&&bp==0)||(c1==0&&bp==1))
	 {
	  printf("\n\tNo cannible to load");
	  getch();
	  goto l;
	 }
	 else
	 {
	  if(bp==0)
	  {
	   if(b[0]==-1)
	    j=0;
	   else j=1;
	   b[j]=1;
	   c--;
	  }
	  else
	  {
	   if(b[0]==-1)
	    j=0;
	   else j=1;
	   b[j]=1;
	   c1--;
	  }
	 }
	 break;
  case 0:break;
  default: printf("\n\t Wrong Choice!!!");
	   getch();
	   goto l;
 }
}

void unload()
{
 l:
 clrscr();
 printf("\n\n\tPress 1: Unload Missionary");
 printf("\n\tPress 2: Unload Cannible");
 printf("\n\tPress 0: Back");
 switch(getch()-48)
 {
  case 1:
	 if(b[0]==-1&&b[1]==-1)
	 {
	  printf("\n\tNo creature in boat!!!");
	  getch();
	  goto l;
	 }
	 else if(b[0]!=0&&b[1]!=0)
	 {
	  printf("\n\tNo missionary to unload");
	  getch();
	  goto l;
	 }
	 else
	 {
	  if(bp==0)
	  {
	   if(b[0]==0)
	    j=0;
	   else j=1;
	   b[j]=-1;
	   m++;
	  }
	  else
	  {
	   if(b[0]==0)
	    j=0;
	   else j=1;
	   b[j]=-1;
	   m1++;
	  }
	 }
	 break;
  case 2:
	 if(b[0]==-1&&b[1]==-1)
	 {
	  printf("\n\tNo creature in boat!!!");
	  getch();
	  goto l;
	 }
	 else if(b[0]!=1&&b[1]!=1)
	 {
	  printf("\n\tNo cannible to unload");
	  getch();
	  goto l;
	 }
	 else
	 {
	  if(bp==0)
	  {
	   if(b[0]==1)
	    j=0;
	   else j=1;
	   b[j]=-1;
	   c++;
	  }
	  else
	  {
	   if(b[0]==1)
	    j=0;
	   else j=1;
	   b[j]=-1;
	   c1++;
	  }
	 }
	 break;
  case 0:break;
  default: printf("\n\t Wrong Choice!!!");
	   getch();
	   goto l;
 }
}

void move()
{
 if(b[0]==-1&&b[1]==-1)
  printf("\n\tNobody to move boat!!!");
 else
 {
  if(bp==0)
  {
   printf("\n\tBoat Moved to Bank 2!!!");
   bp=1;
  }
  else
  {
   printf("\n\tBoat Moved to Bank 1!!!");
   bp=0;
  }
  i++;
  stp[1][0][i]=0;
  stp[1][1][i]=0;
  if(b[0]==0)
  {
   stp[1][0][i]++;
   if(b[1]==0)
    stp[1][0][i]++;
   else if(b[1]==1)
    stp[1][1][i]++;
  }
  else if(b[0]==1)
  {
   stp[1][1][i]++;
   if(b[1]==1)
    stp[1][1][i]++;
   else if(b[1]==0)
    stp[1][0][i]++;
  }
  else
  {
   if(b[1]==1)
    stp[1][1][i]++;
   else if(b[1]==0)
    stp[1][0][i]++;
  }
  stp[0][0][i]=m;
  stp[0][1][i]=c;
  stp[2][0][i]=m1;
  stp[2][1][i]=c1;
 }
 getch();
}