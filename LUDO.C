#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<time.h>

int gd,gm=DETECT;
int cd[2][52]={{294,294,294,294,294,294,266,238,210,182,154,126,126,126,154,182,210,238,266,294,294,294,294,294,294,322,350,350,350,350,350,350,378,406,434,462,490,518,518,518,490,462,434,406,378,350,350,350,350,350,350,322},
	       {456,428,400,372,344,316,288,288,288,288,288,288,260,232,232,232,232,232,232,204,176,148,120,92,64,64,64,92,120,148,176,204,232,232,232,232,232,232,260,288,288,288,288,288,288,316,344,372,400,428,456,456}};

int entrance[2][20]={{154,182,210,238,266,322,322,322,322,322,490,462,434,406,378,322,322,322,322,322},
		     {260,260,260,260,260,92,120,148,176,204,260,260,260,260,260,428,400,372,344,316}};

int initpos[2][16]={{196,161,196,231,448,413,448,483,448,413,448,483,196,161,196,231},
		    {99,134,169,134,99,134,169,134,351,386,421,386,351,386,421,386}};

int ini[4]={14,27,40,1},safe[8]={1,9,14,22,27,35,40,48};
int end[4]={12,25,38,51},player[4]={0,0,0,0},stand[5];

int G[4][4];

void start();
void board();
void winner(int);
void play(int);
int rolldice();
void set();

void main()
{
 start();
}

void begin()
{
 setcolor(4);
 rectangle(0,0,639,479);
 rectangle(2,2,637,477);
 setcolor(14);
 settextstyle(1,0,4);
 outtextxy(285,5,"LUDO");
 settextstyle(4,0,4);
 outtextxy(283,70,"Rules");
 outtextxy(280,75,"____");
 gotoxy(2,9);
 printf("1. Press 'G' for rolling dice");
 gotoxy(2,11);
 printf("2. Press number on goti for moving it.");
 gotoxy(2,13);
 printf("3. Your turn is represented by the colour.");
 gotoxy(2,15);
 printf("4. You will get extra turn for killing or winning any goti.");
 gotoxy(2,17);
 printf("5. You can open a goti only with number '6'.");
 getch();
}

void start()
{
 int count,i,t;
 clrscr();

//Starting----------------------------------------------------------------

 initgraph(&gd,&gm,"");
 begin();
 cleardevice();
 setcolor(4);
 rectangle(0,0,639,479);
 rectangle(2,2,637,477);
 setcolor(14);
 settextstyle(1,0,4);
 outtextxy(285,5,"LUDO");

//Getting No. of Players--------------------------------------------------

 a:
 gotoxy(8,15);
 printf("Enter number of player:  ");
 count=getche();
 count-=48;
 gotoxy(33,15);
 printf("%d",count);
 if(count<2||count>4)
 {gotoxy(8,17);
  printf("ILLEGAL Number of PLAYERS!!!");
  getch();
  gotoxy(8,17);
  printf("                            ");
  gotoxy(33,15);
  printf("        ");
  goto a;
 }
 else{
      gotoxy(60,15);
      printf("COLOUR CODE:");
      gotoxy(60,16);
      printf("1 => RED");
      gotoxy(60,17);
      printf("2 => GREEN");
      gotoxy(60,18);
      printf("3 => YELLOW");
      gotoxy(60,19);
      printf("4 => BLUE");
      for(i=0;i<count;i++)
      {

//Assigning Color to each player------------------------------------------
       b:
       gotoxy(8,17+i);
       printf("Enter color for %d player:  ",i+1);
       t=getche();
       t-=48;
       gotoxy(34,17+i);
       printf("%d",t);
       switch(t)
       {
	case 1:if(player[0]!=0)
	       {
		gotoxy(8,18+i);
		printf("Already Taken!!!");
		getch();
		gotoxy(8,18+i);
		printf("                     ");
		gotoxy(34,17+i);
		printf("      ");
		goto b;
	       }
	       player[0]=i+1;
	       break;
	case 2:if(player[1]!=0)
	       {
		gotoxy(8,18+i);
		printf("Already Taken!!!");
		getch();
		gotoxy(8,18+i);
		printf("                     ");
		gotoxy(34,17+i);
		printf("      ");
		goto b;
	       }
	       player[1]=i+1;
	       break;
	case 3:if(player[2]!=0)
	       {
		gotoxy(8,18+i);
		printf("Already Taken!!!");
		getch();
		gotoxy(8,18+i);
		printf("                     ");
		gotoxy(34,17+i);
		printf("      ");
		goto b;
	       }
	       player[2]=i+1;
	       break;
	case 4:if(player[3]!=0)
	       {
		gotoxy(8,18+i);
		printf("Already Taken!!!");
		getch();
		gotoxy(8,18+i);
		printf("                     ");
		gotoxy(34,17+i);
		printf("      ");
		goto b;
	       }
	       player[3]=i+1;
	       break;
	default:gotoxy(8,18+i);
		printf("ILLEGAL Reference!!!");
		getch();
		gotoxy(8,18+i);
		printf("                     ");
		gotoxy(34,17+i);
		printf("      ");
		goto b;
       }
      }
     }
 setcolor(3);
 settextstyle(4,0,6);
 outtextxy(160,350,"All The Best :)");
 getch();
//Mounting Board----------------------------------------------------------
 board();
//Initiating Play---------------------------------------------------------
 play(count);
 cleardevice();
//Display Winner----------------------------------------------------------
 winner(count);
 getch();
 closegraph();
}

