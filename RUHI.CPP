#include<graphics.h>
#include<dos.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int bkcolor=0;
class snp
{
	char pna[20];
	int score;
 public:snp(char n[20])
	{
		strcpy(pna,n);
		score=0;
	}
	void increase()
	{
		score=score+5;
	}
	void display()
	{
		cout<<"\n Player's name:"<<pna;
		cout<<"\n Score:"<<score;
	}
};
class word
{
	char wd[30];
	char hint[100];
 public:void input()
	{
		cout<<"\n Hint:";
		gets(hint);
		cout<<"\n Word:";
		gets(wd);
	}
	char* rethint()
	{
		return (hint);
	}
	void disw();
	word pickw();
	char* retwrd()
	{
		return wd;
	}

};
void createfile();//To create file having a list of words along with their hints.
void mainscr();//To display the main screen.
void sndscr();//To display the second screen.
void menu();//To display the menu.
void nugame(int n,snp &p);//To start a new game.
void op();//To open the options window.
void inst();//To display the instructions.
int bc();//To manipulate the background colour.
void tu();//To display the 'thank you' window.
void nugame2(int n,snp &p);//To start a game  with only 2 chances.
void nugame3(int n,snp &p);//To start a game with only 1 chance.
void go();//To display the GAME OVER window.
void showscore(); //To display the scores.
void showviews();//To show the views.
void display2();//To draw the figures for the 2nd chance.
void display3();//To draw the figures for the 3rd chance.
void display4();//To draw the figures for the last chance.


