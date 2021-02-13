//headerfiles

#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


//classes and structures used
class physics{
	char x;

	void lens()
	{
	moveto(40,240);
	setcolor(YELLOW);
	lineto(600,240);
	setcolor(MAGENTA);
	ellipse(320,240,0,360,15,60);
	}

	void object(int x,int y)
	{
	 setcolor(LIGHTGREEN);
	 moveto(x,y);
	 lineto(x,y-30);
	 settextstyle(3,1,3);
	 outtextxy(x-18,y-38,">");
	}

	void axis()
	{

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(313,223,"+");
	setcolor(YELLOW);
	outtextxy(313,223,"-");
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(322,240,"o");

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(213,223,"+");
	setcolor(YELLOW);
	outtextxy(213,223,"-");
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(222,240,"f");

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(413,223,"+");
	setcolor(YELLOW);
	outtextxy(413,223,"-");
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(422,240,"f'");

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(113,223,"+");
	setcolor(YELLOW);
	outtextxy(113,223,"-");
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(122,240,"2f");

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(513,223,"+");
	setcolor(YELLOW);
	outtextxy(513,223,"-");
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(522,240,"2f'");
	}

	void rays(int x , int y , int x1 , int y1)
	{
	setcolor(LIGHTBLUE);
	moveto(x,y);
	lineto(320,y);
	lineto(420,240);
	lineto(x1,y1);
	moveto(x,y);
	lineto(320,240);
	lineto(x1,y1);
	}

	void image(int p , int q)
	{
	setcolor(LIGHTGREEN);
	moveto(p,q);
	lineto(p,240);
	settextstyle(3,1,3);
	outtextxy(p-18,q-14,"<");
	}

	void virt(int d , int e)
	{
	 setcolor(LIGHTGREEN);
	moveto(d,e);
	lineto(d,240);
	settextstyle(3,1,3);
	outtextxy(d-18,e-14,">");
	}

	void obs()
	{
	settextstyle(3,0,3);
	setcolor(LIGHTBLUE);
	outtextxy(60,350,"IMAGE AT ");
	outtextxy(60,400,"NATURE OF IMAGE");
	outtextxy(60,450,"SIZE OF IMAGE");
	}