void play(int count)
{
 char ch,color[7],no[4][2]={"1\0","2\0","3\0","4\0"};
 int die,turn=0,ch1,times[3],i=0,j,k,l,m=0,flag,prev,curr,col,clc,win[4]={0,0,0,0};

 c:
 if(player[turn]==0||win[turn]==4)
  goto f;

 ch=getch();
 if(ch=='g'||ch=='G')
 {
  times[i]=rolldice();
  gotoxy(5+(i*3),16);
  printf("%d",times[i]);
  i++;
 }
 else if(ch==27)
  exit(0);
 else goto c;

 if(times[i-1]==6&&i<3)
  goto c;
 else if(times[i-1]==6&&i==3)
      {
       gotoxy(70,24);
       printf("  Turn");
       gotoxy(70,25);
       printf("Discarded");
       getch();
       gotoxy(70,24);
       printf("       ");
       gotoxy(70,25);
       printf("          ");
       goto f;
      }
 else{
      for(j=0;j<i;j++)
      {
       flag=0,l=0;
       die=times[j];
       for(k=0;k<4;k++)
       {if(G[turn][k]!=-1&&G[turn][k]!=-2&&G[turn][k]+die<106)
	 flag++;
	if(G[turn][k]==-2||G[turn][k]+die>105)
	 l++;
       }
       if(flag==0&&(die!=6||l==4))
       {e:
	gotoxy(68,24);
	printf("  Movement");
	gotoxy(68,25);
	printf("Not Possible");
	getch();
	gotoxy(68,24);
	printf("          ");
	gotoxy(68,25);
	printf("            ");
	goto f;
       }
       d:

       setcolor(0);
       settextstyle(2,0,5);
       for(l=0;l<4;l++)
       {if(G[turn][l]>=0&&G[turn][l]<52)
	 outtextxy(cd[0][G[turn][l]]-3,cd[1][G[turn][l]]-8,no[l]);
	else if(G[turn][l]==-1)
	 outtextxy(initpos[0][turn*4+l]-3,initpos[1][turn*4+l]-8,no[l]);
	else if(G[turn][l]>99)
	 outtextxy(entrance[0][G[turn][l]%100+turn*5]-3,entrance[1][G[turn][l]%100+turn*5]-8,no[l]);
       }

       ch1=getch()-49;

       switch(turn)
       {
	case 0:clc=12;break;
	case 1:clc=10;break;
	case 2:clc=14;break;
	case 3:clc=9;break;
       }
       setcolor(clc);
       settextstyle(2,0,5);
       for(l=0;l<4;l++)
       {if(G[turn][l]>=0&&G[turn][l]<52)
	 outtextxy(cd[0][G[turn][l]]-3,cd[1][G[turn][l]]-8,no[l]);
	else if(G[turn][l]==-1)
	 outtextxy(initpos[0][turn*4+l]-3,initpos[1][turn*4+l]-8,no[l]);
	else if(G[turn][l]>99)
	 outtextxy(entrance[0][G[turn][l]%100+turn*5]-3,entrance[1][G[turn][l]%100+turn*5]-8,no[l]);
       }
      for(l=0;l<4;l++)
       {if(G[turn][l]>=0&&G[turn][l]<52)
	{circle(cd[0][G[turn][l]],cd[1][G[turn][l]],7);setfillstyle(1,clc);
	 floodfill(cd[0][G[turn][l]],cd[1][G[turn][l]],clc);
	}
	else if(G[turn][l]==-1)
	{circle(initpos[0][turn*4+l],initpos[1][turn*4+l],7);setfillstyle(1,clc);
	 floodfill(initpos[0][turn*4+l],initpos[1][turn*4+l],clc);
	}
	else if(G[turn][l]>99)
	{circle(entrance[0][G[turn][l]%100+turn*5],entrance[1][G[turn][l]%100+turn*5],7);setfillstyle(1,clc);
	 floodfill(entrance[0][G[turn][l]%100+turn*5],entrance[1][G[turn][l]%100+turn*5],clc);
	}
       }

       if(ch1==-22)
	exit(0);
       else if(ch1<0||ch1>3)
       {
	gotoxy(68,24);
	printf("  Incorrect");
	gotoxy(68,25);
	printf("  Selection");
	getch();
	gotoxy(68,24);
	printf("           ");
	gotoxy(68,25);
	printf("            ");
	goto d;
       }
       prev=G[turn][ch1];
       if(G[turn][ch1]==-1&&die==6)
	G[turn][ch1]=ini[turn];
       else if(G[turn][ch1]==-2)
	goto g;
       else if(G[turn][ch1]==-1&&die!=6)
	    {g:
	     gotoxy(68,24);
	     printf("  Movement");
	     gotoxy(68,25);
	     printf("Not Possible");
	     getch();
	     gotoxy(68,24);
	     printf("          ");
	     gotoxy(68,25);
	     printf("            ");
	     goto d;
	    }
       else { G[turn][ch1]+=die;
	      if(prev<=end[turn]&&G[turn][ch1]>end[turn])
	       G[turn][ch1]=100+(G[turn][ch1]-end[turn]-1);
	      if(G[turn][ch1]>51&&G[turn][ch1]<100)
	       G[turn][ch1]-=52;
	      if(G[turn][ch1]>105)
	      {l=0;
	       G[turn][ch1]-=die;
	       flag=0;
	       for(k=0;k<4;k++)
	       {if(ch1==k)
		 continue;
		else if(G[turn][k]!=-1&&G[turn][k]!=-2&&G[turn][k]+die<106)
		 flag++;
		if(G[turn][k]==-2)
		 l++;
	       }
	     //  printf("%d%d",flag,l);
	       if(flag==0&&(die!=6||l==3))
		goto e;
	       else goto g;
	      }
	      if(G[turn][ch1]==105)
	      { G[turn][ch1]=-2;win[turn]++;
		if(win[turn]==4)
		{stand[count]=turn;
		 count--;
		}
		m++;
	      }
	    }
       curr=G[turn][ch1];

       switch(turn)
       {
	case 0:col=12;break;
	case 1:col=10;break;
	case 2:col=14;break;
	case 3:col=9;break;
       }
       l=-1;
       for(die=0;die<4;die++)
	for(k=0;k<4;k++)
	 if(prev==G[die][k])
	  l=die;
       clc=0;
       for(k=0;k<8;k++)
	if((prev==safe[k]||turn==l)&&l!=-1)
	 switch(l)
	 {
	  case 0:clc=12;break;
	  case 1:clc=10;break;
	  case 2:clc=14;break;
	  case 3:clc=9;break;
	 }
       if(prev==-1)
       {
	setcolor(col);
	circle(cd[0][curr],cd[1][curr],7);
	setfillstyle(1,col);
	floodfill(cd[0][curr],cd[1][curr],col);
	setcolor(0);
	circle(initpos[0][turn*4+ch1],initpos[1][turn*4+ch1],7);
	setfillstyle(1,0);
	floodfill(initpos[0][turn*4+ch1],initpos[1][turn*4+ch1],0);
       }
       else if(curr>=100||curr==-2)
       {
	if(curr!=-2)
	{setcolor(col);
	 circle(entrance[0][(curr%100)+turn*5],entrance[1][(curr%100)+turn*5],7);
	 setfillstyle(1,col);
	 floodfill(entrance[0][(curr%100)+turn*5],entrance[1][(curr%100)+turn*5],col);
	}
	setcolor(clc);
	if(prev>=100)
	{
	 circle(entrance[0][(prev%100)+turn*5],entrance[1][(prev%100)+turn*5],7);
	 setfillstyle(1,clc);
	 floodfill(entrance[0][(prev%100)+turn*5],entrance[1][(prev%100)+turn*5],clc);
	}
	else{
	     circle(cd[0][prev],cd[1][prev],7);
	     setfillstyle(1,clc);
	     floodfill(cd[0][prev],cd[1][prev],clc);
	    }
       }
       else{
	    setcolor(col);
	    circle(cd[0][curr],cd[1][curr],7);
	    setfillstyle(1,col);
	    floodfill(cd[0][curr],cd[1][curr],col);
	    setcolor(clc);
	    circle(cd[0][prev],cd[1][prev],7);
	    setfillstyle(1,clc);
	    floodfill(cd[0][prev],cd[1][prev],clc);
	   }
       l=0;
       for(k=0;k<8;k++)
	if(safe[k]==curr)
	 l++;
       for(die=0;die<4;die++)
	for(k=0;k<4;k++)
	 if(curr==G[die][k]&&turn!=die&&l==0&&curr<100&&curr>-1)
	 {
	  G[die][k]=-1;
	  m++;
	  switch(die)
	  {
	   case 0:clc=12;break;
	   case 1:clc=10;break;
	   case 2:clc=14;break;
	   case 3:clc=9;break;
	  }
	  setcolor(clc);
	  circle(initpos[0][die*4+k],initpos[1][die*4+k],7);
	  setfillstyle(1,clc);
	  floodfill(initpos[0][die*4+k],initpos[1][die*4+k],clc);
	 }
      }
      f:
      i=0;
      if(m>0)
       m--;
      else turn++;
      if(turn==4)
       turn=0;
      gotoxy(5,9);
      printf("      ");
      switch(turn)
      {
       case 0:strcpy(color,"RED");
	      gotoxy(7,9);break;
       case 1:strcpy(color,"GREEN");
	      gotoxy(6,9);break;
       case 2:strcpy(color,"YELLOW");
	      gotoxy(5,9);break;
       case 3:strcpy(color,"BLUE");
	      gotoxy(6,9);break;
      }
      printf("%s",color);
      gotoxy(5,16);
      printf("%c",'-');
      gotoxy(8,16);
      printf("%c",'-');
      gotoxy(11,16);
      printf("%c",'-');
      if(count>0)
       goto c;
     }     //Yellow:5,9;Green:6,9;Blue:6,9;Red:7,9
 /*switch(turn)
 {
  case 0:if()
	 break;
  case 1:
	 break;
  case 2:
	 break;
  case 3:
	 break;
 }*/
}

