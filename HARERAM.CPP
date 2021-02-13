#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>

int i;
char ch,name[25];

struct scrap{
	    char rn1[25],sc1[80],sn1[25];
	    }s;

class user
{	char un1[25],ps1[7];
	   	
	public:
		char n1[25],am[80],pass[80],act[80],mus[80],ct[20];
		int dd,mm,yy;

		void input();
		
		void display();
		
		char* retun1()
		{
		return un1;
		}

		char* retps1()
		{
		return ps1;
		}

		void change_na()
		{
		cout<<"\nEnter the name =\n";
		char n2[25];
		gets(n2);
		strcpy(n1,n2);
		strcpy(name,n2);
		}

		void change_ci()
		{
		cout<<"\nEnter the city =\n";
		char ct2[20];
		gets(ct2);
		strcpy(ct,ct2);
		}

		void change_da()
		{
		cout<<"\nEnter the date of birth =\n";
		int dd2,mm2,yy2;
		cin>>dd2>>mm2>>yy2;
		dd=dd2;
		mm=mm2;
		yy=yy2;
		}

		void change_ab()
		{
		cout<<"\nEnter about yourself =\n";
		char am2[80];
		gets(am2);
		strcpy(am,am2);
		}

		void change_pa()
		{
		cout<<"\nEnter your passions =\n";
		char pass2[80];
		gets(pass2);
		strcpy(pass,pass2);
		}

		void change_ac()
		{
		cout<<"\nEnter your activities =\n";
		char act2[80];
		gets(act2);
		strcpy(act,act2);
		}

		void change_mu()
		{
		cout<<"\nEnter your fav music =\n";
		char mus2[80];
		gets(mus2);
		strcpy(mus,mus2);
		}

}x;

void user::input()
  {
cout<<"       ** PLEASE ENTER THE REQUIRED DETAILS ** \n\n";
cout<<"your username =";
gets(un1);
cout<<"your password =";
gets(ps1);
cout<<"name =";
gets(n1);
cout<<"about yourself=";
gets(am);
cout<<"passions=";
gets(pass);
cout<<"activities=";
gets(act);
cout<<"music=";
gets(mus);
cout<<"city=";
gets(ct);
cout<<"date of birth=";
cin>>dd>>mm>>yy;
  }


void user::display()
  {
clrscr();
cout<<"NAME          :"<<n1<<endl;
cout<<"CITY          :"<<ct<<endl;
cout<<"DATE OF BIRTH :"<<dd<<' '<<mm<<' '<<yy<<endl;
cout<<"ABOUT ME      :"<<am<<endl;
cout<<"PASSION       :"<<pass<<endl;
cout<<"ACTIVITIES    :"<<act<<endl;
cout<<"MUSIC         :"<<mus<<endl;
  }


void usermenu();
void scrapmenu();
void loginmenu();
void mainmenu();


void getdata()
  {
fstream f1("user.dat",ios::binary|ios::app);
x.input();
f1.write((char*)&x,sizeof(x));
f1.close();
mainmenu();
  }


void showdata(char nm[25])
  {
ifstream f2("user.dat",ios::binary);
while(f2.read((char*)&x,sizeof(x)))
{
if(strcmp(nm,x.n1)==0)
x.display();
}
getch();
f2.close();
  }


void readsc()
  {
clrscr();
char sn[25];
cout<<"\n1. Read scraps from a particular person.";
cout<<"\n2. Read all the scraps.";
cin>>ch;
switch(ch)
{
case '1':
	cout<<"\nEnter the person's name=";
	ifstream s1("scrap.txt");
	gets(sn);
	while(!s1.eof())
	{
	s1.getline(s.rn1,25);
	s1.getline(s.sc1,80);
	s1.getline(s.sn1,25);
	if(strcmpi(s.rn1,name)==0 && strcmpi(s.sn1,sn)==0)
	cout<<endl<<s.sc1<<endl;
	}
	getch();
	scrapmenu();
	break;
case '2':
	ifstream s2("scrap.txt");
	while(!s2.eof())
	{
	s2.getline(s.rn1,25);
	s2.getline(s.sc1,80);
	s2.getline(s.sn1,25);

	if(strcmp(s.rn1,name)==0)
	cout<<endl<<s.sc1<<"\n from - "<<s.sn1<<endl;
	}
	getch();
	scrapmenu();
	break;
case 'b':
	scrapmenu();
	break;
case 'l':
	mainmenu();
	break;
}
  }

