/***********************************************************************
******************** DONE AT 2/1/2003 10:00 PM FRI *********************
************************ BY SUFYAN SALEEM JABR *************************
********************** SUFYAN2001JOJO@YAHOO.COM ************************
***********************************************************************/
#include<stdio.h>//For ffluch(stdin)
#include<dos.h>
#include<conio.h>
#include<bios.h>//For bios key
#include<graphics.h>//For every thing :)
#include<stdlib.h>//For the exit(1)
#include<iostream.h>
int case_counter=0;
int aigo=0;
int eat=0;
int monster_go=0;
int monster_go2=0;
int counter=0;
int x=285;
int y=358;
int xstep=0;
int ystep=0;
int x2=285;
int y2=210;
int xstep2=0;
int ystep2=0;
int x3=285;
int y3=230;
int xstep3=0;
int ystep3=0;
int key=0;
int flag=0;
int raduis=8;
int score=0;
int w1=90,w2=30,w3=477,w4=460;
class shapes
	{
		public :
				int l;
				int r;
				int u;
				int d;
		};

shapes a[38];
class dots
		{
		public :
				int x;
				int y;
				int not_eaten;
				int monster_eaten;
		dots()
			{
			not_eaten=1;
			monster_eaten=0;
			}
		};
class gates
		{
		public :
			int x;
			int y;
		};
gates g[60];
dots d[276];
char solid[8] =
		{
		  0xFF,   /* 10101010  =  Û Û Û Û   */
		  0xFF,   /* 01010101  =   Û Û Û Û  */
		  0xFF,   /* 10101010  =  Û Û Û Û   */
		  0xFF,   /* 11111111  =   Û Û Û Û  */
		  0xFF,   /* 11111111  =  Û Û Û Û   */
		  0xFF,   /* 11111111  =   Û Û Û Û  */
		  0xFF,   /* 11111111  =  Û Û Û Û   */
		  0xFF    /* 11111111  =   Û Û Û Û  */
		};
char sun[8] =
		{
		  0xAA,   /* 10101010  =  Û Û Û Û   */
		  0x55,   /* 01010101  =   Û Û Û Û  */
		  0xAA,   /* 10101010  =  Û Û Û Û   */
		  0x55,   /* 11111111  =   Û Û Û Û  */
		  0xAA,   /* 11111111  =  Û Û Û Û   */
		  0x55,   /* 11111111  =   Û Û Û Û  */
		  0xAA,   /* 11111111  =  Û Û Û Û   */
		  0x55    /* 11111111  =   Û Û Û Û  */
		};
char sun2[8] =
		{
		  0xAA,   /* 10010010  =  Û Û Û Û   */
		  0x55,   /* 01001001  =   Û Û Û Û  */
		  0xAA,   /* 10010010  =  Û Û Û Û   */
		  0x55,   /* 11111111  =   Û Û Û Û  */
		  0xAA,   /* 11111111  =  Û Û Û Û   */
		  0x55,   /* 11111111  =   Û Û Û Û  */
		  0xAA,   /* 11111111  =  Û Û Û Û   */
		  0x55    /* 11111111  =   Û Û Û Û  */
		};
char sun3[8] =
		{
		  0x92,   /* 10101010  =  Û Û Û Û   */
		  0x49,   /* 01010101  =   Û Û Û Û  */
		  0x92,   /* 10010010  =  Û Û Û Û   */
		  0x49,   /* 11111111  =   Û Û Û Û  */
		  0x92,   /* 11111111  =  Û Û Û Û   */
		  0x49,   /* 11111111  =   Û Û Û Û  */
		  0x92,   /* 11111111  =  Û Û Û Û   */
		  0x49    /* 11111111  =   Û Û Û Û  */
		};

char empty[8] = {
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00
		};


void pac(int x,int y,int st)
{
	if(st==1)
	{
		setfillpattern(solid,14);
		setcolor(14);
		circle(x,y,raduis);
		floodfill(x-2,y-2,14);
	}
	if(st==2)
	{
		setfillpattern(solid,12);
		setcolor(12);
		circle(x,y,raduis);
		floodfill(x-2,y-2,12);
	}
	if(st==3)
	{
		setfillpattern(solid,9);
		setcolor(9);
		circle(x,y,raduis);
		floodfill(x-2,y-2,9);
	}

}