int rolldice()
{
 int die,i;
 time_t t;
 srand((unsigned) time(&t));
 die=rand()%6+1;
 for(i=0;i<100;i++)
 {gotoxy(74,16);
  printf("%d",i%6+1);
  delay(10);
 }
 gotoxy(74,16);
 printf("%d",die);
 return die;
}

void board()
{
 int i,die;
 char player[7];
 cleardevice();

//Board Main Structure-----------------------------------------------------
 setcolor(14);
 settextstyle(1,0,4);
 outtextxy(285,5,"LUDO");
 setcolor(4);
 rectangle(0,0,639,479);
 rectangle(110,48,534,472);
 setcolor(15);
 rectangle(112,50,532,470);

//Board Inner Lines--------------------------------------------------------
 for(i=5;i<9;i++)
 {line(140+(i*28),50,140+(i*28),218);
  line(140+(i*28),302,140+(i*28),470);
  line(112,78+(i*28),280,78+(i*28));
  line(364,78+(i*28),532,78+(i*28));
 }

 for(i=0;i<14;i++)
 {
  if(i<6||i>7)
  {line(140+(i*28),218,140+(i*28),302);
   line(280,78+(i*28),364,78+(i*28));
  }
 }

//Center Square-----------------------------------------------------------
 for(i=0;i<5;i++)
  rectangle(280+i,218+i,364-i,302-i);


 line(280,260,364,260);
 line(322,218,322,302);
 setcolor(12);
 rectangle(285,223,321,259);
 setfillstyle(1,12);
 floodfill(301,239,12);
 setcolor(10);
 rectangle(323,223,359,259);
 setfillstyle(1,10);
 floodfill(343,239,10);
 setcolor(9);
 rectangle(285,261,321,297);
 setfillstyle(1,9);
 floodfill(301,281,9);
 setcolor(14);
 rectangle(323,261,359,297);
 setfillstyle(1,14);
 floodfill(343,281,14);

//Four Blocks For Each Player---------------------------------------------
 setcolor(12);
 circle(196,134,70);
 circle(196,99,20);
 circle(161,134,20);
 circle(196,169,20);
 circle(231,134,20);
 setfillstyle(1,12);
 floodfill(196,134,12);


 setcolor(10);
 circle(448,134,70);
 circle(448,99,20);
 circle(413,134,20);
 circle(448,169,20);
 circle(483,134,20);
 setfillstyle(1,10);
 floodfill(448,134,10);


 setcolor(9);
 circle(196,386,70);
 circle(196,351,20);
 circle(161,386,20);
 circle(196,421,20);
 circle(231,386,20);
 setfillstyle(1,9);
 floodfill(196,386,9);


 setcolor(14);
 circle(448,386,70);
 circle(448,351,20);
 circle(413,386,20);
 circle(448,421,20);
 circle(483,386,20);
 setfillstyle(1,14);
 floodfill(448,386,14);

//Dark Marks For Each Player----------------------------------------------
 setcolor(9);
 for(i=0;i<4;i++)
 {
  rectangle(281+i,441-i,307-i,415+i);
  rectangle(309+i,441-i,335-i,415+i);
  rectangle(309+i,413-i,335-i,387+i);
  rectangle(309+i,385-i,335-i,359+i);
  rectangle(309+i,357-i,335-i,331+i);
  rectangle(309+i,329-i,335-i,303+i);
 }

 setcolor(14);
 for(i=0;i<4;i++)
 {
  rectangle(477+i,275+i,503-i,301-i);
  rectangle(477+i,247+i,503-i,273-i);
  rectangle(449+i,247+i,475-i,273-i);
  rectangle(421+i,247+i,447-i,273-i);
  rectangle(393+i,247+i,419-i,273-i);
  rectangle(365+i,247+i,391-i,273-i);
 }

 setcolor(12);
 for(i=0;i<4;i++)
 {
  rectangle(141+i,219+i,167-i,245-i);
  rectangle(141+i,247+i,167-i,273-i);
  rectangle(169+i,247+i,195-i,273-i);
  rectangle(197+i,247+i,223-i,273-i);
  rectangle(225+i,247+i,251-i,273-i);
  rectangle(253+i,247+i,279-i,273-i);
 }

 setcolor(10);
 for(i=0;i<4;i++)
 {
  rectangle(337+i,79+i,363-i,105-i);
  rectangle(309+i,79+i,335-i,105-i);
  rectangle(309+i,107+i,335-i,133-i);
  rectangle(309+i,135+i,335-i,161-i);
  rectangle(309+i,163+i,335-i,189-i);
  rectangle(309+i,191+i,335-i,217-i);
 }

//Safe Points-------------------------------------------------------------
 setcolor(11);
 for(i=0;i<4;i++)
 {
  rectangle(281+i,107+i,307-i,133-i);
  rectangle(169+i,275+i,195-i,301-i);
  rectangle(449+i,219+i,475-i,245-i);
  rectangle(337+i,413-i,363-i,387+i);
 }

//Goti--------------------------------------------------------------------
 setcolor(9);
 setfillstyle(1,9);
 circle(196,351,7);
 floodfill(196,351,9);
 circle(161,386,7);
 floodfill(161,386,9);
 circle(196,421,7);
 floodfill(196,421,9);
 circle(231,386,7);
 floodfill(231,386,9);

 setcolor(10);
 setfillstyle(1,10);
 circle(448,99,7);
 floodfill(448,99,10);
 circle(413,134,7);
 floodfill(413,134,10);
 circle(448,169,7);
 floodfill(448,169,10);
 circle(483,134,7);
 floodfill(483,134,10);

 setcolor(12);
 setfillstyle(1,12);
 circle(196,99,7);
 floodfill(196,99,12);
 circle(161,134,7);
 floodfill(161,134,12);
 circle(196,169,7);
 floodfill(196,169,12);
 circle(231,134,7);
 floodfill(231,134,12);

 setcolor(14);
 setfillstyle(1,14);
 circle(448,351,7);
 floodfill(448,351,14);
 circle(413,386,7);
 floodfill(413,386,14);
 circle(448,421,7);
 floodfill(448,421,14);
 circle(483,386,7);
 floodfill(483,386,14);
/* setcolor(0);
 settextstyle(2,0,5);
 outtextxy(410,378,"4");         //3,8
*/
//Dice Creation-----------------------------------------------------------
 die=1;
 setcolor(14);
 settextstyle(1,0,2);
 outtextxy(565,195,"DICE");
 gotoxy(74,16);
 printf("%d",die);
 rectangle(574,235,600,258);
 rectangle(576,237,598,256);
 gotoxy(71,18);
 printf("Press G");
 gotoxy(71,19);
 printf("TO ROLL");

//Interface---------------------------------------------------------------
 strcpy(player,"RED");
 outtextxy(30,90,"TURN");
 gotoxy(7,9);
 printf("%s",player);
 rectangle(24,122,89,147);
 rectangle(26,124,87,145);

 outtextxy(30,200,"TIMES");
 gotoxy(5,16);
 printf("%c",'-');
 gotoxy(8,16);
 printf("%c",'-');
 gotoxy(11,16);
 printf("%c",'-');
 rectangle(20,235,98,260);
 rectangle(22,237,96,258);
 line(46,237,46,258);
 line(72,237,72,258);

/* outtextxy(30,310,"GOTI");
 gotoxy(3,23);
 printf("%d",1);
 gotoxy(6,23);
 printf("%d",2);
 gotoxy(9,23);
 printf("%d",3);
 gotoxy(12,23);
 printf("%d",4);
 rectangle(8,346,104,371);
 rectangle(10,348,102,369);
 line(33,348,33,369);
 line(56,348,56,369);
 line(79,348,79,369);*/
 set();
}

