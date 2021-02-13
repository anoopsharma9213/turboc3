/*
Programme Title	:	METRO PROJECT
Programmer      : 	TANIA SINGLA & PREETI
Note:	Please press ENTER or any key only when asked
*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<DOS.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>//FOR FILE HANDLING
#include<string.h>

//DEFINED FUNCTIONS
void ms()
	   {

	  cleardevice();
 setbkcolor(0);
 setcolor(6);
rectangle(90,120,550,360);
  setcolor(5);
rectangle(70,100,570,380);
setcolor(2);
rectangle(50,80,590,400);
  setcolor(9);
rectangle(30,60,610,420);
setcolor(10);
rectangle(110,140,530,340);
settextstyle(1,0,4);
setcolor(3);
outtextxy(122,180," DELHI METRO RAILWAYS ");
delay(3000);
     cleardevice();
     setbkcolor(6);
     settextstyle(1,0,7);
     setcolor(13);
     outtextxy(30,150,"MADE BY:-");
     setcolor(11);
     outtextxy(50,220,"TANIA SINGLA");
     outtextxy(50,290,"& PREETI"); delay(3000);
		cleardevice();
	   }


	   void load()
	   {
	   cleardevice();
	   setbkcolor(0);
	    settextstyle(0,0,0);
	   setcolor(15);
outtextxy(280,320,"Loading");

rectangle(230,310,380,335);

for (int j=0; j<150; j++)
   {
     setfillstyle(1,4);
     bar3d(230,310,231+j,335,0,0);
     delay(50);
   }
	   }


	   class pass
	   {
	   public:
	   char ch;
		char name[40];
		char age[10];
		char father_name[40];
		char mother_name[40];
		char address[40];
		char phone_no[15];

		char* retname()
		{
		return name;
		}

		void input()
		{
		gotoxy(3,5);
		cout<<"Enter your name	:	";
		gets(name);
		gotoxy(3,7);
		cout<<"Enter your age	:	";
		gets(age);
		gotoxy(3,9);
		cout<<"Enter your father's name	:	";
		gets(father_name);
		gotoxy(3,11);
		cout<<"Enter your mother's name	:	";
		gets(mother_name);
		gotoxy(3,13);
		cout<<"Enter your address	:	";
		gets(address);
		gotoxy(3,15);
		cout<<"Enter your phone number	:	";
		gets(phone_no);
		}


		void display()
		{
		gotoxy(3,5);
		cout<<"NAME	:	"<<name;
		delay(1500);
		gotoxy(3,7);
		cout<<"AGE	:	"<<age;
		delay(1500);
		gotoxy(3,9);
		cout<<"FATHER's NAME	:	"<<father_name;
		delay(1500);
		gotoxy(3,11);
		cout<<"MOTHER's NAME	:	"<<mother_name;
		delay(1500);
		gotoxy(3,13);
		cout<<"ADDRESS	:	"<<address;
		delay(1500);
		gotoxy(3,15);
		cout<<"PHONE NUMBER	:	"<<phone_no;
		delay(1500);
		gotoxy(3,17);
		}

	   }A;


	   class metro: public pass
	   {
	   public:
	   char cho;
	   char option;
	   void menu()
	   {
	   cleardevice();
	   setcolor(10);
	   setbkcolor(4);
	   settextstyle(3,0,2);
	   for(int x=610;x>=5;x--)
	   {
	    outtextxy(x,450,"<>");
	   }

	   settextstyle(3,0,2);
	   for(x=610;x>=5;x--)
	   {
	    outtextxy(x,0,"<>");
	   }
	    setcolor(1);
	    settextstyle(3,1,4.5);
	    outtextxy(x,50,"D E L H I   M E T R O");
	    setcolor(7);
	    settextstyle(3,0,5);
	    outtextxy(250,30,"M E N U");
	    outtextxy(246,37,"______");
	    setcolor(12);
	    settextstyle(1,0,3);
	    outtextxy(100,100,"1.	ARRIVAL/DEPARTURE SCHEDULE");
	    outtextxy(100,125,"2.	METRO STATIONS (LOCATIONS)");
	    outtextxy(100,150,"3.	PASS DETAILS");
	    outtextxy(100,175,"4.	DO's & DONT's");
	    outtextxy(100,200,"5.	HELPLINE NUMBERS");
	    outtextxy(100,225,"6.	EXIT");
	    gotoxy(74,25);
		option=getch();
		cleardevice();

		switch(option)
		{
		case '1':
		{
		ads();
		break;
		}

		case '2':
		{
		msl();
		break;
		}

		case '3':
		{
		mak();
		break;
		}

		case '4':
		{
		dad();
		break;
		}

		case '5':
		{
		hlno();
		break;
		}

		case '6':
		{
		exit();
		break;
		}

		default:
		{

		 def();
		 menu();
		 break;
		}

		}
	       }

	       void def()
	       {
		setcolor(17);
	    setbkcolor(12);
	    settextstyle(3,0,7);
	    outtextxy(95,30," S O R R Y !!");
	    outtextxy(80,130,"  W R O N G");
	    outtextxy(40,230,"   C H O I C E  ");
	    delay(1000);
	    cleardevice();
	       }

		 void ads()
	    {
	    setcolor(45);
	    setbkcolor(1);
	    settextstyle(3,0,7);
	    outtextxy(90,30,"A R R I V A L");
	    outtextxy(260,130,"&");
	    outtextxy(30,230,"D E P A R T U R E");
	    outtextxy(60,330,"S C H E D U L E");

		delay(3000);
		cleardevice();
		char ch;
		int key;
		gotoxy(1,1);
		ifstream fil("C:\\TC\\BIN\\METRO\\ADS.txt");
		while(fil)
		{
		fil.get(ch);
		cout<<ch;
		}
		getch();
		menu();
		}

		void msl()
		{
		setcolor(42);
	    setbkcolor(8);
	    settextstyle(3,0,7);
	    outtextxy(95,30,"  M E T R O");
	    outtextxy(80,130,"S T A T I O N S");
	    outtextxy(40,230,"L O C A T I O N S ");


		delay(3000);
		cleardevice();
		char ch;
		gotoxy(1,1);
		ifstream fil("C:\\TC\\BIN\\METRO\\MSL.txt");
		while(fil)
		{
		fil.get(ch);
		cout<<ch;
		}
		getch();
		menu();
		}

		void mak()
		{

		cleardevice();

		setcolor(43);
	    setbkcolor(9);
	    settextstyle(1,0,7);
	    outtextxy(95,30,"   P A S S ");
	    outtextxy(40,170,"  D E T A I L S ");

		delay(3000);
		cleardevice();
		char choice;
		gotoxy(1,1);
		cout<<endl<<endl<<"	      P A S S   D E T A I L S'S   M E N U"<<endl<<endl;
		cout<<"	1.	Make a new pass"<<endl<<endl;
		cout<<"	2.	Modify pass details"<<endl<<endl;
		cout<<"	3.	Display your details"<<endl<<endl;
		cout<<"	4.	Delete a pass"<<endl<<endl;
		cout<<"	5.	Exit"<<endl<<endl;
		cout<<"	Choose an option	      :   ";
		cin>>choice;
		cleardevice();

		char op;
		switch(choice)
		{
		case '1':
		{

		cleardevice();


		do
		{

		ofstream f1("pass.txt",ios::binary|ios::trunc);
		ifstream f2("pass.txt",ios::binary);
		cleardevice();
		A.input();
		f1.write((char*)&A,sizeof(A));
		f1.close();
		cleardevice();
		while(f2.read((char*)&A,sizeof(A)))
		{
		A.display();
		}
		cout<<"Is the information correct (y/n)	  :	";
		cin>>op;

		f2.close();
		}
		while(op=='n');
		cout<<endl<<endl<<endl<<"Your pass has been seccesfully made";
		cout<<endl<<endl<<"HIT ANY KEY TO CONTINUE";
		getch();
		mak();
		break;
		}

		case '2':
		{


		do
		{
		cleardevice();
		gotoxy(20,2);
		cout<<"Enter the new details";
		ofstream f1("pass.txt",ios::binary|ios::trunc);
		ifstream f2("pass.txt",ios::binary);
		A.input();
		f1.write((char*)&A,sizeof(A));
		f1.close();
		cleardevice();
		while(f2.read((char*)&A,sizeof(A)))
		{
		A.display();
		}
		cout<<"Is the information correct (y/n)	  :	";
		cin>>op;

		f2.close();
		}
		while(op=='n');
		cout<<endl<<endl<<endl<<"Your pass has been seccesfully modified";
		cout<<endl<<endl<<"HIT ANY KEY TO CONTINUE";
		getch();
		mak();
		break;
		}


		case '3':
		{
		cleardevice();
		gotoxy(20,2);
		cout<<"Here are your details:";
		ifstream f2("pass.txt",ios::binary);

		while(f2.read((char*)&A,sizeof(A)))
		{
		A.display();
		}
		f2.close();
		cout<<endl<<endl<<"        HIT ANY KEY TO CONTINUE";
		getch();
		mak();
		break;
		}


		case '4':
		{
		char ch1;
		cleardevice();
		gotoxy(20,2);
		cout<<"Here are your details:";
		ifstream f2("pass.txt",ios::binary);

		while(f2.read((char*)&A,sizeof(A)))
		{
		A.display();
		}
		f2.close();
		cout<<endl<<endl<<"    Are you sure you want to delete the above mentioned record (y/n)	:";
		cin>>ch1;
		if(ch1=='y')
		{
		ofstream f1("pass.txt",ios::binary|ios::trunc);
		f1.close();
		cout<<"   Your pass has been succesfully deleted";
		cout<<endl<<endl<<"   HIT ANY KEY TO CONTINUE";
		getch();
		mak();

		}


		else if(ch1=='n')
		{
		mak();
		}

		else
		{
		cout<<"   Sorry wrong choice!!!";
		cout<<endl<<endl<<"   HIT ANY KEY TO CONTINUE";
		getch();
		mak();
		}

		getch();
		break;
		}

		case '5':
		{
		menu();
		break;
		}

		default:
		{
		def();
		mak();
		break;
		}
		}
		}

		void dad()
		{



		setcolor(2);
	    setbkcolor(15);
	    settextstyle(1,0,9);
	    outtextxy(95,30," D O ' S");
	    outtextxy(70,140,"  A N D");
	    outtextxy(40,250," D O N T 'S");


		delay(3000);
		cleardevice();
		settextstyle(5,0,8);
		outtextxy(10,2,"PRESS: ");
		outtextxy(10,102,"A FOR DO'S ");
		outtextxy(10,202,"B FOR DONT'S ");
		outtextxy(10,302,"C FOR EXIT");
		cho=getch();
		cleardevice();
		dad1();
		}
		void dad1()
		{

		gotoxy(1,1);
		switch(cho)
		{
		case 'a':
		case 'A':
		{
		cleardevice();
		dos();
		dad();
		break;
		}

		case 'b':
		case 'B':
		{
		cleardevice();
		donts();
		dad();
		break;

		}

		case 'c':
		case 'C':
		{
		cleardevice();
		menu();
		break;
		}

		default:
		{
		def();
		dad();
		break;
		}
		}
		}
		void dos()
		{
		char ch;

		gotoxy(1,1);
		ifstream fil("C:\\TC\\BIN\\METRO\\DO.txt");
		while(fil)
		{
		fil.get(ch);
		cout<<ch;
		}
		getch();
		cleardevice();
		}

	       void donts()
	       {
	       char ch1;
	       gotoxy(1,1);
		ifstream fil("C:\\TC\\BIN\\METRO\\DONT.txt");
		while(fil)
		{
		fil.get(ch1);
		cout<<ch1;
		}
		getch();
		cleardevice();
	       }

	       void hlno()
	       {
		setcolor(9);
	    setbkcolor(12);
	    settextstyle(1,0,8);
	    outtextxy(125,30," H E L P ");
	    outtextxy(125,140," L I N E");
	    outtextxy(30,250,"N U M B E R S");

	    delay(3000);
		cleardevice();
		setcolor(9);
		settextstyle(9,0,1);
	       outtextxy(20,10,"H E L P L I N E    N U M B E R S");
	       outtextxy(25,60,"1.     1800-9878-987");
	       outtextxy(25,110,"2.    	 1867-8767-245");
	       outtextxy(25,160,"3.     011-87675672");
	       outtextxy(25,210,"4.     011-23456765");
	       outtextxy(25,300,"HIT ANY KEY TO CONTINUE");
	       getch();
	       menu();
	       }

	       void exit()
	       {
	       cleardevice();
	       setbkcolor(0);



	       char *s[]={"G","U","I","D","E","D"," ","B","Y",":"};
	       char *s1[]={"M","R","S"," ","G","H","O","S","H"};

int j=0;
int k=2;
settextstyle(1,0,7);
for(int i=0;i<10;i++)
{
k++;
j+=50;
setcolor(k);
outtextxy(j,30,s[i]);
delay(600);
}


j=50;
settextstyle(8,0,7);
for(i=0;i<9;i++)
{
k++;
j+=50;
setcolor(RED);
outtextxy(j,120,s1[i]);
delay(600);
}
delay(1000);
	       cleardevice();

    setcolor(0);
	       settextstyle(2,0,7);
  setcolor(7);
  outtextxy(180,50,"DELHI METRO RAILWAYS 2007");
  setcolor(10);
  settextstyle(2,0,5);
  outtextxy(80,130,"Copyright* Delhi Metro Railways 1990-2008. All rights reserved.");
  outtextxy(80,180,"Warning :This Computer program is protected by copyright law and ");
  outtextxy(80,210," international treaties. Unauthorized reproduction or distribution ");
  outtextxy(80,240," of this program,or any portion of it may result in penalties. ");
  outtextxy(80,300," This product is licensed to :");
  outtextxy(300,320,"Tania Singla & Preeti");
  setcolor(YELLOW);
  settextstyle(11,0,2);
  outtextxy(500,460,"Press any Key");
	  getch();
	  cleardevice();
	       }
	    };


	  //MAIN FUNCTION

	   void main()
	   {
	    clrscr();
	    int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,"");
	    ms();
	    load();
	    metro obj;
	    obj.menu();
	   }