void pac2(int x,int y)
{
	setfillpattern(empty,15);
	setcolor(16);
	circle(x,y,raduis);
	floodfill(x-2,y-2,16);
}
int checker1(int st)//,int l,int r,int u,int d)
{
	if(st==1)if(x+xstep-16<w1)return-1;//BORDER
	if(st==2)if(x+xstep+16>w3)return-1;//BORDER
	if(st==3)if(y+ystep+16>w4)return-1;//BORDER
	if(st==4)if(y+ystep-16<w2)return-1;//BORDER
	if(st==5)if(x2+xstep2-16<w1)return-1;//BORDER
	if(st==6)if(x2+xstep2+16>w3)return-1;//BORDER
	if(st==7)if(y2+ystep2+16>w4)return-1;//BORDER
	if(st==8)if(y2+ystep2-16<w2)return-1;//BORDER
	if(st==9)if(x3+xstep3-16<w1)return-1;//BORDER
	if(st==10)if(x3+xstep3+16>w3)return-1;//BORDER
	if(st==11)if(y3+ystep3+16>w4)return-1;//BORDER
	if(st==12)if(y3+ystep3-16<w2)return-1;//BORDER

	for(int i=1;i<37;i++)
	{
		if(st==2)
			if(x+xstep+18>w1+a[i].l && x+xstep+18<w1+a[i].l+18 && y+ystep>w2+a[i].u-10 && y+ystep<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==1)
			if(x+xstep-18<w1+a[i].r && x+xstep-18>w1+a[i].r-18 && y+ystep>w2+a[i].u-10 && y+ystep<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==3)
			if(y+ystep+18>w2+a[i].u && y+ystep+18<w2+a[i].u+18 && x+xstep>w1+a[i].l-10 && x+xstep<w1+a[i].r+10)
				return-1;//SHAPES
		if(st==4)
			if(y+ystep-18<w2+a[i].d && y+ystep-18>w2+a[i].d-18 && x+xstep>w1+a[i].l-10 && x+xstep<w1+a[i].r+10)
				return-1;//SHAPES
	}
	for(i=1;i<37;i++)
	{
		if(st==5)
			if(x2+xstep2-18<w1+a[i].r && x2+xstep2-18>w1+a[i].r-18 && y2+ystep2>w2+a[i].u-10 && y2+ystep2<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==6)
			if(x2+xstep2+18>w1+a[i].l && x2+xstep2+18<w1+a[i].l+18 && y2+ystep2>w2+a[i].u-10 && y2+ystep2<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==7)
			if(y2+ystep2+18>w2+a[i].u && y2+ystep2+18<w2+a[i].u+18 && x2+xstep2>w1+a[i].l-10 && x2+xstep2<w1+a[i].r+10)
				return-1;//SHAPES
		if(st==8)
			if(y2+ystep2-18<w2+a[i].d && y2+ystep2-18>w2+a[i].d-18 && x2+xstep2>w1+a[i].l-10 && x2+xstep2<w1+a[i].r+10)
				return-1;//SHAPES
	}
	for(i=1;i<37;i++)
	{
		if(st==9)
			if(x3+xstep3-18<w1+a[i].r && x3+xstep3-18>w1+a[i].r-18 && y3+ystep3>w2+a[i].u-10 && y3+ystep3<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==10)
			if(x3+xstep3+18>w1+a[i].l && x3+xstep3+18<w1+a[i].l+18 && y3+ystep3>w2+a[i].u-10 && y3+ystep3<w2+a[i].d+10)
				return-1;//SHAPES
		if(st==11)
			if(y3+ystep3+18>w2+a[i].u && y3+ystep3+18<w2+a[i].u+18 && x3+xstep3>w1+a[i].l-10 && x3+xstep3<w1+a[i].r+10)
				return-1;//SHAPES
		if(st==12)
			if(y3+ystep3-18<w2+a[i].d && y3+ystep3-18>w2+a[i].d-18 && x3+xstep3>w1+a[i].l-10 && x3+xstep3<w1+a[i].r+10)
				return-1;//SHAPES
	}

	return 1;
}
int mon_check(int st)
{
if(st==5)
if(x2+xstep2-16<x3+xstep3 && y2+ystep2>y3+ystep3-10 && y2+ystep2<y3+ystep3+10)
return-1;//SHAPES

if(st==6)
if(x2+xstep2+16>x3+xstep3 && y2+ystep2>y3+ystep3-10 && y2+ystep2<y3+ystep3+10)
return-1;//SHAPES

if(st==7)
if(y2+ystep2+16>y3+ystep3 && x2+xstep2>x3+xstep3-10 && x2+xstep2<x3+xstep3+10)
return-1;//SHAPES

if(st==8)
if(y2+ystep2-16<y3+ystep3 && x2+xstep2>x3+xstep3-10 && x2+xstep2<x3+xstep3+10)
return-1;//SHAPES

if(st==9)
if(x3+xstep3-16<x2+xstep2 && y3+ystep3>y2+ystep2-10 && y3+ystep3<y2+ystep2+10)
return-1;//SHAPES

if(st==10)
if(x3+xstep3+16>x2+xstep2 && y3+ystep3>y2+ystep2-10 && y3+ystep3<y2+ystep2+10)
return-1;//SHAPES

if(st==11)
if(y3+ystep3+16>y2+ystep2 && x3+xstep3>x2+xstep2-10 && x3+xstep3<x2+xstep2+10)
return-1;//SHAPES

if(st==12)
if(y3+ystep3-16<y2+ystep2 && x3+xstep3>x2+xstep2-10 && x3+xstep3<x2+xstep2+10)return-1;//SHAPES
return 1;

}
void makeshape(void)
{
	for(int i=0;i<35;i++)
	{
		a[i].r=0;
		a[i].l=0;
		a[i].u=0;
		a[i].d=0;
	}

	a[1].l=155;//AREA 1          2 3 4 5 6
	a[1].u=167;//AREA 1         7 11 9 13 8
	a[1].r=235;//AREA 1    	   33 12 10 14 34
	a[1].d=220;//AREA 1              1
//                                 35 15 17 16 36
	a[2].l=28;//AREA 2         21 19 18 20 23
	a[2].u=25;//AREA 2         27 22 25 24 28
	a[2].r=77;//AREA 2         31 29 26 30 32
	a[2].d=43;//AREA 2

	a[3].l=107;//AREA 3
	a[3].u=25;//AREA 3
	a[3].r=155;//AREA 3
	a[3].d=43;//AREA 3

	a[4].l=185;//AREA 4
	a[4].u=0;//AREA 4
	a[4].r=205;//AREA 4
	a[4].d=43;//AREA 4

	a[5].l=233;//AREA 5
	a[5].u=25;//AREA 5
	a[5].r=280;//AREA 5
	a[5].d=43;//AREA 5

	a[6].l=310;//AREA 6
	a[6].u=25;//AREA 6
	a[6].r=355;//AREA 6
	a[6].d=43;//AREA 6

	a[7].l=28;//AREA 7
	a[7].u=72;//AREA 7
	a[7].r=77;//AREA 7
	a[7].d=92;//AREA 7

	a[8].l=310;//AREA 8
	a[8].u=72;//AREA 8
	a[8].r=357;//AREA 8
	a[8].d=92;//AREA 8

	a[9].l=155;//AREA 9
	a[9].u=72;//AREA 9
	a[9].r=235;//AREA 9
	a[9].d=87;//AREA 9

	a[10].l=185;//AREA 10
	a[10].u=87;//AREA 10
	a[10].r=204;//AREA 10
	a[10].d=140;//AREA 10

	a[11].l=107;//AREA 11
	a[11].u=72;//AREA 11
	a[11].r=125;//AREA 11
	a[11].d=180;//AREA 11

	a[12].l=125;//AREA 12
	a[12].u=120;//AREA 12
	a[12].r=155;//AREA 12
	a[12].d=140;//AREA 12

	a[13].l=265;//AREA 13
	a[13].u=72;//AREA 13
	a[13].r=280;//AREA 13
	a[13].d=180;//AREA 13

	a[14].l=233;//AREA 14
	a[14].u=120;//AREA 14
	a[14].r=265;//AREA 14
	a[14].d=140;//AREA 14

	a[15].l=107;//AREA 15
	a[15].u=210;//AREA 15
	a[15].r=125;//AREA 15
	a[15].d=265;//AREA 15

	a[16].l=265;//AREA 16
	a[16].u=210;//AREA 16
	a[16].r=280;//AREA 16
	a[16].d=265;//AREA 16

	a[17].l=155;//AREA 17
	a[17].u=250;//AREA 17
	a[17].r=235;//AREA 17
	a[17].d=265;//AREA 17

	a[18].l=185;//AREA 18
	a[18].u=265;//AREA 18
	a[18].r=205;//AREA 18
	a[18].d=315;//AREA 18

	a[19].l=105;//AREA 19
	a[19].u=297;//AREA 19
	a[19].r=155;//AREA 19
	a[19].d=315;//AREA 19

	a[20].l=233;//AREA 20
	a[20].u=297;//AREA 20
	a[20].r=280;//AREA 20
	a[20].d=315;//AREA 20

	a[21].l=30;// AREA 21
	a[21].u=297;//AREA 21
	a[21].r=77;// AREA 21
	a[21].d=315;//AREA 21

	a[22].l=62;// AREA 22
	a[22].u=315;//AREA 22
	a[22].r=77;// AREA 22
	a[22].d=355;//AREA 22

	a[23].l=310;//AREA 23
	a[23].u=297;//AREA 23
	a[23].r=357;//AREA 23
	a[23].d=315;//AREA 23

	a[24].l=310;//AREA 24
	a[24].u=315;//AREA 24
	a[24].r=325;//AREA 24
	a[24].d=355;//AREA 24

	a[25].l=155;//AREA 25
	a[25].u=345;//AREA 25
	a[25].r=235;//AREA 25
	a[25].d=355;//AREA 25

	a[26].l=185;//AREA 26
	a[26].u=355;//AREA 26
	a[26].r=205;//AREA 26
	a[26].d=400;//AREA 26

	a[27].l=0;//  AREA 27
	a[27].u=345;//AREA 27
	a[27].r=30;// AREA 27
	a[27].d=355;//AREA 27

	a[28].l=357;//AREA 28
	a[28].u=345;//AREA 28
	a[28].r=387;//AREA 28
	a[28].d=355;//AREA 28

	a[29].l=107;//AREA 29
	a[29].u=345;//AREA 29
	a[29].r=125;//AREA 29
	a[29].d=385;//AREA 29

	a[30].l=265;//AREA 30
	a[30].u=345;//AREA 30
	a[30].r=280;//AREA 30
	a[30].d=385;//AREA 30

	a[31].l=30;// AREA 31
	a[31].u=385;//AREA 31
	a[31].r=155;//AREA 31
	a[31].d=400;//AREA 31

	a[32].l=235;//AREA 32
	a[32].u=385;//AREA 32
	a[32].r=357;//AREA 32
	a[32].d=400;//AREA 32

	a[33].l=0;//  AREA 33
	a[33].u=123;//AREA 33
	a[33].r=77;// AREA 33
	a[33].d=265;//AREA 33

	a[34].l=310;//AREA 34
	a[34].u=123;//AREA 34
	a[34].r=387;//AREA 34
	a[34].d=265;//AREA 34

/*	a[35].l=0;//  AREA 35
	a[35].u=123;//AREA 35
	a[35].r=77;// AREA 35
	a[35].d=265;//AREA 35

	a[36].l=310;//AREA 36
	a[36].u=210;//AREA 36
	a[36].r=387;//AREA 36
	a[36].d=265;//AREA 36*/
}
void erase(int x,int y)
{
	setcolor(16);
	rectangle(x-1,y-1,x+1,y+1);
	rectangle(x-2,y-2,x+2,y+2);
}
void redraw()
{
for(int i=0;i<276;i++)
if(d[i].monster_eaten==1 && d[i].not_eaten==1)
	{
	setcolor(14);
	rectangle(d[i].x-1,d[i].y-1,d[i].x+1,d[i].y+1);
	setcolor(16);
	rectangle(d[i].x-3,d[i].y-3,d[i].x+3,d[i].y+3);
	rectangle(d[i].x-4,d[i].y-4,d[i].x+4,d[i].y+4);
	setcolor(12);
	rectangle(d[i].x-1,d[i].y-1,d[i].x+1,d[i].y+1);
	}
}

