#include "iisadm.c"
#include "iiscrd.c"
#include "iiscust.c"



void start();
void basic();
void login();
/*void cust();
void adm();
void crdit();*/
void quit();

/*void main()
{
 start();
} */


void start()
{
 int gd=DETECT,gm,i,j;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(80,30,"Sharda");
 outtextxy(75,35,"_____");
 outtextxy(310,30,"University");
 outtextxy(305,35,"_______");
 settextstyle(7,0,5);
 outtextxy(230,220,"Presents");
 settextstyle(3,0,1);
 outtextxy(293,400,"Loading");
 setcolor(4);
 rectangle(250,440,400,445);
 for(i=0,j=0;i<149;i++)
 {setcolor(14);
  if(i%2==0)
  {outtextxy(360+j,400,".");
   j+=4;
  }
  rectangle(251,441,251+i,444);
  delay(40);
  if(j==24)
  {setcolor(0);
   for(j=0;j<24;j+=4)
    outtextxy(360+j,400,".");
   j=0;
  }
 }
 closegraph();
 basic();
}



void basic()
{
 int gd=DETECT,gm,i;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,15);
 delay(500);
 outtextxy(100,10,"I");
 delay(500);
 outtextxy(250,155,"I");
 delay(500);
 outtextxy(175,300,"S");
 setcolor(11);
 delay(1000);
 settextstyle(7,0,8);
 outtextxy(170,60,"NDIA");
 delay(500);
 outtextxy(320,205,"NFO");
 delay(500);
 outtextxy(260,350,"YSTEM");
 for(i=0;i<630;i=i+20)
 {
  line(1+i,1,10+i,1);
  line(638-i,478,629-i,478);
  line(638,1+i,638,10+i);
  line(1,478-i,1,469-i);
  delay(100);
 }
 delay(1000);
 closegraph();
 login();
}




void login()
{
 int gd=DETECT,gm,i,j=0;
 char ch;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setbkcolor(1);
 setcolor(15);
 rectangle(150,150,240,240);
 rectangle(370,150,460,240);
 settextstyle(4,0,3);
 setcolor(13);
 outtextxy(150,300,"Customer");
 setcolor(14);
 outtextxy(350,300,"Administrator");
 outtextxy(550,430,"Credits");
 outtextxy(30,430,"Exit");
 setcolor(15);
 line(150,145,240,145);
 line(145,150,145,240);
 line(150,245,240,245);
 line(245,150,245,240);
 line(370,145,460,145);
 line(365,150,365,240);
 line(370,245,460,245);
 line(465,150,465,240);
 setcolor(14);
 settextstyle(4,0,10);
 outtextxy(170,109,"?");
 line(390,190,390,220);
 line(440,190,440,220);
 line(395,185,435,185);
 line(395,225,435,225);
 arc(395,190,90,180,5);
 arc(435,190,0,90,5);
 arc(435,220,270,0,5);
 arc(395,220,180,270,5);
 arc(415,185,0,180,15);
 arc(415,185,0,180,20);
 circle(415,213,4);
 circle(415,213,2);
 setcolor(4);
 for(i=0;i<3;i++)
  rectangle(148-i,148-i,242+i,242+i);
 setcolor(15);
 rectangle(147,147,243,243);
 m:
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(120,10,"Use 'Tab' to Move and 'Enter' to Select");
 ch=getch();
 if(ch==9)
 {
  if(j==0)
  {
   setcolor(1);
   for(i=0;i<3;i++)
    rectangle(148-i,148-i,242+i,242+i);
   rectangle(147,147,243,243);
   setcolor(4);
   for(i=0;i<3;i++)
    rectangle(368-i,148-i,462+i,242+i);
   setcolor(15);
   rectangle(367,147,463,243);
   settextstyle(4,0,3);
   setcolor(14);
   outtextxy(150,300,"Customer");
   setcolor(13);
   outtextxy(350,300,"Administrator");
   setcolor(14);
   outtextxy(550,430,"Credits");
   outtextxy(30,430,"Exit");
   j++;
   goto m;
  }
  else if(j==1)
  {
   setcolor(1);
   for(i=0;i<3;i++)
    rectangle(148-i,148-i,242+i,242+i);
   rectangle(147,147,243,243);
   for(i=0;i<3;i++)
    rectangle(368-i,148-i,462+i,242+i);
   rectangle(367,147,463,243);
   settextstyle(4,0,3);
   setcolor(14);
   outtextxy(150,300,"Customer");
   outtextxy(350,300,"Administrator");
   setcolor(13);
   outtextxy(550,430,"Credits");
   setcolor(14);
   outtextxy(30,430,"Exit");
   j++;
   goto m;
  }
  else if(j==2)
  {
   setcolor(1);
   for(i=0;i<3;i++)
    rectangle(148-i,148-i,242+i,242+i);
   rectangle(147,147,243,243);
   for(i=0;i<3;i++)
    rectangle(368-i,148-i,462+i,242+i);
   rectangle(367,147,463,243);
   settextstyle(4,0,3);
   setcolor(14);
   outtextxy(150,300,"Customer");
   outtextxy(350,300,"Administrator");
   outtextxy(550,430,"Credits");
   setcolor(13);
   outtextxy(30,430,"Exit");
   j++;
   goto m;
  }
  else if(j==3)
  {
   setcolor(4);
   for(i=0;i<3;i++)
    rectangle(148-i,148-i,242+i,242+i);
   setcolor(15);
   rectangle(147,147,243,243);
   setcolor(1);
   for(i=0;i<3;i++)
    rectangle(368-i,148-i,462+i,242+i);
   rectangle(367,147,463,243);
   settextstyle(4,0,3);
   setcolor(13);
   outtextxy(150,300,"Customer");
   setcolor(14);
   outtextxy(350,300,"Administrator");
   outtextxy(550,430,"Credits");
   outtextxy(30,430,"Exit");
   j=0;
   goto m;
  }
 }
 else if(ch==13)
      {
       if(j==0)
       {
	closegraph();
	cust();
	login();
       }
       else if(j==1)
	    {
	     closegraph();
	     adm();
	     login();
	    }
       else if(j==2)
	    {
	     closegraph();
	     crdit();
	     login();
	    }
       else {closegraph();
	     quit();
	    }
      }
 else goto m;
}

/*void adm()
{
 getch();
}

void crdit()
{
 getch();
}

void cust()
{
 getch();
} */

void quit()
{
 int gd=DETECT,gm,i;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(11);
 settextstyle(8,0,5);
 outtextxy(110,150,"Thanks For Using");
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(50,250,"India Info System");
 for(i=0;i<630;i=i+20)
 {
  line(1+i,1,10+i,1);
  line(638-i,478,629-i,478);
  line(638,1+i,638,10+i);
  line(1,478-i,1,469-i);
  delay(100);
 }
 delay(1000);
 closegraph();
 exit(0);
}