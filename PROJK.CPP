#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<time.h>

class registerform{
		char n[25],add[25],checkin[11],checkout[11];
		int x,i,a,no,lux,tour,food;
		public: void display()
			     {
			     gotoxy(25,3);
			     cout<<"REGISTER A NEW CUSTOMER"<<endl;
			     }
			//void datefn(char checkin[11],int &a);
			void underline();
			void input();
			void services();
			void show();
			char* retname()
				{ return n; }
			char* retcheckin()
				{ return checkin; }
			void addchange()
				{
				gets(add);
				}

		  }y;


/////////////////////////////////////////////////////////////////////////
/////////////VOID UNDERLINE()  --  OF CLASSregisterform/////////////////
/////////////////////////////////////////////////////////////////////////


void registerform::underline()
{ gotoxy(24,4);
  for(i=0;i<25;i++)
  cout<<"_";
}

/////////////////////////////////////////////////////////////////////////
//////////////////INTRETURN_DATE()//////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

int return_date(char ch)
	{
	int a1;
	switch(ch)
		{
		case '1': {a1=1;  break;}
		case '2': {a1=2;  break;}
		case '3': {a1=3;  break;}
		case '4': {a1=4;  break;}
		case '5': {a1=5;  break;}
		case '6': {a1=6;  break;}
		case '7': {a1=7;  break;}
		case '8': {a1=8;  break;}
		case '9': {a1=9;  break;}
		case '0': {a1=0;  break;}
		}
	return a1;
	}

/////////////////////////////////////////////////////////////////////////
///////////////////////////VOIDDATEFN()/////////////////////////////////
/////////////////////////////////////////////////////////////////////////

void datefn(char checkin[11],int&a)
{
int a1,b1,c1,d1,g1,h1,i1,j1;

a1 = return_date(checkin[0]);
b1 = return_date(checkin[1]);
c1 = return_date(checkin[3]);
d1 = return_date(checkin[4]);
g1 = return_date(checkin[6]);
h1 = return_date(checkin[7]);
i1 = return_date(checkin[8]);
j1 = return_date(checkin[9]);

int date=a1*10 + b1;
int month=c1*10 + d1;
int year=g1*1000 + h1*100 + i1*10 + j1;

if(year<2005 || year>2010 || month>12)
	a++;
if(year%4 == 0 && month==2 && date>29)
	a++;
if(year%4 != 0 && month==2 && date>28)
	a++;

if(month<8 && month%2 !=0 && date>31)
	a++;
if(month<8 && month%2 == 0 && date>30)
	a++;
if(month>=8 && month%2 ==0 && date>30)
	a++;
if(month>=8 && month%2 !=0 && date>31)
	a++;


}


////////////////////////////////////////////////////////////////////////
///////////////VOID INPUT()  --  OF CLASSregisterform//////////////////
////////////////////////////////////////////////////////////////////////

void registerform::input()
	{
	  gotoxy(5,6);
	  cout<<"Enter the name of the customer"<<'\t'<<"-";
	  gets(n);
	  gotoxy(5,8);
	  cout<<"Enter the address             "<<'\t'<<"-";
	  gets(add);
	  for(i=0;i<25;i++)
		 {
		 gotoxy(5,10);
		 cout<<"TYPE OF ROOM REQUIRED ?";
		 gotoxy(5,11);
		 cout<<endl;
		 cout<<"1. suite"<<endl;
		 cout<<"2. single"<<endl;
		 cout<<"3. double"<<endl;
		 cout<<"4. business"<<endl;
		 cout<<"5. towers"<<endl;
		 gotoxy(5,17);
		 cout<<"-";
		 gotoxy(5,17);
		 cin>>x;
		 if(x==1 || x==2 || x==3 || x==4 || x==5)
			 break;
		 else
			{
			gotoxy(7,17);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(7,17);
			cout<<"           ";
			gotoxy(7,17);
			}
		 }
	  gotoxy(5,20);
	  cout<<"No. of rooms required"<<'\t'<<"-";
	  cin>>no;
	  for(i=0;i<9;i++)
		{
		gotoxy(5,23);
		cout<<"Enter the checkin date(dd/mm/yyyy)"<<'\t'<<"-";
		gotoxy(48,23);
		gets(checkin);
		a=0;
		datefn(checkin,a);
		if(a!=0)
			{
			gotoxy(48,23);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(48,23);
			cout<<"           ";
			}
		else break;
		}
	  for(i=0;i<9;i++)
		{
		gotoxy(5,25);
		cout<<"Enter the checkout date(dd/mm/yyyy)"<<'\t'<<"-";
		gotoxy(48,25);
		gets(checkout);
		a=0;
		datefn(checkout,a);
		if(a!=0)
			{
			gotoxy(48,25);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(48,25);
			cout<<"           ";
			}
		else break;
		}
	  for(i=0;i<9;i++)
		{
		gotoxy(5,28);
		cout<<"Luxurious activity needed(1. GYM 2.SWIMMING)"<<'\t'<<"-";
		gotoxy(57,28);
		cin>>lux;
		if(lux!=1 && lux!=2)
			{
			gotoxy(57,28);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(57,28);
			cout<<"           ";
			}
		else break;
		}
	  clrscr();
	  services();
	  clrscr();
	  }