void is_eaten(void)
{
for(int i=0;i<276;i++)
	{
		if((d[i].x>x+xstep-8 && d[i].x<x+xstep+8)  &&  (d[i].y>y+ystep-8 && d[i].y<y+ystep+8 && d[i].not_eaten==1 ))
		{
			eat++;
			sound(2900);//5500);
			delay(10);
			nosound();
			d[i].not_eaten=0;
//			d[i].monster_eaten=1;
			if(d[i].monster_eaten==0)score+=10;
			else score+=2;
			erase(d[i].x,d[i].y);
		}
	}
for(i=0;i<276;i++)
	{
		if((d[i].x>x2+xstep2-8 && d[i].x<x2+xstep2+8)  &&  (d[i].y>y2+ystep2-8 && d[i].y<y2+ystep2+8 && d[i].not_eaten==1 ))
		{
			d[i].monster_eaten=1;
		}
	}
}

void drawdots(void)
{
int fill=9;
int i;
	for(i=0;i<276;i++)
	{
	       if(d[i].x==0)
		{
			counter++;
			continue;
		}
		if(i!=184 && i!=185 && i!=186 && i!=187 )
			rectangle(d[i].x-1,d[i].y-1,d[i].x+1,d[i].y+1);
		 else
			{
			setcolor(12);
			setfillpattern(solid,12);
			circle(d[i].x,d[i].y,3);
			setcolor(14);
			floodfill(d[i].x,d[i].y,12);
			setfillpattern(sun,fill);
			continue;
			}

	}

}
void border(void)
{
	int fill=9;
	int border=14;
	setcolor(border);
	setfillpattern(sun,fill);
	for(int i=1;i<37;i++)
	{
		if(i==34 || i==33 || i==35 || i==36)
			setcolor(border);
		else
			setcolor(border);

		rectangle(w1+a[i].l,w2+a[i].u,w1+a[i].r,w2+a[i].d);
		if(i==34 || i==33 || i==35|| i==36)
			continue;
		if(i==1)
			continue;
		floodfill(w1+a[i].l+4,w2+a[i].u+4,border);
	}
	setfillpattern(solid,fill);
	rectangle(w1,w2,w3,w4);//frame
//	setcolor(16);
  //	line(w1,211,w1,239);//Left Gate
    //	line(w3,211,w3,239);//Right Gate
      //	setcolor(16);
    //	line(270,203,300,203);
	setcolor(14);
	drawdots();
}