void writesc()
  {
fstream s2("scrap.txt",ios::app);
cout<<"\nEnter the name of the person you want to send scrap to =\n";
gets(s.rn1);
cout<<"\nNow, enter the scrap =\n";
gets(s.sc1);
strcpy(s.sn1,name);
s2<<s.rn1<<endl;
s2<<s.sc1<<endl;
s2<<s.sn1<<endl;
s2.close();
scrapmenu();
  }


void delsc()
  {
int no;
i=0;
ifstream s3("scrap.txt");
	while(!s3.eof())
	{
	s3.getline(s.rn1,25);
	s3.getline(s.sc1,80);
	s3.getline(s.sn1,25);
	i++;
	if(strcmp(s.rn1,name)==0)
	cout<<endl<<i<<<<'\t'<<s.sc<<"\n\t     from - "<<s.sn<<endl;
	}
s3.close();
i=0;
cout<<"Enter the no of the scrap you want to delete =\n(press 0 to go back)\n ";
cin>>no;
if(no==0)
	return;
else
{

fstream s4("scrap.txt",ios::in)
fstream s5("newscrap.txt",ios::out)
while(!s4.eof())
{
if(strcmp(s.rn1,name)!=0)
s4.getline(s.rn1,25);
s4.getline(s.sc1,80);
s4.getline(s.sn1,25);
i++;
if(i!=no)
 {
s2<<s.rn1<<endl;
s2<<s.sc1<<endl;
s2<<s.sn1<<endl;
 }
}
s4.close();
s5.close();
remove ("scrap");
rename ("newscrap","scrap");
cout<<"\n\nThe has been deleted\n";
getch();
return;

}
  }


void scrapmenu()
  {
clrscr();
cout<<"\n\n         PLEASE SELECT YOUR OPTION =\n\n";
cout<<"1. View your scraps.\n";
cout<<"2. Write a scraps.\n";
cout<<"3. Delete scraps.\n\n";
cin>>ch;
switch(ch)
{
case '1':
	readsc();
	break;
case '2':
	writesc();
	break;
case '3':
	delsc();
	break;
case 'b':
	usermenu();
	break;
case 'l':
	mainmenu();
	break;
}
  }


void frndlist()
  {
clrscr();
char n4[25];
i=0;
ifstream f4("user.dat",ios::binary);
while(f4.read((char*)&x,sizeof(x)))
 {
if(strcmp(name,x.n1)!=0)
{
i++;
cout<<i<<"\n\tName="<<x.n1<<endl;
}
 }
f4.close();

cout<<"\nEnter the name to view profile =\n";
gets(n4);
if(strcmp(n4,"b")==0)
	usermenu();
else if(strcmp(n4,"l")==0)
	mainmenu();
else
{
showdata(n4);
getch();
frndlist();
}
  }


void changemenu()
{
clrscr();
cout<<"\n\nSelect the Entry that u want to change =\n\n";
cout<<"NAME           (n)"<<endl;
cout<<"CITY           (c)"<<endl;
cout<<"DATE OF BIRTH  (d)"<<endl;
cout<<"ABOUT ME       (a)"<<endl;
cout<<"PASSION        (p)"<<endl;
cout<<"ACTIVITIES     (t)"<<endl;
cout<<"MUSIC          (m)"<<endl;
cin>>ch;
if(ch=='b')
	usermenu();
else if(ch=='l')
	mainmenu();
else
{
fstream f7("user.dat",ios::binary|ios::out|ios::in);
while(f7.read((char*)&x,sizeof(x)))
 {
if(strcmp(name,x.n1)==0)
f7.seekg(-sizeof(x));
again7:
;
switch(ch)
{
case 'n':
	x.change_na();
	break;
case 'c':
	x.change_ci();
	break;
case 'd':
	x.change_da();
	break;
case 'a':
	x.change_ab();
	break;
case 'p':
	x.change_pa();
	break;
case 't':
	x.change_ac();
	break;
case 'm':
	x.change_mu();
	break;
default :
	cout<<"\nYou have entered the wrong choice =";
	goto again7;
}
f7.write((char*)&x,sizeof(x));
f7.close();
 }
}
  }


