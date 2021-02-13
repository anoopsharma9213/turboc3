#include<fstream.h>
# include<process.h>
# include<dos.h>
# include<stdlib.h>
# include<graphics.h>
# include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>


int playerlevel ;
int bri[5][20] ;
void credits();
void bricks();
void level();
void drawbrick(int,int);
void mainscreen();
void erasebrick(int,int);
void music(int);
void decorate(int,int,int,int,int );
void game();
void start();
void init();
void highscores1();
int score=0;
void sort();
char player[10];
static int I=-20;

class data
{
  char name[10];
  int  score1;
  public:
		 void input()
  {
	  strcpy(name,player);
	  score1=score ;
  }


		 void print()
 {
		I+=20;
	char ch[10];
	itoa(score1,ch,10);
	setcolor(10);
	settextstyle(3,0,1);
	outtextxy(240,75+I,name);
	outtextxy(340,75+I,ch);

 }
		int rets()
		{
		return score1 ;
		}
} ;

 void sort()
		 {
	 data x[100];
	 int i=0;

	 ifstream f1("h.dat",ios::binary);
	 f1.seekg(0);
	 while(f1.read((char*)&x[i],sizeof(x[i])))
	{
	 i++;
	}
	f1.close();
	 int n=i,k=0;
	 data t;


	 for(k=0;k<n-1;k++)
		for(int j=k+1;j<n;j++)
	 if(x[k].rets() < x[j].rets() )
	 {
	  t=x[k]   ;
	  x[k]=x[j];
	  x[j]=t;
	 }

		ofstream f2("h.dat",ios::binary) ;
	 for( k=0; k < n; k++)
	 {
	 f2.write((char*)&(x[k]),sizeof(x[k]));

	 }
	 f2.close();
 }

 void highscores()
{
		data d    ;
		gotoxy(22,25);
		printf("enter your name:  ");
		gets(player);
		fstream f3("h.dat",ios::binary|ios::in|ios::out);
		f3.seekg(0,ios::end);
		d.input();
		f3.write((char*)&d,sizeof(d));
		f3.close();
		cleardevice();
		highscores1();
}


 void highscores1()
{
	 cleardevice();
	 decorate(1,13,4,12,9);
	 sort();
	 data d;
	 I=-20;
	  int i=0;
	  ifstream f4("h.dat",ios::binary);
	  while(f4.read((char*)&d,sizeof(d)))
	 {
	 i++ ;
	 d.print();
	 if(i==4)break;
	 }

	  for(;;)
	  {   if(kbhit())
		 mainscreen();
	  }
}


void intro()
{
	cleardevice();
	int i, j,k=0, x = 0, y = 0,z=0,w=0,e=0 ;
	int a=640,b=200,c=640,d=200,f=0,g=0;

	setfillstyle(5,1);
	setcolor(GREEN);

	setcolor(10);
	for(;;k++)
		{
			drawbrick ( x, y ) ;
			y=y+10;
			if(y==200)
			{
			x=x+32;
			y=0;

			}

			drawbrick ( w, z ) ;
			w=w+32;
			if(w==640)
			{	z=z+10;
			 w=0;
			}
			drawbrick(a,b);
			b=b-10;
			if(b==0)
			{
			 a=a-32;
			 b=200;
			}
			drawbrick(c,d);
			c=c-32;
			if(c==0)
			{
			 c=640;
			 d=d-10;
			}

	for(int h=0;h<=1;h++)
		 {	f=(random(20)+1)*32;
	g=(random(20)+1)*10;
	drawbrick(f,g);
	}
	music(7);
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 6);
	setcolor(k++);
	rectangle(190,78,470,123);
	setcolor(k++);
	outtextxy(194,80,"BRICKS");
	delay(30);
	settextstyle(1,0,4);
	setcolor(15);
	 if(e==1)
		break;
	if(c==320&&d==100)
		  e++;
	setcolor(0);


		}


	 float l,m;
	 char ch;
	for(i=0,l=0,j=0,m=0;i<=320;)
	{    	setcolor(0);
					 //  	rectangle(190,78,470,123);
					 //     i++,l+=.3125
	rectangle(0+i,0+l,640-j,200-m);
	delay(5);
	settextstyle(DEFAULT_FONT,HORIZ_DIR, 6);
	setcolor(k++);
	setcolor(k++);
	outtextxy(192,80,"BRICKS");
	if(i!=190)
		  i++;
	if(j!=170)
		 j++;
	if(l<78)
		  l+=.3125;
	if(m<77)
		  m+=.3125;
	if(kbhit())
		 ch=getch();
		 if(ch==27||ch==13)
		 break;
	}

}