void setdot(void)
{
	for(int i=0;i<266;i++)
	{//CLEAR ARRAY
		d[i].x=0;
		d[i].y=0;
	}
	for(i=0;i<13;i++)//ROWS 1,11 using one seprator
	{
		if(i==6)continue;
		d[i].y=43;//	     ROW 1
		d[i].x=105+i*13;//   ROW 1
		if(i!=0 && i!=1)
		{
		d[i+28].y=313;//     ROW 11
		d[i+28].x=101+i*13;//ROW 11
		}
		if(i==12)
			continue;
		if(i!=6 && i!=5 && i!=11)
		{
		d[i+14].y=43;//      ROW 1
		d[i+14].x=310+i*13;//ROW 1
		}
		if(i==11)continue;
		d[i+42].y=313;//     ROW 11
		d[i+42].x=310+i*13;//ROW 11

	}

	for(i=0;i<29;i++)//ROWS 3,16 using no seprator
	{
		if(i==0)
			continue;
		if(i<=24)
		{
			d[i+89].y=445;//     ROW 16
			d[i+89].x=110+i*14;//ROW 16
		}
		if(i==6 || i==7 || i==23 || i==24)
			continue;
		d[i+56].y=86;//      ROW 3
		d[i+56].x=109+i*12;//ROW 3
	}
	for(i=0;i<24;i++)
	{       if(i==21)continue;
		d[i+119].y=43+i*15;//     LINE 4
		d[i+119].x=385;//	  LINE 4
		d[i+146].y=43+i*15;//     LINE 4
		d[i+146].x=182;// 	  LINE 4
	}
	for(i=0;i<6;i++)//lines
	{
		d[i+172].y=43+i*14;
		d[i+172].x=105;
		d[i+178].y=43+i*14;
		d[i+178].x=462;
	}

	for(i=0;i<6;i++)//LINE 1 CONT..
	{
	d[i+222].x=310+i*15;
	d[i+222].y=358;//180.358
	d[i+216].x=182+i*15;
	d[i+216].y=358;//180.358
	d[i+210].x=386+i*15;
	d[i+210].y=401;//383.400
	d[i+204].x=107+i*15;
	d[i+204].y=401;//103.400
	if(i>=4)continue;
	d[i+195].x=125+i*14;
	d[i+195].y=137;//103.137
	d[i+199].x=405+i*14;
	d[i+199].y=137;//103.137
	if(i>=3)continue;
	d[i+188].y=358-i*14;
	d[i+188].x=105;//105.358
	d[i+191].y=358-i*14;
	d[i+191].x=462;//462.358
	d[i+232].y=401-i*14;
	d[i+232].x=340;//341.400
	d[i+235].y=401-i*14;
	d[i+235].x=228;//229.400
	d[i+238].y=358+i*14;
	d[i+238].x=431;//432.358
	d[i+241].y=358+i*14;
	d[i+241].x=137;//138.358
	d[i+244].y=445-i*14;
	d[i+244].x=107;//103.449
	d[i+247].y=445-i*14;
	d[i+247].x=462;//467.449
	d[i+251].y=402+i*14;
	d[i+251].x=264;//264.400
	d[i+254].y=402+i*15;
	d[i+254].x=306;//306.400
	d[i+265].y=134-i*15;
	d[i+265].x=229;//306.400	  //229.134
	d[i+268].y=134-i*15;
	d[i+268].x=340;//306.400	  //229.134
	if(i>=2)continue;
	d[i+228].y=327+i*15;
	d[i+228].x=310;//306.309
	d[i+230].y=327+i*15;
	d[i+230].x=257;//264.309
	d[i+261].y=58+i*13;
	d[i+261].x=310;//SINGLE
	d[i+263].y=58+i*13;
	d[i+263].x=261;//SINGLE
	d[i+271].y=134;
	d[i+271].x=258-i*15;//264.134
	d[i+273].y=134;
	d[i+273].x=310+i*15;//264.134
	}
	d[257].y=402;
	d[257].x=322;//SINGLE
	d[258].y=402;
	d[258].x=245;//SINGLE
	d[259].y=358;
	d[259].x=445;//SINGLE
	d[260].y=358;
	d[260].x=122;//SINGLE
	d[184].x=105;//BONUS
	d[184].y=134;//BONUS
	d[185].x=462;//BONUS
	d[185].y=134;//BONUS
	d[186].x=462;//BONUS
	d[186].y=313;//BONUS
	d[187].x=105;//BONUS
	d[187].y=313;//BONUS
}
void ai2(void)
{
if(monster_go2==0)
	{
	y3=260;
	monster_go=1;
	}
	     if(x3+xstep3>x+xstep && checker1(9)!=-1 && mon_check(9)) xstep3-=4;
	else if(x3+xstep3<x+xstep && checker1(10)!=-1 && mon_check(10))xstep3+=4;
	else if(y3+ystep3<y+ystep && checker1(11)!=-1 && mon_check(11))ystep3+=4;
	else if(y3+ystep3>y+ystep && checker1(12)!=-1 && mon_check(12))ystep3-=4;
}
void ai(void)
{//l,r,d,u
//cout<<x2+xstep2<<" , "<<y2+ystep2<<" \r";//<<" , "<<checker1(6)<<" \r";
//cout<<case_counter<<" , "<<aigo<<" \r";
//cout<<"L "<<checker1(5)<<",R: "<<checker1(6)<<",D: "<<checker1(7)<<",U: "<<checker1(8)<<" \r";
if(monster_go==0)
	{
	y2=183;
	monster_go=1;
	}
	if(case_counter==0)
	{
		     if(x2+xstep2>x+xstep && checker1(5)!=-1 && aigo!=2 && mon_check(5)){aigo=1;}
		else if(x2+xstep2<x+xstep && checker1(6)!=-1 && aigo!=1 && mon_check(6)){aigo=2;}
		else if(y2+ystep2<y+ystep && checker1(7)!=-1 && aigo!=4 && mon_check(7)){aigo=3;}
		else if(y2+ystep2>y+ystep && checker1(8)!=-1 && aigo!=3 && mon_check(8)){aigo=4;}
		else if(checker1(5)!=-1 && aigo!=2 && mon_check(5)){aigo=1;}//LEFT
		else if(checker1(6)!=-1 && aigo!=1 && mon_check(6)){aigo=2;}//RIGHT
		else if(checker1(7)!=-1 && aigo!=4 && mon_check(7)){aigo=3;}//DOWN
		else if(checker1(8)!=-1 && aigo!=3 && mon_check(8)){aigo=4;}//UP
//		else if(x2+xstep==
		case_counter=6;
	}
	else
	{
	 case_counter--;
	 if(aigo==1 && checker1(5)!=-1 && mon_check(5))xstep2-=4;
	 if(aigo==2 && checker1(6)!=-1 && mon_check(6))xstep2+=4;
	 if(aigo==3 && checker1(7)!=-1 && mon_check(7))ystep2+=4;
	 if(aigo==4 && checker1(8)!=-1 && mon_check(8))ystep2-=4;

	}
}
void main()
{
	int gdriver =DETECT, gmode;
	initgraph(&gdriver,&gmode,"");
	makeshape();
	setdot();
	outtextxy(130,20,"Sufyan Jabr, sufyan2001jojo@yahoo.com");
	border();
	for(;;)
	{
	      for(int i=0;i<150;i++)
	      {
		      //if(bioskey(1) != 0)break;
		      pac(x+xstep,y+ystep,1);
		      pac(x2+xstep2,y2+ystep2,2);
		      pac(x3+xstep3,y3+ystep3,3);
	      }
//cout<<x+xstep-18<<","<<y+ystep-18<<" \r";
//cout<<x+xstep<<" ,"<<y+ystep<<" \r";
//cout<<x+xstep<<" ,"<<x+xstep2<<" \r";
//for(int p=0;p<270;p++)  cout<<d[p].not_is_eaten;
	      cout<<eat<<" From: 235 "<<"\r";
	      //delay(8);
	      if(bioskey(1) != 0)
	      {//open 2
			key=bioskey(0);
			if(key==6512)
				{//open 3
					key=0;
					while(1)
					{//open 4
						if(bioskey(1) != 0)
						key=bioskey(0);
						outtextxy(350,470,"Game Pused: press 'P' to continue");
						if(key==6512)break;
					}//close 4
					setcolor(16);
					outtextxy(350,470,"Game Pused: press 'P' to continue");
					setcolor(14);
				}//close 3
			if(key==20480 && checker1(3)!=-1)
				flag=3;//Dowm 1
			if(key==18432 && checker1(4)!=-1)
				flag=4;//UP 1
			if(key==19712 && checker1(2)!=-1)
				flag=1;//Right 1
			if(key==19200 && checker1(1)!=-1)
				flag=2;//Left 1
			if(key==283)
			{getch();exit(1);
			}
		}//close 2
		if(eat==235)
		{
		cout<<"LEVEL COMPLETE";
		getch();
		getch();
		exit(1);
		}
		pac2(x+xstep,y+ystep);
		pac2(x2+xstep2,y2+ystep2);
		pac2(x3+xstep3,y3+ystep3);
		if (flag==1 && checker1(2)!=-1)
			xstep+=7;
		if (flag==2 && checker1(1)!=-1)
			xstep-=7;
		if (flag==3 && checker1(3)!=-1)
			ystep+=7;
		if (flag==4 && checker1(4)!=-1)
			ystep-=7;
		if(eat>30)ai();
		if(eat>60)ai2();
			is_eaten();
			redraw();
	}
}