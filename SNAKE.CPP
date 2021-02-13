#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>
#include<time.h>
#include<stdlib.h>


int c,b,g=0;

void format(int style,int color,int size);

struct mouth{
				  int posx,posy;
				};



class play{
				mouth p,m[500];
				int size;
				int fx,fy,fc;
				int d,t,maze;long sc;

	public:  play();
			     //	int level();
				void dmaze();
				void frog(int);
				int err(mouth m[500],int h,int);
				int game();
				void chmaze(int maz)
				{maze=maz;}
				void chlev(int lev)
				{t=lev;}
				int retm(){return maze;}
				int retl(){return t;}

			}o;


int  i,j,k,d1, d;
const char ptr[]={"game over"};

void draw (int &x,int &y,int c=15,int s=1);


void screen();



void display(long);void update(long);    //score
int aprdm ();
void change(char s[10],long m);    //chngs score from int to string
void scr1();
void scr2();
void scr3();
void scr4();




void main()
{   randomize();



cleardevice();

screen();

}//main


 void update(long sc){setcolor(BLACK);
 char s[10]; settextstyle(7,0,1);

change(s,sc);
outtextxy(505,40,s);
setcolor(0);}

 void display(long sc)
{char s[10];const char ptr2[]={"SCORE"}; settextstyle(7,0,1);
outtextxy(505,22,ptr2);
change(s,sc);
outtextxy(505,40,s);
}

void change(char s[10],long sc)

{ i=0;
do
{s[i]=48+sc%10;
sc=sc/10;
i++;}while(sc!=0);
s[i]='\0';  s=strrev(s);
}
int  level(int f)
{ int x=100-(f*8);

if(x>0)return x;
else return 100;

}
void play:: dmaze()
		 {

if (maze==1)
{for(int i=0;i<24;i++)
{ c=13+(7*31);b=25+14+(7*i);
draw(c,b,5);
c=13+(7*31);b=25+(7*34)+(7*i);
draw(c,b,5);
c=13+14+(7*i);b=25+(7*30);
draw(c,b,5);
c=13+14+(7*i)+(7*35);b=25+(7*30);
draw(c,b,5);
}}
else if(maze==3)
{
for( i=0;i<35;i++)
{
 c=13+7*14+(7*i);b=25+70;
draw(c,b,5);
c=13+7*14+(7*i);b=438-70;
draw(c,b,5);
}
}
else if(maze==4)
for( i=0;i<32;i++)
{  c=13+77;b=25+98+(7*i);
draw(c,b,5);
c=448-78;438-98-(7*i);
draw(c,b,5);
 }
else if (maze==2)
{for( i=0;i<64;i++)
{
 c=13+(7*i);b=25;
draw(c,b,5);
c=13+(7*i);b=438;
draw(c,b,5);
}
for( i=0;i<60;i++)
{
c=13;b=25+(7*i);
draw(c,b,5);
c=447;b=438-(7*i);
draw(c,b,5);
 }
}


		}


void clean()
{
	  setlinestyle(0,0,3);

	  setcolor(15);
	  rectangle(1,1,638,478);
	  rectangle(40,30,600,450);

		setfillstyle(8,15);
		 floodfill(40,10,15);

	moverel(100,110);

	  setlinestyle(0,0,1);
}
void cbox(int o)
{
	setfillstyle(1,o);
	floodfill(50,50,11);
}      void format(int style,int color,int size)
{
	setcolor(color);
	settextstyle(style,0,size);
}
void abarm()
{ int a=0;
  static int b[4][8];
  char ch;

for(i=0;i<8;i++)
{
b[i][0]=75+20*(i+1)+i*30;
b[i][1]=200-5*(i+1)-i*15;
b[i][2]=95+(i+1)*20+i*30;
b[i][3]=300;
}
for(int i=0;i<a;++i)
{setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[i][0],b[i][1],b[i][2],b[i][3],15,1);

}
while(ch!=27)
{ setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);

ch=getch();