void init()
{  for(int i=0;i<5;i++)
		for(int j=0;i<5;i++)
		 bri[i][j]=0;
}



void start()
{
	int x=50, y=10, b=600, c=340;

	 int i,ctr=0;
	 int dly=300,dly1=40;//110 40
	clrscr();

	for ( i=1;i<=10;i++)
	{
	if(i==7)
	continue;
	else
	{
	setcolor(i);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(40,70);
	if(ctr==0)
	delay(500);
	outtext("PROJECT"); //blink
	delay(dly);
	clrscr();
	ctr++;
	}
}
	for ( i=1;i<7;i++)
{
	setcolor(i);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(160,85);
	outtext("OF C++");
	delay(dly);
	clrscr();
}
	for ( i=3;i<=9;i++)
{
	if(i==7)
	continue;
	else
	{
	setcolor(i);
	settextstyle( TRIPLEX_FONT, HORIZ_DIR, i);
	moveto(40,70);
	outtext("MADE");
	delay(dly);
	clrscr();
	}
}
for ( i=1;i<=10;i++)
{
	if(i==7)
	continue;
	else
	{
	setcolor(i);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(230,90);
	outtext("BY");
	delay(dly);
	clrscr();
	}
}

for ( i=1;i<=5;i++)
{
	setcolor(i+7);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(10,70);
	outtext("RAMINDER  JEET");
	delay(i*dly);
	clrscr();
}

for ( i=1;i<=4;i++)
{
	setcolor(i);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(50,70);
	outtext("XII  E");
	delay(i*dly);
	clrscr();
}
for ( i=1;i<=5;i++)
{
	setcolor(i);
	settextstyle( DEFAULT_FONT, HORIZ_DIR, i);
	moveto(40,70);
	outtext("APS DK");
	delay(i*dly);
	clrscr();
}


intro();

}




void music(int type)
{

	float s[7] = { 100, 125, 150, 175, 200, 225, 250 } ;
	int n, i ;

	switch ( type )
	{
		case 1:
			for ( i = 0 ; i < 7 ; i++ )
			{
				sound ( s[i] * 8 ) ;
				delay ( 30 ) ;
			}
			nosound() ;
			break ;

		case 2 :
			for ( i = 0 ; i < 10 ; i++ )
			{
				n = random ( 7 ) ;
				sound ( s[n] * 4 ) ;
				delay ( 100 ) ;
			}
			nosound() ;
			break ;

		case 3 :
			while ( !kbhit() )
			{
				n = random ( 7 ) ;
				sound ( s[n] * 4 ) ;
				delay ( 100 ) ;
			}
			nosound() ;

			break ;

		case 4 :
			for ( i = 4 ; i >= 0 ; i-- )
			{
				sound ( s[i] * 4 ) ;
				delay ( 15 ) ;
			}
			nosound() ;
			break ;

		case 5 :
			sound ( s[6] * 2 ) ;
			delay ( 50 ) ;
			nosound() ;
		case 6 :
			sound ( s[4] * 2 ) ;
			delay ( 50 ) ;
			nosound() ;
		case 7 :
			sound ( s[6] * 2 ) ;
			delay ( 50 ) ;
			nosound() ;

	}
}



 void decorate(int a,int b,int c,int d,int e)
 {
	setcolor(10);
     setfillstyle(e,a);

   rectangle(0,0,639.9,199.9);
   rectangle(40,12.5,600,187.5);
   floodfill(1,1,10)  ;
   setcolor(b);
   rectangle(41,13,599,187);
   rectangle(80,25,560,175);
   setfillstyle(e,b);
   floodfill(42,20,b);
   setcolor(4);
	rectangle(81,25.5,559,174.5);
   rectangle(120,37.5,520,162.5);
   setfillstyle(e,c);
   floodfill(82,30,c);
   setcolor(d) ;
	rectangle(121,38,519,162);      //    decorate(12,13,4,2,6);
				   //	decorate(1,13,4,12,9);

   setfillstyle(1,d);
  floodfill(130,100,d) ;
  setfillstyle(1,WHITE);
  }



 void level()
{
    cleardevice();
//    decorate(1,2,3,0);
	decorate(1,13,4,12,9);
	setcolor(3) ;
      outtextxy(240,75,"1.");
	  outtextxy(240,100,"2.");
	  setcolor(10);
		outtextxy(260,75,"EASY");
	outtextxy(260,100,"HARD");
	char ch;
	 for(;;)
	{
	  ch=getch();
	  if(ch=='1'||ch=='2')
	  break;
	 }
	 if(ch=='1')
	  playerlevel=1   ;
	if(ch=='2')
	  playerlevel=2 ;

	  game();
       }