/////////////////////////////////////////////////////////////////////////
///////////////VOID SERVICES()  --  OF CLASSregisterform////////////////
/////////////////////////////////////////////////////////////////////////


void registerform::services()
	{
	gotoxy(25,2);
	cout<<"* TOURS CHARGES-";
	gotoxy(5,4);
	cout<<"1. Ist Class"<<'\t'<<'\t'<<"Rs. 30000";
	gotoxy(5,5);
	cout<<"2. IInd Class"<<'\t'<<'\t'<<" Rs.25000";
	gotoxy(5,6);
	cout<<"3. IIIrd Class"<<'\t'<<'\t'<<" Rs.20000";
	gotoxy(25,9);
	cout<<"* FOOD-";
	gotoxy(5,10);
	cout<<"1. Indian                     Rs. 1500/day";
	gotoxy(5,11);
	cout<<"2. Continental                Rs. 1000/day";
	gotoxy(5,12);
	cout<<"3. Chinese                    Rs. 750/day";
	gotoxy(5,13);
	cout<<"4. Thai                        Rs. 500/day";
	gotoxy(5,14);
	cout<<"5. Mughlai                     Rs. 250/day";
	for(i=0;i<20;i++)
		{
		gotoxy(5,18);
		cout<<"Enter your chice of tour       -";
		gotoxy(55,18);
		cin>>tour;
		if(tour==1 || tour==2 || tour==3)
			break;
		else
			{
			gotoxy(55,18);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(55,18);
			cout<<"           ";
			}
		}
	for(i=0;i<20;i++)
		{
		gotoxy(5,21);
		cout<<"Enter your choice of food       -";
		gotoxy(55,21);
		cin>>food;
		if(food==1 || food==2 || food==3 || food==4 || food==5)
			break;
		else
			{
			gotoxy(55,21);
			cout<<"WRONG INPUT";
			delay(1000);
			gotoxy(55,21);
			cout<<"           ";
			}
		}
	}


/////////////////////////////////////////////////////////////////////////
////////////////////////////VOIDINFORMATION/////////////////////////////
/////////////////////////////////////////////////////////////////////////


void information()
{
clrscr();
gotoxy(21,4);
cout<<" ~_~    INFORMATION ABOUT RATES    ~_~ ";
gotoxy(21,5);
gotoxy(5,6);
cout<<"TYPE OF ROOM :  -";

gotoxy(10,8);
cout<<"1.  SUITE";
gotoxy(50,8);
cout<<"Rs. 2500/- per DAY";
gotoxy(10,10);
cout<<"2.  SINGLE";
gotoxy(50,10);
cout<<"Rs. 3000/- per DAY";
gotoxy(10,12);
cout<<"3.  DOUBLE";
gotoxy(50,12);
cout<<"Rs. 3500/- per DAY";
gotoxy(10,14);
cout<<"4.  BUSINESS";
gotoxy(50,14);
cout<<"Rs. 4000/- per DAY";
gotoxy(10,16);
cout<<"5.  SHERATON TOWERS";
gotoxy(50,16);
cout<<"Rs. 4500/- per DAY";


gotoxy(5,20);
cout<<"LUXURIOUS ACTIVITIES :  -";
gotoxy(10,22);
cout<<"1.  GYM";
gotoxy(50,22);
cout<<"Rs. 1000/- per HEAD";
gotoxy(10,24);
cout<<"1.  SWIMMING";
gotoxy(50,24);
cout<<"Rs. 1100/- per HEAD";

gotoxy(5,28);
cout<<"SALES TAX .";
gotoxy(50,28);
cout<<"10% ";

getch();
}

/////////////////////////////////////////////////////////////////////////
/////////////////////VOIDREGISTER_CUSTOMER//////////////////////////////
/////////////////////////////////////////////////////////////////////////