if((int)ch==72&&a<=8)
{setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);
a++;


}
else if((int)ch==80&&a>=0)
{
setcolor(BLACK);
setfillstyle(1,BLACK);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);
a-- ;
}

if(a>8)a=8;
else if(a<0)a=0;


 if(int(ch)==13){o.chmaze(a);return;}


}

}
		  void abarl()
{ int a=0;
  static int b[4][8];
  char ch;

for(i=0;i<8;i++)
{
b[i][0]=75+20*(i+1)+i*30;
b[i][1]=200-5*(i+1)-i*15;
b[i][2]=95+(i+1)*20+i*30;
b[i][3]=300;
}
for(int i=0;i<a;++i)
{setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[i][0],b[i][1],b[i][2],b[i][3],15,1);

}
while(ch!=27)
{ setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);

ch=getch();

if((int)ch==72&&a<=8)
{setcolor(WHITE);
setfillstyle(1,WHITE);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);
a++;


}
else if((int)ch==80&&a>=0)
{
setcolor(BLACK);
setfillstyle(1,BLACK);
bar3d(b[a][0],b[a][1],b[a][2],b[a][3],15,1);
a-- ;
}

if(a>8)a=8;
else if(a<0)a=0;


 if(int(ch)==13){o.chlev(level(a));return;}

}

}





/////////////////////////////////SCREEN//////////////////////////////////////


void screen()
{int  i,j,k,d,d1;



 clean();
  int w=0;
  char ch5;
  while(1)//!(w==3&&ch5==13))
  {

	 cbox(15);
	setcolor(0);
	scr1();

//--------------------------------------------------------------------------------

	//removing the boxes
	setcolor(15);
	for(int i=0;i<=2;++i)
	rectangle(90,110+40*i,320,140+40*i);

		if(w>2)w=0;
		  else if (w<0)w=2;


		setcolor(2);
		rectangle(90,110+40*w,320,140+40*w);

				ch5=getch();

		if((int)ch5==80)w++;
			else if((int)ch5==72)w--;

	  if((int)ch5==80||(int)ch5==72)
		 {
			sound(2300);
			delay(20);
			nosound();

		 }
 //////////////////////////////////////////////////////////////////////////////
 if(int (ch5)==13&&w==0){cleardevice();
 cout<<"This is an interesting snake game. The objective of the game is to eat as many  frogs as possible which appear as coloured dots on the screen, eating frogs     increases the score . Use  arrow keys to control the snake.  Game ends if the snake eats itself or collides with the maze. To exit press esc. To save the game press y after pressing esc. To pause press   any key.";
getch(); cleardevice();}

 else if(int (ch5)==13&&w==1)
  {
	  cleardevice();
	  int s=0;

  for(;;)
  {
	 cbox(15);
	 setcolor(0);
	  scr2();
	//removing the boxes
	setcolor(15);
	for(int i=0;i<=2;++i)
	rectangle(90,110+40*i,320,140+40*i);


		if(s>2)s=0;
		  else if (s<0)s=2;


		setcolor(2);
		rectangle(90,110+40*s,320,140+40*s);

			 char 	ch5=getch();

		if((int)ch5==80)s++;
			else if((int)ch5==72)s--;

	  if((int)ch5==80||(int)ch5==72)
		 {
			sound(2300);
			delay(20);
			nosound();

		 }

 //////////////////////////////////////////////////////////////////////////////
 if(int (ch5)==13&&s==0)
 {cleardevice();
 int y=0;
for(;;)
{ cbox(15);
	setcolor(0);

scr3();

	//removing the boxes
	setcolor(15);
	for(int i=0;i<=1;++i)
	rectangle(90,110+40*i,320,140+40*i);


		if(y>1)y=0;
		  else if (y<0)y=1;


		setcolor(2);
		rectangle(90,110+40*y,320,140+40*y);

			 char 	ch5=getch();

		if((int)ch5==80)y++;
			else if((int)ch5==72)y--;

	  if((int)ch5==80||(int)ch5==72)
		 {
			sound(2300);
			delay(20);
			nosound();

		 }

 if(int (ch5)==13&&y==0){cleardevice();
 int z=0;
 while(1){
	 cbox(15);
	setcolor(0);
 scr4();


//--------------------------------------------------------------------------------

	//removing the boxes
	setcolor(15);
	for(int i=0;i<=1;++i)
	rectangle(90,110+40*i,320,140+40*i);


		if(z>1)z=0;
		  else if (z<0)z=1;


		setcolor(2);
		rectangle(90,110+40*z,320,140+40*z);

			 char 	ch5=getch();

		if((int)ch5==80)z++;
			else if((int)ch5==72)z--;

	  if((int)ch5==80||(int)ch5==72)
		 {
			sound(2300);
			delay(20);
			nosound();

		 }
 //////////////////////////////////////////////////////////////////////////////
 if(int (ch5)==13&&z==0)
 {cleardevice();
			int sd=getcolor();
			play sp;o=sp;
				setcolor(sd);
 rectangle(465,442,620,21);
rectangle(464,443,621,20);
rectangle(463,444,622,19);
rectangle(9,442,451,21);
rectangle(8,443,452,20);
rectangle(7,444,453,19);
o.game();
};



 if(int (ch5)==13&&z==1){cleardevice();break;}
 }}



 if(int (ch5)==13&&y==1)
 {cleardevice();
 break;
 }
 }

  }


 if(int (ch5)==13&&s==1){cleardevice();
 cout<<"enter the file to be opened";
 char ghas[40];
 gets(ghas);
 strcat(ghas,".dat");
ifstream f2(ghas,ios::binary);
f2.read((char*)&o,sizeof(o));f2.close(); g=1;
		/////////////////////////////////////////////

		cleardevice();
 rectangle(465,442,620,21);
rectangle(464,443,621,20);
rectangle(463,444,622,19);
rectangle(9,442,451,21);
rectangle(8,443,452,20);
rectangle(7,444,453,19);
o.game();
		/////////////////////////////////////////////

		};
 //
 if(int (ch5)==13&&s==2){cleardevice();break;}
  }
 }

  else if((int)ch5==13&&w==2)exit(0);
 }

		 }







