#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include<alloc.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
class aaa
{
public:
FILE *ft,*fd,*fr,*fa,*fm,*fn;
char c,s[100];
int mm;

void openall2write()
{
	fd=fopen("date","a");
	fr=fopen("regno","a");
	fa=fopen("amnt","a");
	fm=fopen("mode","a");
	fn=fopen("mono","a");
}

void openall2read()
{
	fd=fopen("date","r");
	fr=fopen("regno","r");
	fa=fopen("amnt","r");
	fm=fopen("mode","r");
	fn=fopen("mono","r");
}


void closeall()
{
	fclose(fd);
	fclose(fr);
	fclose(fa);
	fclose(fm);
	fclose(fn);

}

int transaction_no()
{
	ft=fopen("date","r");

	int ii=0;

	while(!feof(ft))
	{
	fgets(s,sizeof(s),ft);

	ii++;
	}

	fclose(ft);
	return ii;

}


void write()
{
	openall2write();

	int i=transaction_no();

	clrscr();

	while(1)
	{
	sa:
	cout<<"\n enter Details for transaction no."<<i++<<"\n";
	wdate();
	wregno();
	wamnt();
	wmode();
	wmono();
	cout<<"\n want to enter more??? \n Press 'Y'\npress V to View";
	c=getch();
	if(c=='y'||c=='Y')
	goto sa;
	if(c=='v'||c=='V')
	read();
	break;


	}

	closeall();

}


void read()
{
	openall2read();

	int i=1;

	rdate();
	rregno();
	ramnt();
	rmode();
	rmono();

	while(!feof(fd))
	{
	clrscr();
	cout<<"\n Details for transaction no."<<i<<"\n";

	rdate();
	rregno();
	ramnt();
	rmode();
	rmono();
	//if(i%3==0)
       //	clrscr();
	getch();
	i++;
	}

	closeall();

}



void wdate()
{
	cout<<"\nenter date:  ";
	gets(s);
	fputs("\n",fd);
	fputs(s,fd);
}

void wregno()
{
	cout<<"\nenter registration number:  ";
	gets(s);
	fputs("\n",fr);
	fputs(s,fr);
}

void wamnt()
{
	cout<<"\nenter amount:  ";
	gets(s);
	fputs("\n",fa);
	fputs(s,fa);
}

void wmode()
{
	mt:

	cout<<"\nenter mode of payment:  ";
	cout<<"\np:cash paymenyt c:cheque d:demand draft  ";

	gets(s);

	if(strcmp(s,"p"))
	mm=1;

	else if(strcmp(s,"c"))
	mm=2;

	else if(strcmp(s,"d"))
	mm=3;

	else
	{
	cout<<"\nEnter a Valid entry\n";
	goto mt;
	}

	fputs("\n",fm);
	fputs(s,fm);
}

void wmono()
{
	switch (mm)
	{
	case 1:
	cout<<"\nenter payment number:  ";
	break;

	case 2:
	cout<<"\nenter cheque number:  ";
	break;

	case 3:
	cout<<"\nenter Demand Draft number:  ";
	break;
	}

	gets(s);
	fputs("\n",fn);
	fputs(s,fn);
}

void rdate()
{
	cout<<"\nDate:";
	fgets(s,sizeof(s),fd);
	puts(s);
}

void rregno()
{
	cout<<"\nRegistration number:";
	fgets(s,sizeof(s),fr);
	puts(s);
}

void ramnt()
{
	cout<<"\nAmount:";
	fgets(s,sizeof(s),fa);
	puts(s);
}

void rmode()
{
	fgets(s,sizeof(s),fm);

	cout<<"\nMode of payment:  ";

	if(strcmp(s,"p"))
	{
	mm=1;
	cout<<"Cash";
	}

	else if(strcmp(s,"c"))
	{
	mm=2;
	cout<<"Cheque";
	}

	else if(strcmp(s,"d"))
	{
	mm=3;
	cout<<"Demand Draft";
	}

}

void rmono()
{
	fgets(s,sizeof(s),fn);

	switch (mm)
	{
	case 1:
	cout<<"\n\nPayment number:  ";
	break;

	case 2:
	cout<<"\n\nCheque number:  ";
	break;

	case 3:
	cout<<"\n\nDemand Draft number:  ";
	break;
	}

	puts(s);
}


};