void register_customer()
{
clrscr();
y.display();
y.underline();
y.input();
ofstream f1("c:\\hotel.dat",ios::binary | ios::app);
f1.write((char*)&y,sizeof(y));
f1.close();
y.show();
delay(1500);
clrscr();

}
/////////////////////////////////////////////////////////////////////////
//////////////VOID SHOW()  --  OF CLASSregisterform/////////////////////
/////////////////////////////////////////////////////////////////////////


void registerform::show()
	{
	clrscr();
	gotoxy(25,13);
	cout<<"DATA INPUTED BY THE USER -";
	gotoxy(17,15);
	cout<<"Name of the customer             -";
	puts(n);
	gotoxy(17,17);
	cout<<"Address of the customer          -";
	puts(add);
	gotoxy(17,19);
	cout<<"Checkin date                     -";
	puts(checkin);
	gotoxy(17,21);
	cout<<"Checkout Date                    -";
	puts(checkout);
	gotoxy(17,23);
	cout<<"No. of rooms asked for           -"<<no;
	gotoxy(17,25);
	cout<<"Type of room asked for           -";
	if(x==1) cout<<"Suite";
	else if(x==2)cout<<"Single";
	else if(x==3)cout<<"Double";
	else if(x==4)cout<<"Buisness";
	else cout<<"Towers";

	gotoxy(17,27);
	cout<<"Luxurious activity               -";
	if(lux==1)cout<<"Gym";
	else cout<<"Swimming";
	gotoxy(17,29);
	cout<<"Tour asked for                   -";
	if(tour==1)cout<<"Ist Class";
	else if(tour==2)cout<<"IInd Class";
	else if(tour==3)cout<<"IIIrd Class";

	gotoxy(17,31);
	cout<<"Food asked for                   -";
	if(food==1) cout<<"Indian";
	else if(food==2) cout<<"Continental";
	else if(food==3) cout<<"Chinese";
	else if(food==4) cout<<"Thai";
	else if(food==5) cout<<"Mughlai";



       }

//////////////////////////////////////////////////////////////////////
//////////////////////VOID SEARCH_BY_NAME()///////////////////////////
//////////////////////////////////////////////////////////////////////
void search_by_name()
{
registerform z;
char name[25];
int ctr=0;
ifstream f1("c:\\hotel.dat",ios::binary);
cout<<"\n ENTER NAME TO BE SEARCHED  :  ";
gets(name);
if(f1==NULL)
	{
	cout<<"\n THE FILE IS EMPTY .";
	return;
	}

while(f1.read((char*)&z,sizeof(z)))
	{
	if(!strcmp(name,z.retname()))
		{
		ctr++;
		z.show();
		delay(1000);
		cout<<"\n\n\n\nPRESS ENTER TO CONTINUE . . . .";
		getch();
		}          }

      if(ctr==0)   {
			gotoxy(5,21);
			cout<<"NO SUCH RECORD EXISTS";
			delay(1000);
			gotoxy(5,23);
			cout<<"GOING BACK TO THE MAIN MENU";
			delay(2000);
			}
	   }

//////////////////////////////////////////////////////////////////////
////////////////////VOID SEARCH_BY_CHECK_IN()/////////////////////////
//////////////////////////////////////////////////////////////////////

void search_by_check_in()
{
clrscr();
registerform z;
char date[25];
gotoxy(2,3);
int ctr=0;
cout<<"ENTER THE CHECK IN DATE (dd/mm/yyyy)  :  ";
	gotoxy(50,3);
	cout<<"                          ";
	gotoxy(50,3);
	gets(date);

ifstream f1("c:\\hotel.dat",ios::binary);
if(f1==NULL)
	{
	cout<<"\n THE FILE IS EMPTY .";
	return;
	}

while(f1.read((char*)&z,sizeof(z)))
	{
	if(strcmp(date,z.retcheckin())==0)
		{
		z.show(); ctr++;
		delay(1000);
		cout<<"\n\n\n\nPRESS ANY KEY TO CONTINUE . . . .";
		getch();
		}             }

	if(ctr == 0)
		{ 	gotoxy(5,21);
			cout<<"NO SUCH RECORD EXISTS";
			delay(1000);
			gotoxy(5,23);
			cout<<"GOING BACK TO THE MAIN MENU";
			delay(2000);
		     }

}

//////////////////////////////////////////////////////////////////////
//////////////////////VOID DISPLAY_ALL_REC()//////////////////////////
//////////////////////////////////////////////////////////////////////