	public:
	void pmenu();
	void p1();
	void p2();
	void p3();
	void p4();
	void p5();
	void p6();

	}P;

	class chemistry
		{
		char a;
		public:
		void cmenu();
		void c1();
		void c2();
		void c3();
		void c4();
		void c5();
		void c6();
		void c7();
		void c8();
		void c9();
		void c10();
		void c11();
		void c12();
		void c13();
		void c14();
		void c15();
		void c16();
		void c17();
		void c18();
		void c19();
		void c20();
		void c21();

		}C;

	class mathematics
			{
			char ch;
			public:
			void mmmenu();
			void mmenu();
			void m1();
			void m2();
			void m3();
			void m4();
			void m5();
			void m6();
			void m7();
			void m8();

			}M;

	class computer{
	char y;

		public:
			void commenu();
			void comenu();
			void co1();
			void co2();
			void co3();
			void co4();
			void co5();
			void co6();
			void co7();
			void co8();
			void co9();
			void co10();
			void co11();
			void co12();
			void co13();
			void co14();
			void co15();
			void co16();
			void co17();
			void co18();
			void co19();
			void co20();
			void co21();
			void co22();
			void co23();
			void co24();
			void co25();
			void co26();
			void co27();
			void co28();
			void co29();
			void co30();
			void co31();
			void co32();
			void co33();
			void co34();
			void co35();
			void co36();
			void co37();
			void co38();
			void co39();
			void cbg();
			void cbg1();//rec
			void cbg2();//tri
			void cbg3();//cir
			void cbg4();//arc
			void cbg5();//sec
			void cbg6();//ell
			}CO;


	class english
	{
	  char ch;
	  public:
	  void mmenu();
	  void menu();
	  void formal();
	  void informal();
	  void notice();
	  void note();
	 }E;

	 

	void physics::pmenu()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(4,0,12);
	outtextxy(50,100,"PHYSICS");
	outtextxy(10,450,"PRESS ENTER TO CONTINUE");

	}

      void physics::p1()
	{
	cleardevice();
	settextstyle(3,0,4);
	outtextxy(170,40,"OBJECT AT INFINITY");
	delay(500);
	lens();
	delay(500);
	object(10,240);
	delay(500);
	axis();

	setcolor(BLUE);

	moveto(90,200);
	lineto(320,200);
	delay(100);
	lineto(420,240);
	delay(100);
	moveto(90,220);
	lineto(320,220);
	delay(100);
	lineto(420,240);
	delay(100);
	moveto(90,280);
	lineto(320,280);
	delay(100);
	lineto(420,240);
	delay(100);
	moveto(90,260);
	lineto(320,260);
	delay(100);
	lineto(420,240);
	delay(500);
	obs();
	outtextxy(340,350,"AT F");
	delay(100);
	outtextxy(340,400,"REAL AND INVERTED");
	delay(200);
	outtextxy(340,450,"HIGHLY DIMINISHED");
	delay(200);

	}

	void physics::p2()
	{
	cleardevice();
	settextstyle(3,0,4);
	outtextxy(170,40,"OBJECT BEYOND 2F");
	delay(500);
	lens();
	delay(500);
	object(80,240);
	delay(500);
	axis();
	delay(800);
	rays(80,205,500,270);
	delay(500);
	image(500,270);
	delay(500);
	obs();
	delay(200);
	outtextxy(340,350,"BETWEEN F AND 2F");
	delay(200);
	outtextxy(340,400,"REAL AND INVERTED");
	delay(200);
	outtextxy(340,450,"SMALLER ");
	}

	void physics::p3()
	{
	cleardevice();
	settextstyle(3,0,4);
	outtextxy(170,40,"OBJECT AT 2F");
	delay(200);
	lens();
	delay(200);
	object(120,240);
	delay(200);
	axis();
	delay(200);
	rays(120,205,520,270);
	delay(200);
	image(520,270);
	delay(200);
	obs();
	delay(200);
	outtextxy(340,350,"AT 2F");
	delay(200);
	outtextxy(340,400,"REAL AND INVERTED");
	delay(200);
	outtextxy(340,450,"SAME SIZE");

	}

	void physics::p4()
	{

	cleardevice();
	settextstyle(3,0,4);
	delay(200);
	outtextxy(170,40,"OBJECT BETWEEN F AND 2F");
	delay(200);
	lens();
	delay(200);
	object(180,240);
	delay(200);
	axis();
	delay(200);
	rays(180,205,550,290);
	delay(200);
	image(550,290);
	delay(200);
	obs();
	delay(200);
	outtextxy(340,350,"BEYOND 2F");
	delay(200);
	outtextxy(340,400,"REAL AND INVERTED");
	delay(200);
	outtextxy(340,450,"MAGNIFIED");

	}

	void physics::p5()
	{

	cleardevice();
	settextstyle(3,0,4);
	outtextxy(170,40,"OBJECT AT F");
	delay(200);
	lens();
	delay(200);
	object(80,240);
	delay(200);
	axis();
	delay(200);
	rays(80,205,630,350);
	setlinestyle(SOLID_LINE , 1 , 1);
	delay(200);
	image(630,350);
	delay(200);
	obs();
	delay(200);
	outtextxy(340,350,"AT INFINITY");
	delay(200);
	outtextxy(340,400,"REAL AND INVERTED");
	delay(200);
	outtextxy(340,450,"HIGHLY ENLARGED");
	setlinestyle(SOLID_LINE,1,1);

	}

	void physics::p6()
	{

	cleardevice();
	settextstyle(3,0,4);
	delay(200);
	outtextxy(170,40,"OBJECT BETWEEN F AND O");
	delay(200);
	lens();
	delay(200);
	object(240,240);
	delay(200);
	axis();
	delay(200);
	setlinestyle(DASHED_LINE,1,1);
	delay(200);
	virt(70,100);
	setlinestyle(SOLID_LINE,1,1);
	setcolor(LIGHTBLUE);
	moveto(240,205);
	delay(200);
	lineto(320,205);
	delay(200);
	lineto(420,240);
	delay(200);
	lineto(520,280);
	moveto(240,205);
	delay(200);
	lineto(320,240);
	delay(200);
	lineto(470,320);

	setlinestyle(DASHED_LINE,1,1);
	moveto(240,205);
	delay(200);
	lineto(70,90);

	moveto(320,205);
	delay(200);
	lineto(70,90);

	delay(200);
	obs();
	delay(200);
	outtextxy(340,350,"BEHIND THE OBJACT");
	delay(200);
	outtextxy(340,400,"VIRTUAL AND ERECT");
	delay(200);
	outtextxy(340,450,"ENLARGED ");

	}

	void chemistry::cmenu()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,20);
	outtextxy(10,170,"CHEMISTRY");

	}

	void chemistry::c1()
	{
	cleardevice();

	setcolor(YELLOW);
	settextstyle(1,0,6);
	outtextxy(40,160,"TESTS FOR DIFFERENT");
	outtextxy(60,280,"FUNCTIONAL GROUPS");

	}

	void chemistry::c2()
	{
	cleardevice();

	setcolor(LIGHTBLUE);
	settextstyle(3,0,3);
	outtextxy(40,140,"ALCOHOLS");
	outtextxy(520,140,"PHENOLS");
	outtextxy(280,40,"ETHERS");
	outtextxy(40,340,"ALDEHYDES");
	outtextxy(520,340,"KETONES");
	outtextxy(250,440,"CARBOXYLIC ACIDS");
	}

	void chemistry::c3()
	{
	cleardevice();

	setcolor(LIGHTMAGENTA);
	outtextxy(150,130,"DISTINCTION BETWEEN PRIMARY , ");
	outtextxy(110,190,"SECONDARY AND TERTIARY ALCOHOLS");
	outtextxy(180,280,"1. VICTOR MEYER'S TEST");
	outtextxy(230,320,"2. LUCAS TEST");
	}

	void chemistry::c4()
	{
	cleardevice();
	setcolor(RED);
	settextstyle(2,0,8);
	outtextxy(200,20,"VICTOR MEYER'S TEST");
	setcolor(LIGHTGREEN);
	rectangle(50,60,590,460);
	rectangle(50,60,230,460);
	rectangle(50,60,410,460);
	rectangle(50,60,590,100);
	setcolor(LIGHTMAGENTA);
	outtextxy(80,70,"PRIMARY");
	outtextxy(250,70,"SECONDARY");
	outtextxy(440,70,"TERTIARY");
	setcolor(LIGHTBLUE);
	settextstyle(2,0,6);
	outtextxy(60,110,"RCH OH");

	outtextxy(60,140,"P+I");
	outtextxy(60,170,"RCH -I");
	outtextxy(60,200,"AgNO");
	outtextxy(60,230,"RCH -NO");
	outtextxy(60,260,"HONO");
	outtextxy(60,290,"RC-NO");
	rectangle(60,320,61,345);
	rectangle(70,320,71,345);
	outtextxy(60,350,"NOH");
	outtextxy(60,380,"nitrolic acid");
	outtextxy(60,410,"NaOH");
	outtextxy(60,440,"bloodred colour");
	settextstyle(2,0,4);
	outtextxy(90,125,"2");
	outtextxy(90,155,"2");
	outtextxy(90,185,"2");
	outtextxy(98,215,"2");
	outtextxy(91,245,"2");
	outtextxy(130,245,"2");
	outtextxy(110,305,"2");

	settextstyle(2,0,6);
	outtextxy(240,110,"R CHOH");
	outtextxy(240,140,"P+I");
	outtextxy(240,170,"R CH-I");
	outtextxy(240,200,"AgNO");
	outtextxy(240,230,"R CH-NO");
	outtextxy(240,260,"HONO");
	outtextxy(240,290,"R C-NO");
	rectangle(240,320,241,345);
	outtextxy(240,350,"N=O");
	outtextxy(240,380,"Pseudonitrole");
	outtextxy(240,410,"NaOH");
	outtextxy(240,440,"blue colouration");
	settextstyle(2,0,4);
	outtextxy(250,125,"2");
	outtextxy(270,155,"2");
	outtextxy(250,185,"2");
	outtextxy(283,215,"2");
	outtextxy(250,245,"2");
	outtextxy(310,245,"2");
	outtextxy(250,305,"2");
	outtextxy(300,305,"2");

	settextstyle(2,0,6);
	outtextxy(420,110,"R C-OH");
	outtextxy(420,140,"P+I");
	outtextxy(420,170,"R C-I");
	outtextxy(420,200,"AgNO");
	outtextxy(420,230,"R C-NO");
	outtextxy(420,260,"HONO");
	outtextxy(420,290,"no reaction");
	rectangle(420,320,421,345);
	outtextxy(420,410,"NaOH");
	outtextxy(420,440,"colourless");
	settextstyle(2,0,4);
	outtextxy(430,125,"3");
	outtextxy(450,155,"2");
	outtextxy(430,185,"3");
	outtextxy(458,215,"2");
	outtextxy(430,245,"3");
	outtextxy(478,245,"2");
	settextstyle(2,0,6);
	}

	void chemistry::c5()
	{
	cleardevice();
	setcolor(LIGHTGREEN);
	settextstyle(3,0,2);
	outtextxy(200,60,"LUCAS TEST");
	outtextxy(30,100,"This test is based upon the difference in reactivity of");
	outtextxy(30,140,"primary , secondary and tertiary alcohol with HCl . ");
	outtextxy(10,220,"ALCOHOL+LUCAS REAGENT+EQUIMOLAR MIXTURE OF HCl+ ");
	outtextxy(10,280,"ANHYDROUS ZnCl");
	outtextxy(230,280,"at room temperature ");
	outtextxy(80,350,"TERTIARY - TURBIDITY IMMEDIATELY ");
	outtextxy(80,390,"SECONDARY - TURBIDITY AFTER FIVE MINUTES ");
	outtextxy(80,430,"PRIMARY - NO TURBIDITY ");
	settextstyle(2,0,4);
	outtextxy(200,300,"2");
	}

	void chemistry::c6()
	{
	cleardevice();
	setcolor(RED);
	settextstyle(3,0,6);
	outtextxy(70,160,"DISTINCTION BETWEEN");
	outtextxy(20,240,"ALCOHOLS AND PHENOLS");
	}

	void chemistry::c7()
	{
	cleardevice();
	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(100,120,"1. LITMUS TEST ");
	outtextxy(100,220,"2. REACTION WITH FERRIC CHLORIDE");
	outtextxy(100,320,"3. COUPLING REACTION");
	outtextxy(100,420,"4. BROMINE WATER TEST");
	}

	void chemistry::c8()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(GREEN);
	outtextxy(220,60,"LITMUS TEST ");
	settextstyle(3,0,3);
	setcolor(LIGHTMAGENTA);
	outtextxy(180,200,"Phenols turn blue litmus red ");
	outtextxy(300,300,"but");
	outtextxy(240,400,"alcohols do not");
	}

	void chemistry::c9()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(BLUE);
	outtextxy(60,60,"REACTION WITH FERRIC CHLORIDE");
	settextstyle(3,0,3);
	setcolor(YELLOW);
	outtextxy(20,150,"Phenols react with neutral ferric chloride ");
	outtextxy(20,250,"to give blue , violet or green colouration ");
	outtextxy(20,350,"whereas alcohols do not . ");
	}

	void chemistry::c10()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTGRAY);
	outtextxy(160,60,"COUPLING REACTION");
	setcolor(CYAN);
	settextstyle(3,0,3);
	outtextxy(30,120,"Phenols react with diazonium salts in ");
	outtextxy(30,220,"weakly basic solutions to form yellow ");
	outtextxy(30,320,"or orange coloured azo dyes but alcohols ");
	outtextxy(30,420,"do not react . ");
	}

	void chemistry::c11()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(YELLOW);
	outtextxy(160,60,"BROMINE WATER TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(30,120,"Phenol on shaking with bromine water gives a ");
	outtextxy(30,220,"white precipitate of 2,4,6-tribromophenol ");
	outtextxy(30,320,"whereas alcohols do not react");
	}

	void chemistry::c12()
	{
	cleardevice();
	settextstyle(3,0,9);
	setcolor(DARKGRAY);
	outtextxy(80,180,"ALDEHYDES");
	}

	void chemistry::c13()
	{
	cleardevice();
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(100,80,"1. SCHIFF's REAGENT TEST");
	outtextxy(100,160,"2. TOLLEN's REAGENT TEST");
	outtextxy(100,240,"3. FEHLING TEST");
	outtextxy(100,320,"4. BENEDICT TEST");
	outtextxy(100,400,"5. MOLISCH TEST");
	}

	void chemistry::c14()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTGRAY);
	outtextxy(150,30,"SCHIFF's REAGENT TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(80,140,"Schiff's reagent is ROSE ANILINE HYDROGEN");
	outtextxy(80,200,"CHLORIDE through which sulphur dioxide is ");
	outtextxy(80,260,"passed to make it colourless . When to an ");
	outtextxy(80,320,"aldehyde schiff's reagent is added pale ");
	outtextxy(80,380,"magenta pink colour is restored . ");
	}

	void chemistry::c15()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTGRAY);
	outtextxy(150,30,"TOLLEN's REAGENT TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(120,140,"Also known as SILVER MIRROR TEST .");
	outtextxy(120,200,"Reagent - AMMONIACAL SILVER NITRATE");
	outtextxy(120,260,"Organic compound + tollen's reagent");
	outtextxy(300,320,"HEAT");
	outtextxy(120,380,"a silver mirror is formed on the  ");
	outtextxy(120,440,"sides of the test tube . ");
	}

	void chemistry::c16()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTGRAY);
	outtextxy(150,30,"FEHLING TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(120,80,"Reagents :");
	outtextxy(120,140,"1. fehling I - alkaline copper sulphate");
	outtextxy(120,200,"2. fehling II - rochelle salt");
	outtextxy(120,260,"(sodium potassium tartarate)");
	outtextxy(120,320,"organic compound+fehling I+fehling II");
	outtextxy(300,380,"HEAT");
	outtextxy(120,440,"red ppt confirms aldehyde . ");
	}

	void chemistry::c17()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTGRAY);
	outtextxy(150,30,"BENEDICT TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(120,180,"alkaline copper sulphate + citrate salt ");
	outtextxy(120,280,"GIVES");
	outtextxy(120,380,"brick red ppt on heating ");
	}

	void chemistry::c18()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,4);
	outtextxy(200,60,"MOLISCH TEST");
	settextstyle(3,0,3);
	setcolor(LIGHTMAGENTA);
	outtextxy(90,120,"10% solution of alpha naphthol in ethanol");
	outtextxy(100,200,"ORGANIC COMPOUND + MOLISCH REAGENT");
	outtextxy(100,280,"IN PRESENCE OF CONC SULPHURIC ACID");
	outtextxy(280,360,"GIVES");
	outtextxy(250,440,"VIOLET RING");
	}

	void chemistry::c19()
	{
	cleardevice();
	settextstyle(3,0,8);
	setcolor(LIGHTCYAN);
	outtextxy(130,180,"KETONES");
	}

	void chemistry::c20()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(BLUE);
	outtextxy(80,30,"HALOFORM TEST OR IODOFORM TEST");
	settextstyle(3,0,3);
	setcolor(RED);
	outtextxy(10,90,"STEP-1");
	outtextxy(10,140,"2NaOH + I    > NaI + NaOI+H O");
	outtextxy(10,190,"or use");
	outtextxy(10,240,"Na CO  + I ");
	outtextxy(10,290,"STEP-2");
	outtextxy(10,340,"CH -C-CH CH CH+3NaOI   >CI -C-CH CH CH  +3NaOH");
	outtextxy(10,390,"STEP-3");
	outtextxy(10,440,"CI COCH CH CH  + NaOH   >CHI  + CH CH CH COONa");
	moveto(140,157);
	lineto(185,157);
	moveto(290,357);
	lineto(330,357);
	moveto(290,457);
	lineto(330,457);
	settextstyle(2,0,4);
	outtextxy(130,160,"2");
	outtextxy(350,160,"2");
	outtextxy(40,260,"2");
	outtextxy(80,260,"3");
	outtextxy(135,260,"2");
	outtextxy(40,360,"3");
	outtextxy(130,360,"2");
	outtextxy(170,360,"2");
	outtextxy(210,360,"3");
	outtextxy(360,360,"3");
	outtextxy(450,360,"2");
	outtextxy(490,360,"2");
	outtextxy(530,360,"3");
	outtextxy(30,460,"3");
	outtextxy(100,460,"3");
	outtextxy(140,460,"2");
	outtextxy(180,460,"2");
	outtextxy(370,460,"3");
	outtextxy(460,460,"2");
	outtextxy(500,460,"2");
	outtextxy(530,460,"3");
	settextstyle(2,0,4);
	outtextxy(330,465,"yellow ppt");
	}

	void chemistry::c21()
	{
	cleardevice();
	settextstyle(3,0,4);
	setcolor(LIGHTRED);
	outtextxy(200,100,"CARBOXYLIC");
	outtextxy(260,180,"ACIDS");
	settextstyle(3,0,3);
	setcolor(GREEN);
	outtextxy(100,250,"carboxylic acids on reacting with alcohols");
	outtextxy(100,280,"give sweet smelling esters . ");
	}

	void mathematics::mmmenu()
	{
	cleardevice();
	settextstyle(3,0,8);
	setcolor(LIGHTGREEN);
	outtextxy(90,180,"MATHEMATICS");
	}

	void mathematics::mmenu()
	{
	cleardevice();
	settextstyle(2,0,6);
	setcolor(LIGHTBLUE);
	outtextxy(60,180,"A MATRIX IS A RECTANGULAR ARRAY OF NUMBERS  , REAL OR ");
	outtextxy(60,210,"COMPLEX . THE NUMBERS ARE CALLED THE ELEMENTS OF THE ");
	outtextxy(60,240,"MATRIX OR ENTRIES IN THE MATRIX");
	}

	void mathematics::m1()
	{
	cleardevice();
	settextstyle(3,0,5);
	 setcolor(LIGHTCYAN);
	 outtextxy(100,180,"TYPES OF MATRICES");
	}

	 void mathematics::m2()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"COLUMN  MATRIX  : ");
	setcolor(YELLOW);
	outtextxy(60,210,"A MATRIX IS SAID TO BE A COLUMN MATRIX OR COLUMN VECTOR");
	outtextxy(60,240,"IF IT HAS ONLY ONE COLUMN AND ANY NUMBER OF ROWS . ");
	 }

	 void mathematics::m3()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"ROW MATRIX : ");
	setcolor(YELLOW);
	outtextxy(60,210,"A MATRIX IS SAID TO BE A ROW MATRIX OR ROW VECTOR IF");
	outtextxy(60,240,"IT HAS ONLY ONE ROW AND ANY NUMBER OF COLUMNS . ");
	 }

	 void mathematics::m4()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"ZERO MATRIX :");
	setcolor(YELLOW);
	outtextxy(60,210,"A MATRIX IS SAID TO BE A ZERO MATRIX OR NULL MATRIX ");
	outtextxy(60,240,"ALL ITS ELEMENTS ARE ZERO . ");
	 }

	 void mathematics::m5()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"SQUARE MATRIX :");
	setcolor(YELLOW);
	outtextxy(60,210,"A MATRIX IN WHICH THE NUMBER OF ROWS IS EQUAL TO THE");
	outtextxy(60,240,"NUMBER OF COLUMNS . ");
	 }

	 void mathematics::m6()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"DIAGONAL MATRIX :");
	setcolor(YELLOW);
	outtextxy(60,210,"A SQUARE MATRIX IS SAID TO BE A DIAGONAL MATRIX IF");
	outtextxy(60,240,"ALL ITS NON - DIAGONAL ELEMENTS ARE ZERO . ");
	 }

	 void mathematics::m7()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"IDENTITY MATRIX :");
	setcolor(YELLOW);
	outtextxy(60,210,"A SQUARE MATRIX IN WHICH ELEMENTS IN THE MAIN DIAGONAL");
	outtextxy(60,240,"ARE 1 AND REST ARE ZERO . ");
	 }

	 void mathematics::m8()
	 {
	 cleardevice();
	 settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(60,180,"SCALAR MATRIX : ");
	setcolor(YELLOW);
	outtextxy(60,210,"A SQUARE MATRIX WHOSE ALL NON - DIAGONAL ELEMENTS ARE ");
	outtextxy(60,240,"ZERO AND DIAGONAL ELEMENTS ARE EQUAL . ");
	 }

	 void computer::commenu()
	 {
	 cleardevice();
	settextstyle(3,0,8);
	setcolor(LIGHTMAGENTA);
	outtextxy(90,180,"COMPUTERS");
	 }

	 void computer::comenu()
	 {
	 cleardevice();
	setlinestyle(SOLID_LINE,LIGHTGREEN,3);
	setcolor(LIGHTGREEN);
	rectangle(20,40,180,450);
	setcolor(BLUE);
	rectangle(20,40,620,450);
	setcolor(LIGHTGREEN);
	moveto(20,100);
	lineto(620,100);

	delay(500);

	setcolor(BLUE);
	rectangle(20,40,180,450);
	setcolor(LIGHTGREEN);
	rectangle(20,40,620,450);
	setcolor(BLUE);
	moveto(20,100);
	lineto(620,100);

	delay(500);

	setcolor(LIGHTRED);
	settextstyle(3,0,3);
	outtextxy(90,50,"S.No");
	outtextxy(300,50,"HEADER FILE");

	setcolor(YELLOW);
	moveto(20,170);
	lineto(620,170);
	moveto(20,240);
	lineto(620,240);
	moveto(20,310);
	lineto(620,310);
	moveto(20,380);
	lineto(620,380);

	delay(500);

	setcolor(RED);
	moveto(20,170);
	lineto(620,170);
	moveto(20,240);
	lineto(620,240);
	moveto(20,310);
	lineto(620,310);
	moveto(20,380);
	lineto(620,380);

	delay(500);
	setcolor(LIGHTCYAN);
	outtextxy(320,120,"<CONIO.H>");
	outtextxy(320,190,"<CTYPE.H>");
	outtextxy(320,260,"<GRAPHIC.H>");
	outtextxy(320,330,"<MATH.H>");
	outtextxy(320,400,"<STRING.H>");
	settextstyle(2,0,6);
	setcolor(LIGHTMAGENTA);
	outtextxy(100,120,"1.");
	outtextxy(100,190,"2.");
	outtextxy(100,260,"3.");
	outtextxy(100,330,"4.");
	outtextxy(100,400,"5.");
	}

	void computer::co1()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"<CONIO.H>");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(40,240,"Declares various functions used in");
	outtextxy(40,280,"calling the DOS console I/O routines.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co2()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,1);
	outtextxy(40,60,"1.cgets");
	outtextxy(40,100,"2.clreol");
	outtextxy(40,140,"3.clrscr");
	outtextxy(40,180,"4.cputs");
	outtextxy(40,220,"5.getch");
	outtextxy(40,260,"6.gotoxy");
	outtextxy(40,300,"7.kbhit");
	outtextxy(40,340,"8.putch");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ANY TO CONTINUE :-");
	}

	void computer::co3()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"cgets");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration:  char *cgets(char *str);");
	setcolor(RED);
	outtextxy(110,300,"cgets reads a string of characters from");
	outtextxy(110,340,"the console and stores the string (and");
	outtextxy(110,380,"the string length) in the location *str.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co4()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"clreol");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: void clreol(void);");
	setcolor(RED);
	outtextxy(110,260,"clreol clears all characters from the");
	outtextxy(110,300,"cursor position to the end of the line");
	outtextxy(110,340,"within the current text window ,");
	outtextxy(110,380,"without moving the cursor . ");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co5()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"clrscr");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: void clrscr(void);");
	setcolor(RED);
	outtextxy(110,260,"clrscr clears the current text window & ");
	outtextxy(110,300,"places the cursor in the upper left-hand ");
	outtextxy(110,340,"corner (at position 1,1).");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co6()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"cputs");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: int cputs(const char *str);");
	setcolor(RED);
	outtextxy(110,260,"cputs writes the null-terminated string ");
	outtextxy(110,300,"str to the current text window. It ");
	outtextxy(110,340,"does not append a newline character.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co7()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"getch");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int getch(void); ");
	setcolor(RED);
	outtextxy(110,260,"getch reads a single character directly ");
	outtextxy(110,300,"from the keyboard, without echoing");
	outtextxy(110,340,"to the screen.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co8()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"gotoxy");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: void gotoxy(int x, int y); ");
	setcolor(RED);
	outtextxy(110,260,"gotoxy moves the cursor to the given  ");
	outtextxy(110,300,"position in the current text window.If  ");
	outtextxy(110,340,"the coordinates are invalid, the call to  ");
	outtextxy(110,380,"gotoxy is ignored. ");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co9()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"kbhit");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: int kbhit(void);");
	setcolor(RED);
	outtextxy(110,260,"Checks for currently available keystrokes");
	outtextxy(110,300,"kbhit checks to see if a keystroke is ");
	outtextxy(110,340,"currently available.Any available keystroke ");
	outtextxy(110,380,"can be retrieved with getch or getche.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co10()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"putch");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: int putch(int ch); ");
	setcolor(RED);
	outtextxy(110,260,"putch outputs the character c to the ");
	outtextxy(110,300,"current text window. It is a text-mode");
	outtextxy(110,340,"function that performs direct video ");
	outtextxy(110,380,"output to the console.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co11()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,10,"<CTYPE.H>");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(100,240,"Contains information used by the character ");
	outtextxy(100,280,"classification and character conversion macros.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co12()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,1);
	outtextxy(40,60,"1.isalpha");
	outtextxy(40,100,"2.isdigit");
	outtextxy(40,140,"3.islower");
	outtextxy(40,180,"4.ispunct");
	outtextxy(40,220,"5.isspace");
	outtextxy(40,260,"6.isupper");
	outtextxy(40,300,"7.tolower");
	outtextxy(40,340,"8.toupper");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :-");
	}

	void computer::co13()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"isalpha");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int isalpha(int c); ");
	setcolor(RED);
	outtextxy(110,300,"The isalpha macros return a non-zero value ");
	outtextxy(110,340,"on success.success is defined as follows:");
	outtextxy(110,380,"isalpha:  c is a letter (A to Z or a to z)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co14()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"isdigit");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: int isdigit(int c); ");
	setcolor(RED);
	outtextxy(110,260,"The isdigit macros return a non-zero value on");
	outtextxy(110,300,"success. Success is defined as follows:");
	outtextxy(110,340,"isdigit:  c is a digit (0 to 9)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co15()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"islower");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int islower(int c); ");
	setcolor(RED);
	outtextxy(110,260,"The islower macros return a non-zero value on");
	outtextxy(110,300,"success. Success is defined as follows:");
	outtextxy(110,340,"islower:  c is a lowercase letter (a to z)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co16()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"ispunct");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: int ispunct(int c);  ");
	setcolor(RED);
	outtextxy(110,260,"The ispunct macros return a non-zero value on");
	outtextxy(110,300,"success. Success is defined as follows:");
	outtextxy(110,340,"ispunct:  c is a punctuation character ");
	outtextxy(110,380,"(iscntrl or isspace)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co17()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"isupper");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int isupper(int c); ");
	setcolor(RED);
	outtextxy(110,260,"The isupper macros return a non-zero value on");
	outtextxy(110,300,"success. Success is defined as follows:");
	outtextxy(110,340,"isupper:  c is an uppercase letter (A to Z)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co18()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"tolower");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int isupper(int c); ");
	setcolor(RED);
	outtextxy(110,260,"The islower macros return a non-zero value on");
	outtextxy(110,300,"success. Success is defined as follows:");
	outtextxy(110,340,"isupper:  c is an uppercase letter (A to Z)");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co19()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"toupper");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: int toupper(int ch);");
	setcolor(RED);
	outtextxy(110,260,"toupper is a function that converts an integer ch");
	outtextxy(110,300,"(in the range EOF to 255) to its uppercase value ");
	outtextxy(110,340,"(A to Z; if it was lowercase, a to z). All others ");
	outtextxy(110,380,"are left unchanged.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co20()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(5,20,"<GRAPHICS.H>");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,240,"Declares prototypes for the graphics functions");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co21()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,1);
	outtextxy(40,60,"1.arc");
	outtextxy(40,100,"2.bar");
	outtextxy(40,140,"3.bar3d");
	outtextxy(40,180,"4.circle");
	outtextxy(40,220,"5.ellipse");
	outtextxy(40,260,"6.pieslice");
	outtextxy(40,300,"7.rectangle");
	outtextxy(40,340,"8.sector");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS YOUR CHOICE NO. :-");
	}

	void computer::co22()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"arc");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"void far arc(int x,int y,int stangle,int endangle,int radius); ");
	setcolor(RED);
	outtextxy(110,260,"arc draws a circular arc in the current drawing color.");
	outtextxy(110,320,"(x,y)      Center point of arc");
	outtextxy(110,350,"stangle    Start angle in degrees");
	outtextxy(110,380,"endangle   End angle in degrees");
	outtextxy(110,410,"radius     Radius of arc");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co23()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"bar");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: ");
	outtextxy(0,250,"void far bar(int left,int top,int right,int bottom);");
	setcolor(RED);
	outtextxy(110,300,"Draws a bar");
	outtextxy(110,350,"(left, top)      the rectangle's upper left corner");
	outtextxy(110,400,"(right, bottom)  the rectangle's lower right corner");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co24()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"bar3d");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,170,"Declaration:");
	outtextxy(0,210,"void far bar3d(int left, int top, int right, int bottom, ");
	setcolor(RED);
	outtextxy(110,260,"int depth, int topflag); ");
	outtextxy(110,290,"Draws a 3-D bar");
	outtextxy(110,320,"depth            Bar's depth in pixels");
	outtextxy(110,350,"topflag          Governs whether a three-dimensional");
	outtextxy(110,380," top is put on the bar ");
	outtextxy(110,440,"(right, bottom)  Rectangle's lower right corner");
	outtextxy(110,410,"(left, top)      Rectangle's upper left corner");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co25()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"circle");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"declaration : void far circle(int x, int y, int radius);");
	setcolor(RED);
	outtextxy(110,260,"circle draws a circle");
	outtextxy(110,300,"(x,y)     Center point of circle");
	outtextxy(110,340,"radius    Radius of circle");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co26()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(195,0,"ellipse");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,100,"Declaration:");
	outtextxy(0,150,"void far ellipse(int x,int y,int stangle,int endangle,");
	outtextxy(0,190,"int xradius,int yradius);");
	setcolor(RED);
	outtextxy(110,250,"(x,y)     Center of ellipse");
	outtextxy(110,290,"xradius   Horizontal axis");
	outtextxy(110,330,"yradius   Vertical axis");
	outtextxy(110,370,"stangle   Starting angle");
	outtextxy(110,410,"endangle  Ending angle");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co27()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"pieslice");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration:");
	outtextxy(0,250,"void far pieslice(int x, int y, int stangle, int endangle, int radius);");
	setcolor(RED);
	settextstyle(3,0,1);
	outtextxy(110,320,"(x,y)      Center point of pieslice");
	outtextxy(110,350,"stangle    Start angle in degrees");
	outtextxy(110,380,"endangle   End angle in degrees");
	outtextxy(110,410,"radius     Radius of pieslice");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co28()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"rectangle");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200," Declaration: ");
	outtextxy(0,250,"void far rectangle(int left, int top, int right, int bottom);");
	setcolor(RED);
	outtextxy(110,300,"(left,top) is the upper left corner of the rectangle,");
	outtextxy(110,340,"and (right,bottom) is its lower right corner.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co29()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,10,"sector");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,100," Declaration: ");
	outtextxy(0,140,"void far sector(int x, int y, int stangle, int endangle,");
	outtextxy(0,180,"int xradius, int yradius);");
	setcolor(RED);
	outtextxy(110,220,"(x,y)     Center of sector ");
	outtextxy(110,260,"xradius   Horizontal axis");
	outtextxy(110,300,"yradius   Vertical axis");
	outtextxy(110,340,"stangle   Starting angle");
	outtextxy(110,380,"endangle  Ending angle");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co30()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(5,0,8);
	outtextxy(5,20,"<MATHS.H>");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,3);
	outtextxy(10,240,"Declares prototypes for the math functions");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co31()
	{
	cleardevice();
	setcolor(YELLOW);
	settextstyle(3,0,4);
	outtextxy(40,60,"1.ceil");
	outtextxy(40,100,"2.cos");
	outtextxy(40,140,"3.exp");
	outtextxy(40,180,"4.floor");
	outtextxy(40,220,"5.pow");
	outtextxy(40,260,"6.sin");
	outtextxy(40,300,"7.sqrt");
	outtextxy(40,340,"8.tan");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE");
	}

	void computer::co32()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"ceil");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration : double ceil(double x);");
	setcolor(RED);
	outtextxy(110,260,"ceil finds the smallest integer not < x.");
	outtextxy(110,320,"ceil returns the integer found as a double");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co33()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"cos");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: ");
	outtextxy(0,250,"double cos(double x);");
	setcolor(RED);
	outtextxy(110,300,"cos computes the cosine of the input value");
	outtextxy(110,350,"Angles are specified in radians.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co34()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"exp");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,170,"Declaration:");
	outtextxy(0,210,"double exp(double x);");
	outtextxy(0,250,"long double exp(long double (x)); ");
	setcolor(RED);
	outtextxy(110,290,"exp calculates e to the xth power");
	outtextxy(110,320,"exp calculates the exponential function e**x.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co35()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,0,"floor");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"declaration : double floor(double x);");
	setcolor(RED);
	outtextxy(110,260,"floor finds the largest integer not > x.");
	outtextxy(110,300,"floor returns the integer found as a double");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co36()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(195,0,"pow");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(40,100,"Declaration:");
	outtextxy(0,150,"double pow(double x, double y);");
	outtextxy(0,190,"long double pow(long double (x), long double (y));");
	setcolor(RED);
	outtextxy(110,250,"On success, pow returns the value calculated, x**y.");
	outtextxy(110,290,"If x and y are both 0, they return 1.");
	outtextxy(110,330,"If x is real and < 0, and y is not a whole number,");
	outtextxy(110,370," these functions give an error . ");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co37()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"sin");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: ");
	outtextxy(0,250,"double sin(double x);");
	setcolor(RED);
	outtextxy(110,300,"sin computes the sine of the input value");
	outtextxy(110,350,"Angles are specified in radians.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co38()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"sqrt");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: ");
	outtextxy(0,250,"double sqrt(double x);");
	setcolor(RED);
	outtextxy(110,300,"sqrt calculates the positive square root of");
	outtextxy(110,340,"the input value.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}

	void computer::co39()
	{
	cleardevice();
	setcolor(BLUE);
	settextstyle(3,0,8);
	outtextxy(205,50,"tan");
	setcolor(LIGHTMAGENTA);
	settextstyle(3,0,1);
	outtextxy(0,200,"Declaration: ");
	outtextxy(0,250,"double tan(double x);");
	setcolor(RED);
	outtextxy(110,300,"tan computes the sine of the input value");
	outtextxy(110,350,"Angles are specified in radians.");
	setcolor(LIGHTGREEN);
	settextstyle(2,0,6);
	outtextxy(30,440,"PRESS ENTER TO CONTINUE :");
	}
	void computer::cbg()
	{
	cleardevice();
	settextstyle(3,0,8);
	setcolor(LIGHTMAGENTA);
	outtextxy(130,180,"GRAPHICS");
	outtextxy(160,290,"DEMO");
	}

	void computer::cbg1()
	{
	cleardevice();
	while(!kbhit())
	{
	for(int i=0;i<640;i=i+40)
		{
			for(int j=0;j<480;j=j+40)
			{
				setcolor(random(14)+1);
				setfillstyle(1,random(14)+1);
				bar(i,j,40+i,40+j);
			}
		}
		delay(5);
	}
	}

	void computer::cbg2()
	{
	int x=0;
	cleardevice();
	while(!kbhit())
	{
	setcolor(random(15));
	circle(random(640),random(480),random(310));
	delay(30);
	x++;
	if(x>90)
	cleardevice();
	}
	}

	void computer::cbg3()
	{
	int x=0;
	cleardevice();
	while(!kbhit())
	{
	setcolor(random(15));
	arc(random(640),random(480),random(45),random(270),random(80));
	delay(30);
	x++;
	if(x>150)
	cleardevice();
	}
	}

	void computer::cbg4()
	{
	int xx,yy,x1,x2,y1,y2;
	cleardevice();

	while(!kbhit())
	{
		setcolor(random(14));
		xx=random(600);
		yy=random(400);
		x1=random(300);
		y1=random(200);
		x2=random(620);
		y2=random(450);
		moveto(xx,yy);
		lineto(x1,y1);
		lineto(x2,y2);
		lineto(xx,yy);
		delay(100);


	}
	}

	void computer::cbg5()
	{
	cleardevice();

	for (int i=EMPTY_FILL; i<USER_FILL; i++)
   {
       setcolor(BLUE);
       if(kbhit())
       break;
       setfillstyle(i,MAGENTA);
       sector(320,350, 45, 135, 400, 200);
       getch();
   }

	}

	void computer::cbg6()
	{
	cleardevice();
	setcolor(LIGHTBLUE);
	for (int i = EMPTY_FILL; i < USER_FILL; i++)
    {
    setfillstyle(i, LIGHTGREEN);
    fillellipse(320,240,300, 150);
    getch();
    }

	}

	void english::mmenu()
	{
	cleardevice();
	settextstyle(3,0,8);
	setcolor(LIGHTBLUE);
	outtextxy(130,180,"ENGLISH");
	}

	void english :: menu()
		{
		cleardevice();
		setcolor(YELLOW);
		outtextxy(100,60,"MENU");
		setcolor(LIGHTRED);
		outtextxy(60,120,"1. Format of formal letter");
		setcolor(DARKGRAY);
		outtextxy(60,220,"2. Format of informal letter");
		setcolor(RED);
		outtextxy(60,320,"3. Format of notice");
		setcolor(MAGENTA);
		outtextxy(60,420,"4. Format of note making");
		setcolor(LIGHTCYAN);
		outtextxy(100,460,"PRESS ENTER TO CONTINUE : ");
		}

	void english :: formal()
		{
		cleardevice();
		settextstyle(3,0,4);
		setcolor(LIGHTRED);
		outtextxy(100,30,"FORMAT OF FORMAL LETTER");
		settextstyle(3,0,1);
		setcolor(LIGHTGREEN);
		outtextxy(30,80,"Sender's Address");
		outtextxy(30,110,"Date");
		outtextxy(30,140,"Reciever's Address");
		outtextxy(30,170,"Salutation");
		outtextxy(30,200,"Subject");
		outtextxy(30,230,"________________________________");
		outtextxy(30,260,"________________________________");
		outtextxy(30,290,"____________BODY________________");
		outtextxy(30,320,"________________________________");
		outtextxy(30,350,"________________________________");
		outtextxy(30,380,"Thanking You");
		outtextxy(30,410,"Yours Truly/Faithfully/Obendiently");
		outtextxy(30,440,"Name");
		}

		void english :: informal()
		{
		cleardevice();
		settextstyle(3,0,4);
		setcolor(DARKGRAY);
		outtextxy(100,50,"FORMAT OF INFORMAL LETTER");
		settextstyle(3,0,1);
		setcolor(BLUE);
		outtextxy(30,110,"Sender's Address");
		outtextxy(30,140,"Date");
		outtextxy(30,170,"Salutation");
		outtextxy(30,200,"________________________________");
		outtextxy(30,230,"________________________________");
		outtextxy(30,260,"____________BODY________________");
		outtextxy(30,290,"________________________________");
		outtextxy(30,320,"________________________________");
		outtextxy(30,350,"Thanking You");
		outtextxy(30,380,"Yours affectionately/lovingly/sincerely");
		outtextxy(30,410,"Name");
		}

	void english :: notice()
		{
		cleardevice();
		settextstyle(3,0,4);
		setcolor(RED);
		outtextxy(200,30,"FORMAT OF NOTICE");
		settextstyle(3,0,1);
		setcolor(YELLOW);
		outtextxy(180,110,"Heading With Organisation");
		outtextxy(250,140,"Heading(TOPIC)");
		outtextxy(30,170,"Date Of Issue");
		outtextxy(30,200,"Content -");
		outtextxy(30,230,"a) Who");
		outtextxy(30,260,"b) What");
		outtextxy(30,290,"c) When -");
		outtextxy(30,320,"(i) Date");
		outtextxy(30,350,"(ii) Venue");
		outtextxy(30,380,"(iii) Time");
		outtextxy(30,410,"Signature With Designation And Phone No.");
		}

	void english :: note()
		{
		cleardevice();
		settextstyle(3,0,4);
		setcolor(MAGENTA);
		outtextxy(180,30,"FORMAT OF NOTE MAKING");
		settextstyle(3,0,1);
		setcolor(LIGHTCYAN);
		outtextxy(200,100,"Heading In Capital Letters");
		outtextxy(30,130,"1. Main Point");
		outtextxy(50,160,"a) Sub Point");
		outtextxy(50,190,"b) Sub Point");
		outtextxy(70,220,"(i) Sub Sub Point");
		outtextxy(70,250,"(ii) Sub Sub Point");
		outtextxy(30,280,"2. Main Point");
		outtextxy(50,310,"a) Sub Point");
		outtextxy(30,340,"3. Main Point");
		outtextxy(50,370,"a) Sub Point");
		outtextxy(50,400,"b) Sub Point");
		//outtextxy(30,,"Abbreviation Key");
		}

void smiley()
{
int x=10;
int a=20,b=30;
int ctr=0;
clrscr();

while(!kbhit())
{
setcolor(BLUE);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(320,240,150,150);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(260,200,a,b);
fillellipse(380,200,a,b);
a=a-1;
b=b-5;
if(b<5)
{
a=20;
b=30;
}
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
fillellipse(320,250,20,20);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,RED);
setlinestyle(SOLID_LINE,0,4);
setcolor(RED);
arc(320,330,180,1,x);
x+=5;
delay(150);
if(x>30)
x=10;
setcolor(LIGHTBLUE);
settextstyle(1,0,6);
outtextxy(10,400,"K E E P  S M I L I N G");
}
}
struct pts
{
int x;
int y;
}p[16];

star()
{
pts points[15];
int i, j;
int angle;
double  rads;

  angle = 0;

  randomize();

  while(!kbhit())
  {
  cleardevice();
  setcolor(random(15));
  for( i=0 ; i<15 ; ++i )
  {
    rads = (double)angle *3.14 / 180.0;
    points[i].x = 320 + (int)( cos(rads) * 225);
    points[i].y = 240 - (int)( sin(rads) * 225);
    angle += 24;
  }

  circle(320,240,225);

  for( i=0 ; i<15 ; ++i )
  {
    for( j=i ; j<15 ; ++j )
    {
      moveto(points[i].x, points[i].y);
      setlinestyle(SOLID_LINE,0,3);
      lineto(points[j].x, points[j].y);
    }
  }
  delay(200);
  }
  getch();
  }


		class quiz {
		int no;
		char ques[255];
		char a[50];
		char b[50];
		char c[50];
		char d[50];
		char ans;
		char as;
		int p;
		int ch;
		int m;
		int co;
		int e;

		public:

		int score;

		void display()
		{
		cout<<"Q."<<no<<ques<<endl;
		cout<<"a."<<a<<endl<<"b."<<b<<endl<<"c."<<c<<endl<<"d."<<d<<endl;
		cout<<"enter your choice :"<<endl;
		cin>>as;
		}

		void input()
		{
		cout<<"enter no. "<<endl;
		cin>>no;
		cout<<"enter question"<<endl;
		gets(ques);
		cout<<"enter choice a"<<endl;
		gets(a);
		cout<<"enter choice b"<<endl;
		gets(b);
		cout<<"enter choice c"<<endl;
		gets(c);
		cout<<"enter choice d"<<endl;
		gets(d);
		cout<<"enter correct answer choice"<<endl;
		cin>>ans;
		}

		void calc()
		{
		as=tolower(as);
		cout<<as<<"   "<<ans <<endl; getch();
		if(as==ans)

		switch(no)
		{
		case 1:p+=10; break;
		case 2:p+=10;break;
		case 3:ch+=10;break;
		case 4:ch+=10;break;
		case 5:m+=10;break;
		case 6:m+=10;break;
		case 7:co+=10;break;
		case 8:co+=10;break;
		case 9:e+=10;break;
		case 10:e+=10;break;
		}

		else if(as==27)
		switch(no)
		{
		case 1:
		case 2:p=0;break;
		case 3:
		case 4:ch=0;break;
		case 5:
		case 6:m=0;break;
		case 7:
		case 8:co=0;break;
		case 9:
		case 10:e=0;break;
		}

		else if(as!=ans)
		switch(no)
		{
		case 1:p-=5;break;
		case 2:p-=5;break;
		case 3:ch-=5;break;
		case 4:ch-=5;break;
		case 5:m-=5;break;
		case 6:m-=5;break;
		case 7:co-=5;break;
		case 8:co-=5;break;
		case 9:e-=5;break;
		case 10:e-=5;break;
		}
		score=p+ch+m+co+e;

		}

		}q;

		void create()
		{
		ofstream f1("quiz.dat",ios::binary);
		for(int i=0;i<10;i++)
		{
		q.input();
		f1.write((char*)&q,sizeof(q));
		}f1.close();
		}

		void run()
		{
		int s=0;
		ifstream f2("quiz.dat",ios::binary);
		for(int j=0;j<10;j++)
		{
		//q.display();
		f2.read((char*)&q,sizeof(q));
		q.display();
		q.calc();
		s=s+q.score;
		}f2.close();
		getch();
		clrscr();
		textcolor(LIGHTBLUE);
		cout<<endl<<"your score is:";
		cout<<s;
		}

		void qmenu()
		{
		cleardevice();
		setcolor(LIGHTBLUE);
		settextstyle(4,0,12);
		outtextxy(50,100,"QUIZ");
		outtextxy(10,450,"PRESS ANY KEY TO CONTINUE");
		}

		void quiz()
		{
		clrscr();
		//create();
		run();
		}


	     void main()
	     {
	     clrscr();

	     int gdriver = DETECT, gmode, errorcode;
	     initgraph(&gdriver, &gmode, "");

	     P.pmenu();
	     getch();
	     P.p1();
	     getch();
	     P.p2();
	     getch();
	     P.p3();
	     getch();
	     P.p4();
	     getch();
	     P.p5();
	     getch();
	     P.p6();
	     getch();

	     C.cmenu();
	     getch();
	     C.c1();
	     getch();
	     C.c2();
	     getch();
	     C.c3();
	     getch();
	     C.c4();
	     getch();
	     C.c5();
	     getch();
	     C.c6();
	     getch();
	     C.c7();
	     getch();
	     C.c8();
	     getch();
	     C.c9();
	     getch();
	     C.c10();
	     getch();
	     C.c11();
	     getch();
	     C.c12();
	     getch();
	     C.c13();
	     getch();
	     C.c14();
	     getch();
	     C.c15();
	     getch();
	     C.c16();
	     getch();
	     C.c17();
	     getch();
	     C.c18();
	     getch();
	     C.c19();
	     getch();
	     C.c20();
	     getch();
	     C.c21();
	     getch();
	     
	     M.mmmenu();
	     getch();
	     M.mmenu();
	     getch();
	     M.m1();
	     getch();
	     M.m2();
	     getch();
	     M.m3();
	     getch();
	     M.m4();
	     getch();
	     M.m5();
	     getch();
	     M.m6();
	     getch();
	     M.m7();
	     getch();
	     M.m8();
	     getch();

	     CO.commenu();
	     getch();
	     CO.comenu();
	     getch();
	     CO.co1();
	     getch();
	     CO.co2();
	     getch();
	     CO.co3();
	     getch();
	     CO.co4();
	     getch();
	     CO.co5();
	     getch();
	     CO.co6();
	     getch();
	     CO.co7();
	     getch();
	     CO.co8();
	     getch();
	     CO.co9();
	     getch();
	     CO.co10();
	     getch();
	     CO.co11();
	     getch();
	     CO.co12();
	     getch();
	     CO.co13();
	     getch();
	     CO.co14();
	     getch();
	     CO.co15();
	     getch();
	     CO.co16();
	     getch();
	     CO.co17();
	     getch();
	     CO.co18();
	     getch();
	     CO.co19();
	     getch();
	     CO.co20();
	     getch();
	     CO.co21();
	     getch();
	     CO.co22();
	     getch();
	     CO.co23();
	     getch();
	     CO.co24();
	     getch();
	     CO.co25();
	     getch();
	     CO.co26();
	     getch();
	     CO.co27();
	     getch();
	     CO.co28();
	     getch();
	     CO.co29();
	     getch();
	     CO.co30();
	     getch();
	     CO.co31();
	     getch();
	     CO.co32();
	     getch();
	     CO.co33();
	     getch();
	     CO.co34();
	     getch();
	     CO.co35();
	     getch();
	     CO.co36();
	     getch();
	     CO.co37();
	     getch();
	     CO.co38();
	     getch();
	     CO.co39();
	     getch();
	     CO.cbg();
	     getch();
	     CO.cbg1();
	     getch();
	     CO.cbg2();
	     getch();
	     CO.cbg3();
	     getch();
	     CO.cbg4();
	     getch();
	     CO.cbg5();
	     getch();
	     CO.cbg6();
	     getch();

	     E.mmenu();
	     getch();
	     E.menu();
	     getch();
	     E.informal();
	     getch();
	     E.formal();
	     getch();
	     E.note();
	     getch();
	     E.notice();
	     getch();
	     //qmenu();
	     //getch();

	     closegraph();

	     //quiz();
	     //getch();
	     initgraph(&gdriver, &gmode, "");
	     star();
	     smiley();
	     getch();
		  
	     }