void credits()
 {
  int k=0;
  cleardevice();
  setcolor(10);
  decorate(1,22,4,24,6);
  settextstyle(4,0,4);
  setcolor(BLACK);
  for(;;)
  {
    setcolor(k++);
  outtextxy(160,66,"Made by :-");
	 outtextxy(160,90,"RAMINDER JEET ");
		   outtextxy(160,115,"XI E");
		   if(kbhit())
		 {  getch();


		   exit(0);
		 }
		delay(100);
 }
 }



void mainscreen()
{
	cleardevice();

 //	decorate(5,10,2,0);
	 decorate(12,13,4,2,6);
	settextstyle(3,0,1);
	setcolor(1);
	outtextxy(240,75,"1.");
	outtextxy(240,100,"2.");
	outtextxy(240,125,"3.");
	setcolor(1);
	outtextxy(260,75,"PLAY GAME");
	outtextxy(260,100,"INSTRUCTIONS");
	outtextxy(260,125,"EXIT") ;
	char s;
	int i=20;
	setcolor(BLACK);
		for(;;)
      {
       //	  music(2);
	   if(kbhit())
		 s=getch();

		  if(s=='2'||s=='1'||s=='3') break;
	  else continue;
       }
       if(s=='3')
       credits();

       if(s=='2')
	 highscores1();
       if(s=='1')
	{
	cleardevice();
	level();
	}

}




main()
{
	int gm = EGALO, gd = EGA  ;
	initgraph ( &gd, &gm, "d:\\tc\\bgi" ) ;
				start();
	mainscreen() ;

}