void display_all_rec()   //     For Displaying All Records . . . . . .
{
registerform z;
ifstream f2("c:\\hotel.dat",ios::binary);

if(f2==NULL)
	{
	cout<<"THE FILE IS EMPTY .";
	return;
	}

f2.seekg(0);
while(!f2.eof())
	{
	f2.read((char*)&z,sizeof(z));
	if(f2.eof())break;
	z.show();
	cout<<"\n\n\n\n PRESS ANY KEY TO CONTINUE . . . . .";
	getch();
	clrscr();
	}
f2.close();
}

////////////////////////////////////////////////////////////////////////
/////////////////////////VOIDMODIFY2///////////////////////////////////
////////////////////////////////////////////////////////////////////////

void modify2(int records)
{
clrscr();
char ch;
gotoxy(26,5);
cout<<"*_*    MODIFY MENU    *_*";
gotoxy(25,12);
cout<<"1. CHANGE THE ADDRESS .";
gotoxy(25,14);
cout<<"2. CHANGE THE CHECK OUT DATE .";
for(int i=0;i<20;i++)
	{
	gotoxy(25,16);
	cin>>ch;
	if(ch=='1' || ch=='2')
		break;
	gotoxy(25,16);
	cout<<"                                ";
	gotoxy(25,16);
	cout<<"WRONG INPUT .";
	gotoxy(25,16);
	cout<<"                                ";
	}

char add[25];
registerform z;
fstream f1("c:\\hotel.dat",ios::binary | ios::in | ios::out);
if(ch=='1')
	{
	gotoxy(25,20);
	cout<<"ENTER THE NEW ADDRESS : ";
	f1.seekg(records*sizeof(z));
	f1.read((char*)&z,sizeof(z));
	gotoxy(25,22);
	z.addchange();
	f1.write((char*)&z,sizeof(z));
	}
getch();
}




//////////////////////////////////////////////////////////////////////
////////////////////////////VOID MODIFY///////////////////////////////
//////////////////////////////////////////////////////////////////////

void modify()
{
clrscr();
char name[25];
registerform z;
int ctr=0,records=0;
ifstream f1("c:\\hotel.dat",ios::binary);
gotoxy(20,20);
cout<<"ENTER NAME OF A CUSTOMER : - - ";
gotoxy(30,22);
gets(name);
if(f1==NULL)
	{
	cout<<"\n THE FILE IS EMPTY .";
	return;
	}

while(f1.read((char*)&z,sizeof(z)))
	{
	if(!strcmp(name,z.retname()))
		{
		ctr++;
		z.show();
		delay(1000);
//		cout<<"\n\n\n\nPRESS ENTER TO CONTINUE . . . .";
//		getch();
		}
	records++;
	}
if(ctr==0)	cout<<"\n NO SUCH RECORDS EXISTS .";
char choice;
getch();
for(int i=0;i<20;i++)
	{
	gotoxy(17,40);
	cout<<"PRESS 'm' TO MODIFY THE RECORD";
	gotoxy(17,42);
	cout<<"PRESS 'e' TO EXIT.";
	gotoxy(17,44);
	cin>>choice;
	if(choice!='m' && choice!='e')
		{
		//getch();
		gotoxy(17,44);
		cout<<"                      ";
		gotoxy(17,44);
		cout<<"WRONG INPUT.";
		delay(1000);
		gotoxy(17,44);
		cout<<"                      ";
		}
	else break;
	}

if(choice == 'e')
	return;
if(choice == 'm')
	{
	modify2(records);
	}
}


//////////////////////////////////////////////////////////////////////
//////////////////////////VOID DELETEREC()////////////////////////////
//////////////////////////////////////////////////////////////////////


void deleterec()
{
registerform z,a1;
char name[25];
ifstream f1("c:\\hotel.dat",ios::binary);
ofstream f2("c:\\gur.dat",ios::binary);
cout<<"ENTER THE NAME OF A CUSTOMER  :  ";
gets(name);
if(f1==NULL)
	{
	cout<<"\n THE FILE IS EMPTY .";
	return;
	}
char ch;
int ctr=0;

while(f1.read((char*)&z,sizeof(z)))
	{
	if(strcmpi(name,z.retname())!=0)
		{
		f2.write((char*)&z,sizeof(z));
		}
	else ++ctr;
	}

if(ctr==0)  {cout<<"\n\n NO SUCH RECORD EXISTS ."; getch(); }
f1.close();

ifstream f3("c:\\hotel.dat",ios::binary);

while(f3.read((char*)&z,sizeof(z)))
	{
	if(strcmpi(name,z.retname())==0)
		{
		z.show();
		delay(1000);
		getch();
		cout<<"\n\n  PRESS 'd' TO DELETE THE CURRENT RECORD .";
		cout<<"\n\n  PRESS 's' TO LEAVE THE RECORD AS IT IS .\n";
		cin>>ch;
		}
	}

if(ch=='d')
	remove("c:\\hotel.dat");
	rename("c:\\gur.dat","c:\\hotel.dat");

if(ch=='s')
	remove("c:\\gur.dat");

f2.close();
f3.close();

}