class pixa
{
     public:
aaa a2p;
void pw()
{

    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    char c[20],p1[20],s[20];
    int ck=1;

    setfillstyle(8,8);
    for(int x=0;x<75;x++)
    {
    bar(450, 225+x, 150,225-x);
    delay(5);
    }
     setcolor(1);
     settextstyle(4,0,4);

     outtextxy(200,150,"Enter Password");

     setfillstyle(1,7);
    for(x=0;x<100;x++)
    {
    bar(300+x, 250, 300-x,220);
    delay(4);
    }
     strcpy(p1,"");
     x=0;

     FILE *fp;
     fp=fopen("Password","r");
     fgets(s,sizeof(s),fp);


     while(1)
     {
     c[0]=p1[x]=getch();
     setcolor(1);
     settextstyle(8,0,1);
     //putchar(c[0]);
     //putchar(s[x]);

     if((int)p1[x]==13)
     break;

     if(c[0]!=s[x]||s[x]==NULL)
     ck=0;


     outtextxy(220+(x*15),215,"*");
     x++;

     }

     if(ck==1)
     ag();
     else
     ng();

     fclose(fp);


}

void ag()
{
   setfillstyle(6,2);
    for(int x=0;x<120;x++)
    {
    bar(300+x, 320, 300-x,130);
    delay(1);
    }
     setcolor(3);
     settextstyle(4,0,4);

     outtextxy(200,200,"Access Granted");
     getch();
     a2p.write();
}


void ng()
{
   setfillstyle(6,4);
    for(int x=0;x<150;x++)
    {
    bar(300+x, 300, 300-x,150);
    delay(3);
    }
     setcolor(5);
     settextstyle(4,0,4);

     outtextxy(155,200,"Access NOT Granted");

}


void menu()
{
     int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
     char cm,cn=0;

	int ad,vd,ac,vc,x,cmc=1;
	cmc=1;
	ad=vd=3;
	ac=6;
	vc=5;

	st:

    setfillstyle(6,ac);

    for(x=0;x<75;x++)
    {
    bar(175+x, 300, 175-x,150);
    delay(ad);
    }

   setfillstyle(6,vc);

    for(x=0;x<75;x++)
    {
    bar(425+x, 300, 425-x,150);
    delay(vd);
    }
     setcolor(5);
     settextstyle(7,0,4);
     outtextxy(110,200,"Accounts");

     setcolor(6);
     settextstyle(7,0,4);
     outtextxy(370,200,"View");

     cm=getch();
     if(((int)cm==75)||((int)cm==77)||((int)cm==75))
     if(cmc==1)
     {
     cmc=2;
     ad=vd=0;
     ac=6;
     vc=8;
     }
     else
     {
     cmc=1;
     ad=vd=0;
     ac=8;
     vc=5;
     }
     else if((int)cm==13)
     if(cmc==1)
     {
     cn++;
     oa();
     exit;
     }
     else
     {
     cn++;
     ov();
     exit;
     }
     if(cn==0)
     goto st;

}

void oa()
{
    st1:
   setfillstyle(11,2);
    for(int x=0;x<175;x++)
    {
    bar(300+x, 350, 300-x,100);
    delay(2);
    }
     setcolor(5);
     settextstyle(4,0,5);

     outtextxy(150,200,"Loading Admin....");

     setfillstyle(1,15);
     bar(476, 374, 124,380);

      setfillstyle(1,3);
     for(x=0;x<350;x++)
    {
    bar(125+x, 375, 125,380);
    delay(5);
    }
    pw();
    cout<<"press y to Continue....:";
    char cw=getche();
    if(cw=='y'||cw=='Y')
    goto st1;
}


void ov()
{
    st2:
   setfillstyle(11,2);
    for(int x=0;x<175;x++)
    {
    bar(300+x, 350, 300-x,100);
    delay(2);
    }
     setcolor(5);
     settextstyle(4,0,5);

     outtextxy(150,200,"Loading View...");
     setfillstyle(1,15);
     bar(476, 374, 124,380);

      setfillstyle(1,3);
     for(x=0;x<350;x++)
    {
    bar(125+x, 375, 125,380);
    delay(5);
    }
    a2p.read();
    cout<<"press y to Continue....:";
    char cw=getche();
    if(cw=='y'||cw=='Y')
    goto st2;

}

void front()
{

     int gdriver = DETECT, gmode;
     initgraph(&gdriver, &gmode, "");
     int x;

    setfillstyle(8,8);

    for(x=0;x<270;x++)
    {
    bar(310+x, 430, 310-x,50);
    delay(1);
    }

    for(x=0;x<50;x++)
    {
     delay(50);
     setcolor(x%15);
     settextstyle(4,0,9);
     outtextxy(40,150,"F M    S");

     setcolor((x+10)%15);
     settextstyle(10,0,2);
     outtextxy(105,200,"ee      anagement      ystem");

 }
   getch();

   setfillstyle(11,2);
    for(x=0;x<175;x++)
    {
    bar(300+x, 350, 300-x,100);
    delay(2);
    }
     setcolor(5);
     settextstyle(4,0,5);

     outtextxy(150,200,"Loading FMS....");

     setfillstyle(1,15);
     bar(476, 374, 124,380);

      setfillstyle(1,3);
     for(x=0;x<350;x++)
    {
    bar(125+x, 375, 125,380);
    delay(5);
    }

}

};
void main()
{
clrscr();

pixa pp;
pp.front();
pp.menu();

getch();
}