void game()
{
	init();
	cleardevice();
	int ballx, bally, barx, bary, oldx, oldy ;
	char ch;
	int maxx, maxy, midx, midy,  speed = 25,chance = 4,ctr=0 ;
	int layer[5] = {0,1,2,3,4}, limit = 50, currentlayer = 4 ;

	maxx = 640	;maxy = 200 ;	midx = 320 ;	midy = 100 ;


	if(playerlevel==2)speed=12;
	setcolor(WHITE);
	rectangle ( 0, 0, maxx, maxy - 12 ) ;
	bricks() ;
	 setfillstyle(1,GREEN);
		setcolor(WHITE);

	rectangle ( midx - 25, maxy - 7 - 12, midx + 25, maxy - 12 ) ;
	floodfill ( midx, maxy - 1 - 12, WHITE ) ;
	setcolor(WHITE);
	rectangle ( 0, 0, maxx, maxy - 12 ) ;
	 setfillstyle(1,RED);
	setcolor(RED);
	circle ( midx, maxy - 13 - 12, 12 ) ;
	floodfill ( midx, maxy - 10 - 12, RED ) ;
	int size;
	void *p1, *p2 ;

	size = imagesize ( midx - 12, maxy - 18, midx + 12, maxy - 8 ) ;
	p1 = malloc ( size ) ;

	size = imagesize ( midx - 25, maxy - 7, midx + 25, maxy - 1 ) ;
	p2 = malloc ( size ) ;


	getimage ( midx - 12, maxy - 7 - 12 - 12 + 1, midx + 12, maxy - 8 - 12, p1 ) ; //ball
	getimage ( midx - 25, maxy - 7 - 12, midx + 25, maxy - 1 - 12, p2 ) ;   //paddle

	barx = midx - 25 ;
	bary = maxy - 7 - 12 ;
	ballx = midx - 12 ;
	bally = maxy - 7 - 12 + 1 - 12 ;

	for (int i = 0 ; i < 3 ; i++ )
	{
		setcolor(RED);
		circle ( 515 + i * 35, maxy - 5, 12 ) ;
		floodfill ( 515 + i * 35, maxy - 5, RED ) ;
	}
	int j,angle=0,angle2=0,changeangle=0,b=10;
	// display initial score
	gotoxy ( 1, 25 ) ;
	printf ( "Your Score:   %5s", score ) ;
	int x=1,y=-1;
	int c=0,c2=0;
	while ( 1 )
	{
		if(ctr)
		{
			delay(1000);
			setfillstyle(1,GREEN);
			setcolor(WHITE);
			rectangle ( midx - 25, maxy - 7 - 12, midx + 25, maxy - 12 ) ;
			floodfill ( midx, maxy - 1 - 12, WHITE ) ;
			setcolor(WHITE);
			rectangle ( 0, 0, maxx, maxy - 12 ) ;
			setfillstyle(1,RED);
			setcolor(RED);
			circle ( midx, maxy - 13 - 12, 12 ) ;
			floodfill ( midx, maxy - 10 - 12, RED ) ;
			barx = midx - 25 ;
			bary = maxy - 7 - 12 ;
			ballx = midx - 12 ;
			bally = maxy - 7 - 12 + 1 - 12 ;
			x=1,y=-1;
			ctr=0;
			for(;;)
		       {	ch=getch();
			 if(ch==32)break;
			     switch(ch)
		  {
		   case 27 :   mainscreen();
			       break;

		   case 77 : 	putimage ( barx, bary, p2, XOR_PUT ) ;
				barx = barx + b ;

				c=0  ;
				if(barx>589)
			      {	barx=580;
				c++;
			       }
				putimage ( ballx, bally, p1, XOR_PUT ) ;
				if(c==0)
				ballx = ballx +b ;

				putimage ( barx, bary, p2, COPY_PUT ) ;
				putimage ( ballx, bally, p1, COPY_PUT ) ;

			       break;


		   case 75 :   	putimage ( barx, bary, p2, XOR_PUT ) ;
				barx = barx - b ;
					c=0  ;
				if(barx<0)
			      {	barx=0;
				c++;
			       }

				putimage ( ballx, bally, p1, XOR_PUT ) ;
				if(c==0)
				ballx = ballx - b ;
					putimage ( barx, bary, p2, COPY_PUT ) ;

				putimage ( ballx, bally, p1, COPY_PUT ) ;

				break;

		  }

		       }

		}
		j = 0 ;

		oldx = ballx ;
		oldy = bally ;

		ballx = ballx + x ;
		bally = bally + y ;
		changeangle=0;
		if ( bally > 40 )
		{
			limit = 50 ;
			currentlayer = 4 ;
		}
		else if ( bally > 30  )
			{
			limit = 40 ;
			currentlayer = 3 ;
			}
		else if ( bally > 20 )
			{
			limit = 30 ;
			currentlayer = 2 ;
			}
		else if ( bally > 10 )
			{
			limit = 20 ;
			currentlayer = 1 ;
			}
		else
			{
			limit = 10 ;
			currentlayer = 0 ;
			}
		if ( ballx < 1 )
		{
		   //	music ( 5 ) ;
			ballx = 1 ;
			x = -x ;
		}

		if ( ballx > ( maxx - 24 - 1 ) )
		{
		   //	music ( 5 ) ;
			ballx = maxx - 24 - 1 ;
			x = -x ;
		}

		if ( bally < 1 )
		{
		   //	music ( 5 ) ;
			bally = 1 ;
			y = -y ;
		}

		if ( bally < limit )
		{
			if ( bri[currentlayer][ ( ballx + 10 ) / 32 ] == 1 )
			{
				for ( i = 1 ; i <= 6 ; i++ )
				{
					// check right
					if ( bri[currentlayer][ ( ballx + i + 10 ) / 32 ] == 0 )
					{
						ballx = ballx + i ;
						j = 1 ;
						break ;
					}

					//  left check
					if ( bri[currentlayer][ ( ballx - i + 10 ) / 32 ] == 0 )
					{
						ballx = ballx - i ;
						j = 1 ;
						break ;
					}
				}

				if ( j==0 )
				{
					/* check if the ball has moved above the current layer */
					if ( bally < layer[currentlayer - 1] )
					{
						currentlayer-- ;
						limit = layer[currentlayer] ;
					}
					// erase
					putimage ( oldx, oldy, p1, XOR_PUT ) ;

					// place at new coordinates
					putimage ( ballx, bally, p1, COPY_PUT ) ;

					delay ( speed-2 ) ;

					continue ;
				}
			}

			// control comes to this point if the ball is touching a brick
		 //	music ( 4 ) ;

			erasebrick ( ( ballx + 10 ) / 32, currentlayer ) ;


			bri[currentlayer][ ( ballx + 10 ) / 32 ] = 1 ;

			bally = bally + 1 ;
			y = -y ;
			score += 5 ;
			gotoxy ( 16, 25 ) ;
			printf ( "%4d ", score ) ;


		}


		if ( bally > 180 - 12 )
		{
			if ( ballx < barx - 20 || ballx > barx + 50 )//paddle miss
			{
				while ( bally < 177 )
				{
					putimage ( oldx, oldy, p1, XOR_PUT ) ;

					putimage ( ballx, bally, p1, COPY_PUT ) ;

					delay ( speed ) ;

					oldx = ballx ;
					oldy = bally ;

					ballx = ballx + x ;
					bally = bally + y ;
				}

				chance-- ;
				ctr++ ;
				  delay(1000);
					putimage ( oldx, oldy, p1, XOR_PUT ) ;
					putimage(barx, bary, p2, XOR_PUT);
				score -= 20 ;
				gotoxy ( 16, 25 ) ;
				printf ( "%4d  ", score ) ;
				music ( 2 ) ;

				if ( chance )
					putimage ( 515 + ( chance - 1 ) * 35 - 12 , maxy - 10, p1, XOR_PUT ) ;


				if ( chance==0 )
				{
					music ( 3 ) ;
					highscores();
					mainscreen();
				}
				continue;
			}

			// if ball is collected on paddle
	       //		music ( 5 ) ;
			bally = 180 - 12 ;
			y = -y ;

		}

		putimage ( oldx, oldy, p1, XOR_PUT ) ;

		putimage ( ballx, bally, p1, COPY_PUT ) ;

		if ( score == 500 - ( ( 4 - chance ) * 20 ) )
		{
			outtextxy ( midx, midy, "You win !!!" ) ;

			music ( 3 ) ;
			highscores();
			mainscreen();

		}

		delay ( speed ) ;

		if(score==100&&c2==0){ speed--;c2++; }
		if(score==150&&c2==1){ speed--;c2++; }
		if(score==250&&c2==2){ speed--;c2++; }
		if(score==350&&c2==3){ speed--;c2++; }
		if(score==400&&c2==4){ speed--;c2++; }
		if(score==450&&c2==5){ speed--;c2++; }

		if (kbhit())
		{
		    ch=getch();
			switch(ch)
		  {
		   case 27 :   mainscreen();
			       break;

		   case 77 : 	putimage ( barx, bary, p2, XOR_PUT ) ;
				barx = barx + b ;
				if(barx>589)
				barx=580;

				putimage ( barx, bary, p2, COPY_PUT ) ;

			       break;


		   case 75 :   	putimage ( barx, bary, p2, XOR_PUT ) ;

				barx = barx - b ;
				if(barx<0)
				barx=0;


				putimage ( barx, bary, p2, COPY_PUT ) ;

				break;

		  }


		}
	}
}