//*******************************************************************************************************
 play::play()
  {   	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

		for(i=1;i<7;i++)
			c=4+100+(i*7);b=221;
			draw(c,b);

		i=0;

			for(j=53+100;j>=4+100;j=j-7)
			{
				m[i].posx=j;
				m[i].posy=221;
				i++;
			}
	 t=50;
	size=7;
	fc=0;
	maze=0;
	sc=0;

  }








int play::game()
 {         if(g==0){
			dmaze();


			d=77;
			d1=77;


		   }
		  g=0;

	frog(maze);

	do
	{    if(kbhit()){d=getch();  }
		  if(fc)
			 {
					frog(maze);
					update(sc);
					sc+=5;
					fc=0;
			 }

		if(d==27){
		outtextxy(23,45,"do you want to save game or not.(y/n)" );
		char d2=getch();
		if(d2=='y'||d2=='Y')
		{cleardevice();cout<<"enter file name"; char str[40];
		gets(str);
		strcat(str,".dat"); d=d1;
		ofstream f1(str,ios::binary);
		f1.write((char*)&o,sizeof(o));
		f1.close();
		play ksp;
		o=ksp;
		}



		return 0;}


		switch (d)
	  {
		  case 77: if(d1==75)
					  {
						  d=75;
						  continue;
					  }

					 delay(t);
					 m[0].posx+=7;

						if(err(m,size,maze))
						{
							 setcolor(12);

							 outtextxy(23,300,ptr);

							 setcolor(15);
							 delay(1000);
							 return 0;

						}


				draw(m[0].posx,m[0].posy);

			  if(m[0].posx==fx&&m[0].posy==fy)
				 {
					 size++;

					 fc=1;
				 }

				else
					{
							draw(m[size-1].posx,m[size-1].posy,0);
							 fc=0;
					}


			for(k=size-1;k>=1;k--)

			m[k]=m[k-1];
			d1=d;

			break;


case 72:
	if(d1==80){
					d=80;
					continue;
				 }

 {
	  delay(t);
	  m[0].posy-=7;

	if(err(m,size,maze))
	 {
		setcolor(12);
		outtextxy(23,300,ptr);

	  setcolor(15);
	  delay(1000);
	  return 0;


	 }
 draw(m[0].posx,m[0].posy);

 if(m[0].posx==fx&&m[0].posy==fy)
 {size++;fc=1;}
 else
 {draw(m[size-1].posx,m[size-1].posy,0);
 fc=0;}
 for(k=size-1;k>=1;k--)
 m[k]=m[k-1];
 d1=d;} break;

case 80:if(d1==72){d=72;continue;}
{
 delay(t);  m[0].posy+=7;
 if(err(m,size,maze))
  {setcolor(12);
 ;
  outtextxy(23,300,ptr);


  setcolor(15);delay(1000);return 0;}
 draw(m[0].posx,m[0].posy);

 if(m[0].posx==fx&&m[0].posy==fy)
{ size++;  fc=1;}
 else
{ draw(m[size-1].posx,m[size-1].posy,0);
fc=0;}
 for(k=size-1;k>=1;k--)
 m[k]=m[k-1];
 }       d1=d;
break;
case 75:   if(d1==77){d=77;continue;}

 {
 delay(t);
 m[0].posx-=7;
 if(err(m,size,maze))
  {setcolor(12);

  outtextxy(23,300,ptr);

  setcolor(15); delay(1000);return 0;}
 draw(m[0].posx,m[0].posy);

 if(m[0].posx==fx&&m[0].posy==fy)
 {size++;fc=1;}
 else
 {draw(m[size-1].posx,m[size-1].posy,0);
 fc=0;}
 for(k=size-1;k>=1;k--)
 m[k]=m[k-1]; }d1=d;
	}

 display(sc);

 } while(1);
 }
  int aprdm ()
{
int r[2][4][2][4],q=0;  int a[4];
for(int i=0;i<2;i++)
for(int j=0;j<4;j++)
for(int k=0;k<2;k++)
for(int l=0;l<4;l++)
{r[i][j][k][l]=q;
q++;}
r[1][3][1][3]=45;
r[1][3][1][2]=26;
r[1][3][1][1]=28;
r[1][3][1][0]=16;
r[1][3][0][3]=1;
a[0]=random(2);
a[1]=random(4);
a[2]=random(2);
a[3]=random(4);

return r[a[0]][a[1]][a[2]][a[3]];

}
void draw (int &x,int &y,int c,int s)
{setcolor (c);
if(x==454) x=13;
if(x==6) x=447;
if(y==445) y=25;
if(y==18) y=438;
//rectangle(x-3,y-2,x+3,y+2);
circle(x,y,2);
setfillstyle(s,c);
floodfill(x,y,c);
setcolor (15);
};
	  void play:: frog(int maz=2)
{  int x,y, a,b,c=0,d=0;
do
{  c=0;d=0;
x=aprdm();
y=aprdm();
a=13+(x*7);
b=25+(y*7);

for( i=0;i<=size+1;i++)
if(a==m[i].posx)c++;
for( i=0;i<=size+1;i++)
if(b==m[i].posy)d++;

if(maz==1)
for(int i=0;i<=24;i++)
{if(a==13+(7*31)||a==13+(7*31)||a==13+14+(7*i)||a==13+14+(7*i)+(7*35))c++;
 if(b==25+14+(7*i)||b==25+(7*34)+(7*i)||b==25+(7*30)||b==25+(7*30))d++;
 }

else if(maz==2)
{
for( i=0;i<64;i++)
if(((13+(7*i)==a||13+(7*i)==a)&&(b==438||b==25)))c++;
for( i=0;i<60;i++)
if(((13==a||a==447)&&(b==25+(7*i)||b==438-(7*i))))d++;

}
else if(maz==4)
for( i=0;i<32;i++)
{
if(a==13+77||a==448-78)c++;
if(b==438-98-(7*i)||b==25+98+(7*i))d++;
 }
else if(maz==3)
for( i=0;i<35;i++)
{if(a==13+7*14+(7*i)||a==13+7*14+(7*i))c++;
if(b==25+70||b==438-70)d++;
}

  }while((c&&d));
 fx=a;fy=b;

draw(a,b,4);

}


