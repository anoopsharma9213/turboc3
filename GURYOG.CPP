guryog
/*
TO WRITE A MENU DRIVEN PROGRAMTO CREATE A FILE CONTAINING
ACC NO, NAME OF CUSTOMER AND BALANCE
OPTIONS SHOULD BE AS FOLLOWS:-
1- TO PRINT ALL DATA
2- TO INPUT A NEW RECORD AND DISPLAY RECORDS AGAIN
3- TO INPUT A NAME AND PRINT OUT DETAILS OF THE CUSTOMER
*/


#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
class cust{ char name[25];
		float balance;
		int acno;
public:
void disp()
{cout<<"name is "<<name<<endl;
 cout<<"balance is"<<balance<<endl;
 cout<<"account no is "<<acno<<endl;
 getch();
}

void get()
{cout<<"enter name,balance and acc no in sequence"<<endl;
 gets(name);cin>>balance>>acno;
}
char rname()
{return name;}


int ret()
{return acno;}
};


void main()
{clrscr();
cout<<"--------------------------------------------------------------"<<endl;
 cout<<"ENTER YOUR CHOICE"<<endl;
 cout<<"ENTER '1' TO PRINT ALL RECORDS"<<endl;
 cout<<"ENTER '2' TO INPUT DATA FOR A NEW RECORD"<<endl;
 cout<<"ENTER '3' TO SEARCH FOR A RECORD BY INPUTTING THE NAME"<<endl;
 cout<<"--------------------------------------------------------------"<<endl;
int ch;cin>>ch;
switch(ch)
{ case 1 :void prall();break;
  case 2 :void input();break;
  case 3 :void search();break;
default : cout<<"WRONG OPTION"<<endl;
}
}

void prall()
{cust x;
ifstream f1("records.dat",ios::binary);
while(f1.read((char*)&x,sizeof(x)))
{x.disp();
 cout<<"\n"<<endl;
}f1.close();
}

void input()
{cust x,temp;
 temp.get();
 ofstream f2("reading.dat",ios::binary|ios::app);
 f2.write((char*)&temp,sizeof(temp));
 cout<<"record added "<<endl;
 void prall();
}

void search()
{cust x;
char g[50];
gets(g);
ifstream f1("records.dat",ios::binary);
while(f1.read((char*)&x,sizeof(x)))
{if(!strcmp(x.rname,g))
 cout<<"record found"<<endl;
 x.disp();
}





                                                                  OUTPUT:
--------------------------------------------------------------
 ENTER YOUR CHOICE
 ENTER '1' TO PRINT ALL RECORDS"
 ENTER '2' TO INPUT DATA FOR A NEW RECORD
 ENTER '3' TO SEARCH FOR A RECORD BY INPUTTING THE NAME
 --------------------------------------------------------------
2
GURYOG
45665
1

--------------------------------------------------------------
 ENTER YOUR CHOICE
 ENTER '1' TO PRINT ALL RECORDS"
 ENTER '2' TO INPUT DATA FOR A NEW RECORD
 ENTER '3' TO SEARCH FOR A RECORD BY INPUTTING THE NAME
 --------------------------------------------------------------
3
GURYOG
record found
name is GURYOG
balance is 45665
account no is 1