void delaccount()
  {
cout<<"\n\nAre you sure that you want to leave orkut(y/n)="
cin>>ch;
switch(ch)
{
case 'n'
	cout<<"\nThank you for being associated with orkut";
	getch();
	usermenu();
case 'y'
	ifstream f8("cust.dat",ios::binary);
	ofstream f9("newcust.dat",ios::binary);
	while(f8.read((char*)&x,sizeof(x)))
	 {
	if(strcmp(x.n1,name)!=0)
	f9.write((char)&x,sizeof(x));
	f1.close();
	f2.close();
	remove ("cust.dat");
	rename ("newcust.dat","cust.dat");
	cout<<"\n\nYour account has been deleted\n";
	getch();
	return;
case 'b':
	optionmenu();
	break;
case 'l':
	mainmenu();
	break;
 }
  }


void optionmenu()
{
cout<<"\n\nPlease select from the following options\n"
cout<<"\n1. Make changes to your account details.\n"
cout<<"\n2.Leave orkut."
cin>>ch;
switch(ch)
 {
case '1':
	changemenu();
	break;
case '2':
	delaccount();
	break;
case 'b':
	usermenu();
	break;
case 'l':
	mainmenu();
	break;
 }
}




void mainmenu()
{
clrscr();
cout<<"\n1. to login";
cout<<"\n2. to sign up";
cout<<"\n3. to exit";
cin>>ch;
switch(ch)
{
case '1':
	loginmenu();
	break;
case '2':
	getdata();
	break;
case '3':
	exit(0);
}
}

void usermenu()
{
clrscr();
cout<<"\n         PLEASE SELECT YOUR OPTION =\n\n";
cout<<"1. View your profile.\n";
cout<<"2. Go to scraps.\n";
cout<<"3. Go to friend list.\n";
cout<<"4. Other options.\n";
cout<<"5. Logout.\n\n";
cin>>ch;
switch(ch)
{
case '1':
	showdata(name);
	usermenu();
	break;
case '2':
	scrapmenu();
	break;
case '3':
	frndlist();
	break;
case '4':
	optionmenu();
	break;
case '5':
	mainmenu();
	break;
}
}


void loginmenu()
{
int ctr=0,ctr1=0,ctr2=0;
char ps[7],un[25];
clrscr();
cout<<"Enter your user name=\n";
gets(un);
cout<<"Enter your 7 digit password=\n";

for(i=0;i<7;i++)
  {
   ps[i]=getch();
   cout<<"*";
   }
   ps[i]='\0';

ifstream f4("user.dat",ios::binary);
while(f4.read((char*)&x,sizeof(x)))
 {
ctr++;
if(strcmp(x.retun1(),un)==0)
	{
	for(i=0;i<7;i++)
	{
	if(x.retps1()[i]==ps[i]);

	else ctr2++;
	}

	if(ctr2==0)
		 {cout<<"Haan";
		 getch();
		strcpy(name,x.n1);x.display();
		 getch();
		usermenu();
		getch();
		  }
	else
	{
	cout<<"\nYou have entered the wrong password.\nPlease login again.";
	getch();
	mainmenu();
	}
       }
else
ctr1++;
}
f4.close();
if(ctr==ctr1)
	{
	cout<<"\nYou have entered the wrong username.\nPlease login again.";
	getch();
	mainmenu();
	}
}

void main()
{
clrscr();
mainmenu();
getch();

}