int play:: err(mouth m[500],int h,int maz=2)
{int ct=0;
for(i=1;i<h;i++)
if(m[0].posx==m[i].posx&&m[0].posy==m[i].posy) ct++;


///////////////////////////maze1/////////////////////////////
if(maz==1)
{for(int i=0;i<24;i++)
{if(13+(7*31)==m[0].posx&&m[0].posy==25+14+(7*i))ct++;
if(13+(7*31)==m[0].posx&&m[0].posy==25+(7*34)+(7*i))ct++;
if(m[0].posx==13+14+(7*i)&&m[0].posy==25+(7*30))ct++;
if(m[0].posx==13+14+(7*i)+(7*35)&&m[0].posy==25+(7*30))ct++;
		 } }
/////////////////////////////maze3////////////////////////////
else if(maz==3)
for( i=0;i<35;i++)
{if(13+7*14+(7*i)==m[0].posx&&m[0].posy==25+70)ct++;
if(13+7*14+(7*i)==m[0].posx&&m[0].posy==438-70)ct++;
}
/////////////////////////////maze4/////////////////////
else if(maz==4)
for( i=0;i<32;i++)
{
if(m[0].posx==13+77&&m[0].posy==25+98+(7*i))ct++;
if(m[0].posx==448-78&&m[0].posy==438-98-(7*i));
 }
///////////////////////////maze2//////////////////////////////
else if(maz==2)
{for( i=0;i<64;i++)
{if((13+(7*i)==m[0].posx&&m[0].posy==25))ct++;
if((13+(7*i)==m[0].posx&&m[0].posy==438))ct++;
}
for( i=0;i<60;i++)
{
if((13==m[0].posx&&m[0].posy==25+(7*i)))ct++;
if((447==m[0].posx&&m[0].posy==438-(7*i)))ct++;
 }

}





/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////



 if(ct)return 1;
 else return 0;}