void bricks()
{
	int i, j, x = 0, y = 0 ;

	for ( i = 0 ; i < 5 ; i++ )
	{
		for ( j = 0 ; j < 20 ; j++ )
		{
			drawbrick ( x, y ) ;

			x = x + 32 ;
		}

		x = 0 ;
		y = y + 10 ;
	}
}


void drawbrick ( int x, int y )
{    static  int ctr=1;
	for(;;)
   {	setfillstyle(1,ctr);
	 ctr++  ;
	if(ctr%16==0||ctr%16==1)
	 continue;
	 else
	 break;

   }
	setcolor(WHITE);
	rectangle ( x, y, x + 31, y + 9 ) ;
	rectangle ( x + 2, y - 2, x + 29, y +7 ) ;

	floodfill ( x + 1, y + 1, WHITE ) ;
	floodfill( x  + 5 , y + 5,WHITE );
	floodfill( x  + 5 , y + 9,WHITE );


}


void erasebrick ( int b, int l )
{

	setcolor ( BLACK ) ;
	rectangle ( b * 32, l * 10, ( b * 32 ) + 31 , ( l * 10 ) + 9 ) ;
	rectangle ( b * 32 + 1, l * 10, ( b * 32 ) + 31 - 1, ( l * 10 ) + 9 - 1 ) ;
	rectangle ( b * 32 + 2, l * 10, ( b * 32 ) + 31 - 2, ( l * 10 ) + 9 - 2 ) ;
		setfillstyle(1,BLACK);
		floodfill( b*32  + 5 , l*10 + 5,WHITE );

	setcolor ( WHITE ) ;
}