void main()
{
// createfile();
	int gd=DETECT;
	int gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
		randomize();
	/*ofstream a("thanku.dat",ios::binary);
	char s[]="FEEDBACK:";
	a.write((char*)&s,sizeof(s));
	a.close();  */


	mainscr();
	cleardevice();
	sndscr();
	cleardevice();
	menu();
	/*ofstream a("scores.dat",ios::binary);
	a.close();     */
	getch();
}
void createfile()
{
	//creating the list of words to play with
	word w;
	char choice='y';
	int i=1;
	ofstream a("wordlist.dat",ios::binary|ios::app);

	while(choice=='y')
	{
		w.input();
		a.write((char*)&w,sizeof(w));
		i++;
		cout<<"\n Enter another word(y\\n):";
		cin>>choice;
	}
	a.close();
	cout<<"\n the list of the words is saved.";
	getch();
}
void mainscr()
{
	//displaying the main screen.
	settextstyle(3,0,9);
	setcolor(12);
	outtextxy(98,100,"WORDZILLA");
	setcolor(BLUE);
	circle(302,335,50);
	settextstyle(3,0,4);
	line(322,324,338,314);
	line(274,308,288,324);
	outtextxy(280,300,".");
	outtextxy(326,300,".");
	arc(304,342,170,8,34);
	setcolor(MAGENTA);
	settextstyle(3,0,4);
	outtextxy(60,400,"Loading.....");
	for(int i=0;i<5;i++)
	{
		setcolor(BLACK);
		outtextxy(60,400,"Loading........");
		delay(2000);
		setcolor(MAGENTA);
		outtextxy(60,400,"Loading........");
		delay(2000);
	}
	delay(1000);
}
void sndscr()
{
	//printing the second screen.
	settextstyle(3,0,4);
	setcolor(WHITE);
	outtextxy(205,300,"Produced by:");
	line(202,340,400,340);
	outtextxy(305,380,"Ruhi Mudgil");
	delay(2000);
}
void menu()
{

	settextstyle(10,0,2);
	setcolor(14);
	outtextxy(100,100,"MENU:");
	settextstyle(9,0,2);
	setcolor(7);
	outtextxy(180,150,"1.New Game");
	outtextxy(280,250,"2.Options");
	outtextxy(380,350,"3.Exit");
	int i=1;
	char choice;
	do
	{  settextstyle(10,0,2);
		setcolor(i);
		outtextxy(33,15,"WELCOME TO THE MENU!!");
		delay(900);
		i++;
		setcolor(YELLOW);
		settextstyle(3,0,4);
		line(222,224,238,214);
		line(174,208,188,224);
		outtextxy(180,200,".");
		outtextxy(226,200,".");
		arc(204,242,170,8,34);
		if(kbhit())
		{
			choice=getch();

		}
	 if(i>15)i=1;



	if(choice=='1')
	{
		cleardevice();
		char r[20];
		cout<<"\n Enter player's name:";
		cin>>r;
		snp p(r);
		int y=bc();
		setbkcolor(bkcolor);
		nugame(y,p);
	}
	if(choice=='2')
		op();
	if(choice=='3')
		tu();
	}while(choice!='3');
}
void nugame(int n,snp &p)
{  setcolor(n);
	cleardevice();
	word x,y;
	y=x.pickw();
	settextstyle(1,0,3);
	outtextxy(78,80,"Guess the word!!");
	outtextxy(170,290,y.rethint());
	cout<<"\n\n\n\n\n";
	y.disw();
	//drawing the figures.
	circle(70,190,35);
	settextstyle(1,0,3);
	outtextxy(54,154,".");
	outtextxy(80,154,".");
	arc(68,194,180,2,20);
	circle(146,190,35);
	settextstyle(1,0,3);
	outtextxy(130,154,".");
	outtextxy(156,154,".");
	arc(144,194,180,2,20);
	circle(220,190,35);
	settextstyle(1,0,3);
	outtextxy(204,154,".");
	outtextxy(230,154,".");
	arc(218,194,180,2,20);
	//figures drawn.
	char s[100];
	 gotoxy(55,22);
	gets(s);
	if(strcmpi(s,y.retwrd())==0)
	{
		p.increase();
		cleardevice();
		setcolor(MAGENTA);
		settextstyle(1,0,3);
		outtextxy(100,100,"CORRECT ANSWER!");
		outtextxy(150,150,"Get ready for next word...");
		delay(1200);
		nugame(n,p);
	}
	else
	{
		cleardevice();
		setcolor(MAGENTA);
		settextstyle(1,0,5);
		outtextxy(100,100,"WRONG ANSWER!");
		settextstyle(1,0,3);
		outtextxy(50,200,"Get ready for next word...with only 2 chances.");
				delay(1200);
		nugame2(n,p);
	 }
}
word word::pickw()
{


	int n;
	word x;
	fstream a("wordlist.dat",ios::binary|ios::in|ios::out);
	if(!a){cout<<"cannot read from file";}
	a.seekg(0,ios::end);
	int size=a.tellg();
	a.seekg(0,ios::beg);
	n=random(size/(sizeof(x)));
	a.seekg(n*sizeof(x));
	a.read((char*)&x,sizeof(x));
	return x;
}
void word::disw()
{     gotoxy(55,22);

	for(int i=0;i<strlen(wd);i++)
	{
		if(isalpha(wd[i]))
		{
			cout<<"_";
		}
	}

}
void op()
{ 	char choice;
do{
	cleardevice();

	settextstyle(10,0,2);
	setcolor(14);
	outtextxy(100,10,"OPTIONS:");
	settextstyle(9,0,2);
	setcolor(7);
	outtextxy(80,150-100,"1.Background Color");
	outtextxy(80,250-120,"2.Instructions");
	outtextxy(80,350-130,"3.Scores");
	outtextxy(80,450-140,"4.View user's respond");
	outtextxy(80,550-150,"5.Return to the main menu.");
	 choice=getch();
	if(choice=='1')
		{ bkcolor=bc();
		 cout<<"press any key to return to menu";
			 getch();
			 }
	if(choice=='2')
			 inst();
	if(choice=='3')
		showscore();
	if(choice=='4')
		showviews();
	if(choice=='5')
	{ cleardevice();
		menu();
	}
  }while(1);
}
void inst()
{
	cleardevice();
	char chr[]="Welcome to WORDZILLA!! The game tests your IQ level!! So if you think that you have the knowledge of things and events happening around you and still have the 'nitty-gritties' of what you have studied in your elementary classes then you must be able to play the game. \nThe job is simple! \nYou'll be given a hint and on the basis of that hint you have to guess the word. The word can be a name of a person,place or any 'DAMN' thing on this planet.In the first go, you have three chances to guess your word.If you are able to do so, then you get another word which you have to guess.But if you fail to guess the word then you get another word with only two chances.If you guess the word then you'll be given a new word with only two chances to guess. Unfortunately, if you fail then you will be given a new word with only one chance to guess.For every correct answer, you get 5 points. \nIf you are not able to guess a word in one chance, THE GAME IS OVER DUDE!!!.......Happy thinking and all the best!!!...";
	cout<<chr;
	cout<<"\n \n \n";
	cout<<"\n To return to the  menu, press enter.";
	  getch();
 /*	  cleardevice();
		menu();
		*/
}
void tu()
{
	cleardevice();
	char s[150];
	ofstream a("thanku.dat",ios::binary|ios::app);
	cout<<"\n THANK YOU FOR PLAYING 'WORDZILLA'.";
	cout<<"\n HOPE YOU ENJOYED IT.";
	cout<<"\n Please enter your views about the game (only the good ones..):";
	gets(s);
	a.write((char*)&s,sizeof(s));
	a.close();
	exit(0);
}
void nugame2(int n,snp &p)
{
	cleardevice();
	word x,y;
	y=x.pickw();
	settextstyle(1,0,3);
	setcolor(n);
	outtextxy(78,80,"Guess the word!!");

	outtextxy(170,290,y.rethint());
	cout<<"\n\n\n\n\n";
	y.disw();
	//invoking the function to draw the figures.
	display2();
	char s[100];
	 gotoxy(55,22);
	gets(s);
	if(strcmpi(s,y.retwrd())==0)
	{
		p.increase();
		cleardevice();
		setcolor(MAGENTA);
		settextstyle(1,0,3);
		outtextxy(100,100,"CORRECT ANSWER!");
		outtextxy(150,150,"Get ready for next word...");
				delay(1200);
		nugame2(n,p);
	}
	else
	{
		cleardevice();
		setcolor(MAGENTA);
		settextstyle(1,0,5);
		outtextxy(100,100,"WRONG ANSWER!");
		settextstyle(1,0,3);
		outtextxy(50,200,"Get ready for next word...with only 1 chance.");
				delay(1200);
		nugame3(n,p);
	}
}
void nugame3(int n,snp &p)
{
	cleardevice();
	word x,y;
	y=x.pickw();
	settextstyle(1,0,3);
	setcolor(n);

	outtextxy(78,80,"Guess the word!!");
	outtextxy(170,290,y.rethint());
	cout<<"\n\n\n\n\n";
	y.disw();
	//invoking the func to draw the figures.
	display3();
	char s[100];
	 gotoxy(55,22);
	gets(s);
	if(strcmpi(s,y.retwrd())==0)
	{
		p.increase();
		cleardevice();
		setcolor(MAGENTA);
		settextstyle(1,0,3);
		outtextxy(100,100,"CORRECT ANSWER!");
		outtextxy(150,150,"Get ready for next word...");
				delay(1200);
		nugame3(n,p);
	}
	else
	{
		display4();
		delay(2000);
		ofstream a("scores.dat",ios::binary|ios::app);
		a.write((char*)&p,sizeof(p));
		a.close();
		delay(300);
		go();
		outtextxy(50,455,"PRESS ANY KEY TO REURN TO MAIN MENU");
		getch();
		setbkcolor(0);
		cleardevice();
		menu();
	}
}
void go()
{
	cleardevice();
	setcolor(WHITE);
	settextstyle(1,0,7);
	outtextxy(98,100,"GAME OVER!");
	int i=0;
	do
	{
		setcolor(YELLOW);
		circle(304,335,50);
		settextstyle(3,0,4);
		line(322,324,338,314);
		line(274,308,288,324);
		outtextxy(280,300,".");
		outtextxy(326,300,".");
		arc(304,342,170,8,34);
		setcolor(BLACK);
		circle(304,335,50);
		settextstyle(3,0,4);
		line(322,324,338,314);
		line(274,308,288,324);
		outtextxy(280,300,".");
		outtextxy(326,300,".");
		arc(304,342,170,8,34);
		delay(1000);
		setcolor(YELLOW);
		circle(304,335,50);
		settextstyle(3,0,4);
		line(322,324,338,314);
		line(274,308,288,324);
		outtextxy(280,300,".");
		outtextxy(326,300,".");
		arc(304,342,170,8,34);
		delay(1000);
		i++;
	}while(i<5);
	setcolor(11);
	settextstyle(1,0,3);
	outtextxy(100,397,"Better Luck next time.......");
}
int bc()
{
	cleardevice();
	setcolor(WHITE);
	settextstyle(1,0,2);
	int choice;
	outtextxy(56,86,"Select the colour in which you want to play the game:");
	setcolor(BLUE);
	outtextxy(67,128,"1.Blue");
	setcolor(YELLOW);
	outtextxy(67,148,"2.Yellow");
	setcolor(GREEN);
	outtextxy(67,168,"3.Green");
	setcolor(BROWN);
	outtextxy(67,188,"4.Brown");
	setcolor(RED);
	outtextxy(67,208,"5.Red");
	setcolor(CYAN);
	outtextxy(67,228,"6.Cyan");
	setcolor(MAGENTA);
	outtextxy(67,248,"7.Magenta");

		setcolor(BLUE);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 1 for blue colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 1 for blue colour...");
		delay(1000);
		setcolor(YELLOW);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 2 for yellow colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 2 for yellow colour...");
		delay(1000);
		setcolor(GREEN);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 3 for green colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 3 for green colour...");
		delay(1000);
		setcolor(BROWN);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 4 for brown colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 4 for brown colour...");
		delay(1000);
		setcolor(RED);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 5 for red colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 5 for red colour...");
		delay(1000);
		setcolor(CYAN);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 6 for cyan colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 6 for cyan colour...");
		delay(1000);
		setcolor(MAGENTA);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 7 for magenta colour...");
		delay(1000);
		setcolor(BLACK);
		settextstyle(3,0,3);
		outtextxy(120,397,"Press 7 for magenta colour...");
		delay(1000);
	cout<<"choice:";
	cin>>choice;
	switch(choice)
	{ case 1:choice=1;break;
	  case 2:choice=14;break;
	  case 3:choice= 2;break;
	  case 4:choice= 6;break;
	  case 5:choice= 4;break;
	  case 6:choice= 3;break;
	  case 7:choice= 5;break;
		}
	return choice;
}
void showscore()
{
	cleardevice();
	snp n("plr1");
	ifstream a("scores.dat",ios::binary);
	if(!a)cout<<"cannot open file";
	while(a.read((char*)&n,sizeof(n)))
	{
		n.display();
	}
	a.close();
		cout<<"\n To return to the  menu, press enter.";
	  getch();

}
void showviews()
{
	cleardevice();
	char s[150];
	ifstream a("thanku.dat",ios::binary);
	if(!a){cout<<"cannot open file";}
	while(a.read((char*)&s,sizeof(s)))
	{

		cout<<s<<endl;

	}
	a.close();
	cout<<"\n To return to the  menu, press enter.";
	  getch();
}
void display2()
{
	//figures for 2nd chance
	circle(70,190,35);
	settextstyle(1,0,3);
	outtextxy(54,154,".");
	outtextxy(80,154,".");
	arc(68,194,180,2,20);
	line(43,221,104,160);
	line(43,160,104,221);
	circle(146,190,35);
	settextstyle(1,0,3);
	outtextxy(130,154,".");
	outtextxy(156,154,".");
	arc(144,194,180,2,20);
	circle(220,190,35);
	settextstyle(1,0,3);
	outtextxy(204,154,".");
	outtextxy(230,154,".");
	arc(218,194,180,2,20);
	//figures drawn.
}
void display3()
{
	circle(70,190,35);
	settextstyle(1,0,3);
	outtextxy(54,154,".");
	outtextxy(80,154,".");
	arc(68,194,180,2,20);
	line(43,221,104,160);
	line(43,160,104,221);
	circle(146,190,35);
	settextstyle(1,0,3);
	outtextxy(130,154,".");
	outtextxy(156,154,".");
	arc(144,194,180,2,20);
	line(117,221,178,160);
	line(117,160,178,221);
	circle(220,190,35);
	settextstyle(1,0,3);
	outtextxy(204,154,".");
	outtextxy(230,154,".");
	arc(218,194,180,2,20);
}
void display4()
{
	circle(70,190,35);
	settextstyle(1,0,3);
	outtextxy(54,154,".");
	outtextxy(80,154,".");
	arc(68,194,180,2,20);
	line(43,221,104,160);
	line(43,160,104,221);
	circle(146,190,35);
	settextstyle(1,0,3);
	outtextxy(130,154,".");
	outtextxy(156,154,".");
	arc(144,194,180,2,20);
	line(117,221,178,160);
	line(117,160,178,221);
	circle(220,190,35);
	settextstyle(1,0,3);
	outtextxy(204,154,".");
	outtextxy(230,154,".");
	arc(218,194,180,2,20);
	line(191,221,252,160);
	line(191,160,252,221);
}