/////////////////////////////////////////////////////////////////////////
///////////////////////////VOIDMENUSCREEN()/////////////////////////////
/////////////////////////////////////////////////////////////////////////

void menuscreen()
{  cleardevice();
    settextstyle(4,0,4);
       setcolor(GREEN + BLINK);
    outtextxy(100 ,50 ,"W");
  delay(150);
  outtextxy(120 ,50 ,"E");
  delay(150);
  outtextxy(140 ,50 ,"L");
  delay(150);
  outtextxy(160 ,50 ,"C");
  delay(150);
  outtextxy(180 ,50 ,"O");
  delay(150);
  outtextxy(200 ,50 ,"M");
  delay(150);
  outtextxy(220 ,50 ,"E");
  delay(150);
  outtextxy(240 ,50 ," ");
  delay(150);
  outtextxy(260 ,50 ,"T");
  delay(150);
  outtextxy(280 ,50 ,"O");
  delay(150);
  outtextxy(300 ,50 ," ");
  delay(150);
  outtextxy( 320,50 ,"H");
  delay(150);
  outtextxy(340 ,50 ,"I");
  delay(150);
  outtextxy(360 ,50 ,"L");
  delay(150);
  outtextxy(380 ,50 ,"T");
  delay(150);
  outtextxy(400 ,50 ,"O");
  delay(150);
  outtextxy(420 ,50 ,"N");
  delay(150);
  outtextxy(440 ,50 ," ");
  delay(150);
  outtextxy(460 ,50 ,"H");
  delay(150);
  outtextxy(480 ,50 ,"O");
  delay(150);
  outtextxy(500 ,50 ,"T");
  delay(150);
  outtextxy(520 ,50 ,"E");
  delay(150);
  outtextxy(540 ,50 ,"L");
  delay(150);
  outtextxy(560 ,50 ,"S");
  delay(150);
  outtextxy(580 ,50 ," ");
  textcolor(4);
  delay(100);
}

//////////////////////////////////////////////////////////////////////
//////////////////////////////MAIN()//////////////////////////////////
//////////////////////////////////////////////////////////////////////

main()
{

clrscr();
int driver,mode;
		       driver=DETECT;
		       initgraph(&driver,&mode," ");

	 setbkcolor(RED) ;
     setcolor(GREEN);
   for(int k=0;k<20;k++)
     {
       menuscreen();
   settextstyle(7,0,4);

gotoxy(20,10);
cout<<"1.  INFORMATION ABOUT RATES .";
gotoxy(20,12);
cout<<"2.  REGISTER A NEW CUSTOMER .";
gotoxy(20,14);
cout<<"3.  VIEW ALL RECOEDS .";
gotoxy(20,16);
cout<<"4.  SEARCH A RECORD BY NAME .";
gotoxy(20,18);
cout<<"5.  SEARCH A RECORD BY CHECK IN DATE .";
gotoxy(20,20);
cout<<"6.  MODIFY AN EXISTING RECORD .";
gotoxy(20,22);
cout<<"7.  DELETE AN EXISTING RECORD .";
gotoxy(20,24);
cout<<"8.  BILLING .";
gotoxy(20,26);
cout<<"9.  EXIT .";

char choice;

int ctr=0;
	gotoxy(20,37);
	cout<<"ENTER YOUR CHOICE  :  ";
	gotoxy(42,37);
	cout<<"                  ";
	gotoxy(42,37);
	choice=getche();
	switch(choice)
		{
		case '1': {
			  clrscr();
			  information();
			  break;
			  }
		case '2': {
			  clrscr();
			  register_customer();
			  break;
			  }
		case '3': {
			  clrscr();
			  display_all_rec();
			  break;
			  }
		case '4': {
			  clrscr();
			  search_by_name();
			  break;
			  }
		case '5': {
			  clrscr();
			  search_by_check_in();
			  break;
			  }
		case '6': {
			  clrscr();
			  modify();
			  break;
			  }
		case '7': {
			  clrscr();
			  deleterec();
			  break;
			  }
		case '8': {
			  clrscr();
			  break;
			  }
		case '9': {
			  clrscr();
			  exit(0);
			  }
		default : {
			  gotoxy(42,37);
			  cout<<"WRONG INPUT .";
			  delay(1000);
			  ctr++;
	}
}}getch();
}