void scr1()
{
  settextstyle(0,0,8);
	const char s1[]={"SNAKE"},s2[]={"    INSTRUCTIONS  "};
	const char s3[]={"    PLAY  "},s5[]={"    EXIT "};
	outtextxy(85,360,s1);

	moveto(100,110);
	format(1,0,3);
	;
	outtext(s2);


	moveto(100,150);
	outtext(s3);


	moveto(100,190);
	outtext(s5);






}

void scr2()
{ const char s1[]={"SNAKE"},s2[]={"     NEW GAME"};
	const char s3[]={"     LOAD GAME "},s4[]={"     BACK  "};

	settextstyle(0,0,8);
	outtextxy(85,360,s1);


	moveto(100,110);

	format(1,0,3);
	outtext(s2);


	moveto(100,150);
	outtext(s3);


	moveto(100,190);
	outtext(s4);


}

void scr3()
		{
			  const char s1[]={"SNAKE"},s2[]={"     ADVENTURE"};
	const char s4[]={"     BACK  "};

	settextstyle(0,0,8);
	outtextxy(85,360,s1);


	moveto(100,110);

	format(1,0,3);
	outtext(s2);


	moveto(100,150);
	outtext(s4);



		}

void scr4()
{
  settextstyle(0,0,8);
	const char s1[]={"SNAKE"},s2[]={"    PLAY  "};
	const char s5[]={"    BACK "};
	outtextxy(85,360,s1);

	moveto(100,110);
	format(1,0,3);
	;
	outtext(s2);


	moveto(100,150);
	outtext(s5);


}