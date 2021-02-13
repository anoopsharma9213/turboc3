#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>
void mainm();
void entry();
void delet();
void view();
struct hoteldata
{
char name[30], gno[20];int days,no,a;char food;float bill;
};
struct hoteldata guest;
int count=0,count1=0,max=0,max1=0,no,t,no1,li,lp,s=0;int d=0;int rno;int i;int e;int temp;
char rc,ch,choice,echoice,rchoice,vchoice,mf,ar;float bill,b1,b2;
void main()
{
clrscr();
for(li=10;li<71;li++)
{
gotoxy(li,15);
cout<<"\/";
}
for(li=70;li>=10;li--)
{
gotoxy(li,22);
cout<<"\\";
}
for(lp=16;lp<=21;lp++)
{
gotoxy(10,lp);
cout<<"=";
}
for(lp=21;lp>=16;lp--)
{
gotoxy(70,lp);
cout<<"=";
}
gotoxy(19,8);
textcolor(BLINK+GREEN);
cprintf("         Welcome  To  Hotel  Greens ");
gotoxy(19,9);
textcolor(BLINK+LIGHTRED);
cprintf("         --------------------------");
gotoxy(12,16);
textcolor(RED);
cprintf("       Designed By Karan Jaswal And Angad Singh");
gotoxy(22,19);
textcolor(BLUE);
cprintf("PRESS  ANY  KEY  TO  CONTINUE . . .");
getch();
textcolor(WHITE);
mainm();
}
void mainm()
{
clrscr();
textcolor(BLINK+GREEN);
cprintf("                             H O T E L   G R E E N S");
cout<<endl;
textcolor(LIGHTRED+BLINK);
cprintf("                             -----------------------");
cout<<"\n\n\n";
textcolor(LIGHTBLUE);
cprintf("                         A  L I V I N G  P A R A D I S E");
for(li=30;li<=50;li++)
{
gotoxy(li,14);
cout<<"*";
}
for(li=50;li>=30;li--)
{
gotoxy(li,30);
cout<<"*";
}
for(lp=15;lp<30;lp++)
{
gotoxy(30,lp);
cout<<"|";
}
for(lp=29;lp>=15;lp--)
{
gotoxy(50,lp);
cout<<"|";
}
gotoxy(15,10);
textcolor(RED);
cprintf("PRESS THE CORESSPONDING KEYS FOR THE DESIRED ACTION");
gotoxy(33,15);
textcolor(BROWN);
cprintf("R: Reservation");
gotoxy(33,18);
textcolor(LIGHTMAGENTA);
cprintf("S: Room Status");
gotoxy(33,21);
textcolor(LIGHTBLUE);
cprintf("D: Deletion");
gotoxy(33,24);
textcolor(YELLOW);
cprintf("Q: Quit");
choice=getch();
textcolor(WHITE);
switch(toupper(choice))
{
case 'R':clrscr();
	 textcolor(GREEN);
	 cprintf(" Please Wait ");
	 for(t=1;t<9;t++)
	 {
	 delay(500);
	 cprintf(".");
	 }
	 textcolor(WHITE);
	 entry();
case 'S':clrscr();
	 textcolor(GREEN);
	 cprintf(" Please Wait ");
	 for(t=1;t<9;t++)
	 {
	 delay(500);
	 cprintf(".");
	 }
	 textcolor(WHITE);
	 view();
case 'D':clrscr();
	 textcolor(GREEN);
	 cprintf(" Please Wait ");
	 for(t=1;t<9;t++)
	 {
	 delay(500);
	 cprintf(".");
	 }
	 textcolor(WHITE);
	 delet();
case 'Q':exit(0);
default:
{
gotoxy(33,40);
cout<<"\n\nIllegal Choice ";
getch();
mainm();
}
}
}
void entry()
{
clrscr();
cout<<"Do You Want To reserve A Room? (Y/N)\n";
echoice=getch();
switch(toupper(echoice))
{
case 'Y':
ifstream f1("room",ios::binary);
clrscr();
if(count==0)
{
while(f1.read((char*)&guest,sizeof(guest)))
count=guest.no;
}
f1.close();
ofstream f11("room",ios::app);
count++;
guest.a=1;
cout<<"\n\nRoom No : "<<count<<" is available For Reservation";
guest.no=count;
cout<<"\n\nEnter Occupant's Name\n";
gets(guest.name);
cout<<"\n\nEnter Occupant's Guest Number\n";
gets(guest.gno);
cout<<"\n\nEnter The Number Of Days To Stay\n";
cin>>guest.days;
cout<<"\n\nEnter Type Of Food(C-Chinese,I-Italian,M-Mughalai,S-South Indian,O-Others)\n";
cin>>guest.food;
guest.food=toupper(guest.food);
switch(guest.food)
{
case 'C':guest.bill=5000+500;
       break;
case 'I':guest.bill=5000+600;
       break;
case 'M':
case 'S':
default:guest.bill=5000+300;
	break;
}
guest.bill*=guest.days;
cout<<"\n\nBill : Rs."<<guest.bill;
f11.write((char*)&guest,sizeof(guest));
f11.close();
max=count;
textcolor(GREEN+BLINK);
cprintf("\n\nHAVE A COMFORTABLE STAY !!! ");
textcolor(WHITE);
getch();
mainm();
break;
case 'N':mainm();
default:cout<<"\n\nIllegal Choice ";
	getch();
	mainm();
}
}
void view()
{
clrscr();
cout<<"Press N for Normal Check Of Room Status \n\nPress M for Manual Check Of Room Status\n\n";
vchoice=getch();
switch(toupper(vchoice))
{
case 'N':
{
clrscr();
int k=0;
ifstream f3("room",ios::binary);
cout<<"R.No.\tName\t\tGuest  Number\tNo. Of Days\tFood Type\n\n";
while(f3.read((char*)&guest,sizeof(guest)))
{ k++;
cout<<guest.no<<"\t"<<guest.name<<"\t\t"<<guest.gno<<"\t\t"<<guest.days<<"\t\t"<<guest.food<<"\n\n";
cout<<"\nBill : Rs."<<guest.bill<<"\n\n";
if(k==3)
{
getch();
clrscr();
cout<<"R.No.\tName\t\tGuest  Number\tNo. Of Days\tFood Type\n\n";
}
}
f3.close();
cout<<"\n\n\nPress Any Key To Return To The Main Menu\n\n";
getch();
mainm();
}
case 'M':
{
clrscr();
cout<<"Enter The Room Number That Needs To Be Checked For Occupancy\n\n";
cin>>temp;
rno=temp;
ifstream f5("room",ios::binary);
int c;
while(f5.read((char*)&guest,sizeof(guest)))
{
if(guest.no==rno)
{
c=1;
cout<<"\n\nSingle Room No "<<rno<<" is Reserved";
cout<<"\n\nOccupant's Name : "<<guest.name<<"\n\nOccupant's Guest Number : "<<guest.gno<<"\n\nNumber Of Days To Stay: "<<guest.days<<"\n\nFood Type : "<<guest.food;
cout<<"\nBill : Rs."<<guest.bill;
}
}
if(c!=1)
{
cout<<"\n\nSingle Room No "<<rno<<" is Vacant";
getch();
}

cout<<"\n\nPress Any Key To Return To The Main Menu";
getch();
mainm();
}
default:
{
cout<<"\n\nIllegal Choice ";
getch();
mainm();
}
}
}
void delet()
{
clrscr();
cout<<"Enter The Room Number To Vacate\n";
cin>>temp;
rno=temp;
if(rno>max)
{
cout<<"\n\nSingle Room Is Vacant";
getch();
mainm();
}
else
{
int a=max;
int x;
ifstream f7("room",ios::binary);
ofstream f8("new",ios::binary);
while(f7.read((char*)&guest,sizeof(guest)))
{
if(rno!=guest.no && x==1)
{
guest.no-=1;
f8.write((char*)&guest,sizeof(guest));
}
else if(rno!=guest.no)
{
f8.write((char*)&guest,sizeof(guest));
}
else
{
x=1;
max--;
cout<<"\n\nRoom Vacated";
cout<<"\n\nBill : Rs."<<guest.bill;
cout<<"\n\n";
}
}
if(a!=max)
{
remove("room");
rename("new","room");
f7.close();
f8.close();
textcolor(GREEN);
cprintf("Thanks For Staying At Hotel Greens");
textcolor(WHITE);
cout<<"\n\nPress Any Key To Exit To The Main Menu";
getch();
mainm();
}
else
{
f7.close();
f8.close();
remove("new");
cout<<"\n\nRoom Vacant\n\nPress Any Key To Exit To The Main Menu";
getch();
mainm();
}
}
}