void winner(int c)
{
 setcolor(14);
 settextstyle(1,0,4);
 outtextxy(285,5,"LUDO");
 setcolor(4);
 rectangle(0,0,639,479);
 rectangle(2,2,637,477);
 setcolor(14);
 settextstyle(4,0,6);
 outtextxy(210,70,"WINNER");
 setcolor(15);
 rectangle(280,230,370,300);
 rectangle(190,250,280,300);
 rectangle(370,270,460,300);
 outtextxy(315,230,"1");
 settextstyle(4,0,4);
 outtextxy(225,255,"2");
 settextstyle(4,0,2);
 outtextxy(415,270,"3");
 gotoxy(38,14);
 printf("Player %d",player[stand[c]]);
 c--;
 gotoxy(26,15);
 printf("Player %d",player[stand[c]]);
 c--;
 if(c!=0)
 {gotoxy(49,16);
  printf("Player %d",player[stand[2]]);
 }
}

void select()
{
 int i;
 delay(100);
 for(i=0;i<52;i++)
 {
  setcolor(4);
  circle(cd[0][i],cd[1][i],7);
  setfillstyle(1,4);
  floodfill(cd[0][i],cd[1][i],4);
  delay(100);
  setcolor(0);
  circle(cd[0][i],cd[1][i],7);
  setfillstyle(1,0);
  floodfill(cd[0][i],cd[1][i],0);
 }
}


void set()
{
 int i,j;
 for(i=0;i<4;i++)
  for(j=0;j<4;j++)
   G[i][j]=-1;
}