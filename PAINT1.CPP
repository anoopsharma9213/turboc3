int help=0;
char d1[25];
#include <fstream.h>
#include  <0paint.h>
#include<0figures.h>
#include   <0sec4.h>
#include   <0tool.h>
#include<0clipart.h>
#include   <0save.h>
#include<0ins.h>
#include<0display.h>

	int tool_play[2];
	int mse[2];
void initialise()
{
 //------------------------INITITIATION OF GRAPHICS-------------------------
	int gd=DETECT,gm;   initgraph(&gd,&gm,"c:\\tc\\BGI");
 //------------------------------------------------------------------------

}
void main()
{
	 initialise();
	char  fname[25];
	  strcpy(fname,pb.title);
  moveto(700,700);
 paint_assign();
 screen();
 int ch,b[2],c[4],a[2]={0,0},tool1[2],bkcol[2];
  DetectMouse() ;
  t1=time(NULL);
  position(a);

 while (che!=27)
 {
	 //setbkcolor
	tool1[0]=pb.tool;
	if(kbhit())che=getch();
	bkh++;
	if(bkh>32760){bkh=50;}
 int clk=ButtReleased();
 int c=ButtClicked();

	  WhereMouse(a);

	  pos[0][0]=a[0];pos[0][1]=a[1];

		 if(mode!=2&&mode!=0)
	  if(mode==-5)s4.info(a,clk,c);
	  tool_play[0]=pb.tool;
	  int ctr=show(a[0],a[1],clk);
	  if (help)
	  {

		bkh=1;
		screen();
		position(a);
		s4.info(a,clk,c);
		 restore(1,a);
		help=0;
		setcolor(14);
		 setfillstyle(1,14);
		 floodfill(156,11,12);
		 setcolor(4);
		 star(18,17,0.14);
		 moveto(156,11);
		 char *d;
		 strcpy(d,pb.title);
		 d[strlen(pb.title)-4]='\0';
		 settextstyle(0,0,2);
		 outtext(d);
		 outtext("-PAINT");
		exitb();
		mode=-5;
	  }




	  if(mode==7)
	{

		  {
		 char a1;char *m;
		 if(!strcmp(pb.title,"UNTITLED.dat"))
		  {
	strcpy(m,etr_name());
	strcpy(pb.title,m);
				setcolor(14);
			 setfillstyle(1,14);
			 floodfill(156,11,12);
			 setcolor(4);
			 star(18,17,0.14);
			 moveto(156,11);
			 char *d;
			 strcpy(d,m);
			 d[strlen(m)-4]='\0';
			 settextstyle(0,0,2);
			 outtext(d);
			 outtext("-PAINT");
			exitb();

			}

		 else strcpy(m,pb.title);

		 tool(a,0,0,-5);
		 if(pb.tool==9)write(a,0,-5);
		 char fname[]="saved\\";
		 strcat(fname,pb.title);
	  ofstream f1(fname,ios::binary);
		 settextstyle(8,0,1);
		 setcolor(7);
		 outtextxy(20,438,str1[1]);

		 setcolor(0);
		 outtextxy(20,438,"SAVING....");

		for(int y=60;y<=356;++y)
		  for(int x=17;x<=489;++x)
			{
		  a1=getpixel(x,y);
		  f1.write((char*)&a1,sizeof(a1));
		 if(y==300&x==17)
		  outtextxy(20,438,"SAVING....DONE");

		}

		 if(pb.tool==9)write(a,0,-6);
		tool(a,0,0,-6);
	f1.close();
		  settextstyle(8,0,1);
		setcolor(7);
		outtextxy(20,438,"SAVING....DONE");
	}



	mode=-5;}


	  else if(mode==8)
	 {
		int gg=5;
			restore(gg,a);
			 char as[25];  char a1;
		 strcpy(as,etr_name());
		  char fname[]="saved\\";
		 strcat(fname,as);
		 ifstream f2(fname,ios::binary);
		  delete as;
		  delete fname;
	  if(!f2){  setfillstyle(1,0);
			 floodfill(100,455,10);
			 setcolor(11);
			 settextstyle(8,0,1);
			 outtextxy(35,438,"FILE NOT FOUND ");
			 delay(1300);
		setfillstyle(1,7);
	  floodfill(100,455,10);
			}
	  else
		{   strcpy(pb.title,as);
			 settextstyle(0,0,2);
			 setcolor(4);
			 setfillstyle(1,14);
			 floodfill(156,11,12);
			 setcolor(4);
			 star(18,17,0.14);

			 moveto(156,11);
			 char d[2];
			 strcpy(d,as);
			 d[strlen(as)-4]='\0';
			 outtext(d);
			 outtext("-PAINT");
			 exitb();

		for(int y=60;y<=356;++y)
		{
		for( int x=17;x<=489;++x)
		  {
			  f2.read((char*)&a1,sizeof(a1));
			  putpixel(x,y,a1);
		  }

		setcolor(5);
		if(y<356-2)line(17,y+2,489,y+2);
		}


	 }
	 f2.close();
		mode=-5;
		}
			tool_play[1]=pb.tool;



	  if(mode==9||che==18){int gg=0;restore(gg,a);mode=-5;che=-5;}

	  if(mode==0){ clt=1;
	  pb.art=0;
	  clipart(ctr);

		}

 int t=0;

	  if(pos[0][1]>61&&pos[0][1]<356&&pos[0][0]>17&&pos[0][0]<490-6
	  &&pos[1][1]>61&&pos[1][1]<356&&pos[1][0]>17&&pos[1][0]<490-6)
 {
	  position(a);
		 if(pb.tool==8&&c)
	{    int c=pb.drawing_color;
		  putpixel(a[0],a[1],c);
		  putpixel(a[0]+2,a[1]+3,c);
		  putpixel(a[0]-4,a[1]-5,c);
		  putpixel(a[0]+3,a[1]-2,c);
		  putpixel(a[0]-7,a[1]+6,c);
		  putpixel(a[0]+7,a[1]+6,c);
		  putpixel(a[0]-1,a[1]+8,c);
		  putpixel(a[0]+5,a[1]-2,c);

	 }
	  if(clt)
 { image(a,clk,c);
 t++;
 }

  }
  cursor(a,6);
 if(!t)tool(a,clk,c,tool1[1]);

if(mode==12)
{
  char a[25];
	strcpy(a,etr_name());
	strcpy(d1,"saved\\");
		 strcat(d1,a);
		 gotoxy(25,16);
delete a;
char fname[]="saved\\";
strcat(fname,pb.title);


		if( rename(fname,d1))
		{  setfillstyle(1,0);
			 floodfill(100,455,10);
			 setcolor(11);
			 settextstyle(8,0,1);
			 outtextxy(35,438,"FILE NAME CANNOT NOT BE CHANGED ");
			 delay(1300);
		setfillstyle(1,7);
	  floodfill(100,455,10);
			}
		 else{
			strcpy(pb.title,a);
			  setcolor(14);
			 setfillstyle(1,14);
			 floodfill(156,11,12);
			 setcolor(4);
			 star(18,17,0.14);
			 moveto(156,11);
			 char d[25];
			 strcpy(d,a);
			 d[strlen(a)-4]='\0';
			 settextstyle(0,0,2);
			 outtext(d);
			 outtext("-PAINT");
			 exitb();
				}
mode=-5;
}

write(a,clk,tool1[1]);
pos[1][0]=pos[0][0]; pos[1][1]=pos[0][1];
 mse[1]=mse[0];

tool1[1]=tool1[0];
}



}
