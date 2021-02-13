///////////////////////////////////////
/*****PROJECT ON SCHOOL RECORD****/////
/*****MADE BY VAIBHAV GAUR********/////
/*****CLASS 12-E******************/////
///////////////////////////////////////

/*********************HEADER FILES*****************************************/

#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>

/****************************FUNCTION PROTOTYPES***************************/

void mainm();          //CONTROLS THE MAIN SCREEN
void add();            //ADDS NEW RECORDS
void modify();         //MODIFIES THE RECORDS
void delet();          //DELETES A RECORDS
void view();           //ALLOWS TO VIEW A RECORD BY NAME
void viewa();          //ALLOWS TO VIEW ALL THE RECORDS
void viewt();          //CONTROLS THE VIEW MENU SCREEN
void totalc();         //DISPLAYS THE NO. OF STUDENTS IN A CLASS
void totall();         //DISPLAYS THE NO. OF STUDENTS IN THE SCHOOL

/***************************CLASS DECLARATION******************************/

class std{

char name[25],fname[25],add[50],sec;
long tno;
int class1;

public:

void input()
       {
       clrscr();
       cout<<"ENTER THE STUDENT'S NAME"<<endl;
       gets(name);
       cout<<"ENTER THE CLASS"<<endl;
       cin>>class1;
       cout<<"ENTER THE SECTION"<<endl;
       cin>>sec;
       cout<<"ENTER THE FATHER'S NAME"<<endl;
       gets(fname);
       cout<<"ENTER THE ADDRESS"<<endl;
       gets(add);
       cout<<"ENTER THE PHONE NO."<<endl;
       cin>>tno;
       };

 void display()
 {
  cout<<name<<'\t'<<class1<<'\t'<<sec<<'\t'<<fname<<"\t\t"<<add<<'\t'<<tno<<endl;
 };

 char* retn()       //FOR RETURNING NAME
 {
 return name;
 };

 int retcls()       //FOR RETURNING CLASS1
 {
 return class1;
 };

 void change()
 {
 clrscr();

 cout<<"ENTER THE FATHER'S NAME"<<endl;
 gets(fname);
 cout<<"ENTER THE ADDRESS"<<endl;
 gets(add);
 cout<<"ENTER THE PHONE NO."<<endl;
 cin>>tno;
 };
 };

/******************DECLARATION OF MAINM()**********************************/

void mainm()
{
clrscr();
cout<<"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/MAIN MENU*/*/*/*/*/*/*/*/*/*/*/*/*/"
<<"*/*/*/*/*/*/*/*/"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"PRESS THE CORRESPONDING KEYS TO PERFORM THE DESIRED FUNCTIONS"<<endl;
cout<<endl<<endl<<endl;
cout<<" ////          <1>    ADD A RECORD          ////"<<endl<<endl;
cout<<" ////          <2>    MODIFY A RECORD       ////"<<endl<<endl;
cout<<" ////          <3>    DELETE A RECORD       ////"<<endl<<endl;
cout<<" ////          <4>    VIEW                  ////"<<endl<<endl;
cout<<" ////          <5>    EXIT                  ////"<<endl;
int ch;
cin>>ch;

switch(ch)

{
 case 1:add();break;
 case 2:modify();break;
 case 3:delet();break;
 case 4:viewt();break;
 case 5:exit(0);
 default:{
	  cout<<"ENTER THE CORRECT CODE"<<endl;
	  delay(600);
	  mainm();
	 };
};
getch();
};

/**********************DECLARATION OF ADD()********************************/

void add()
{
      clrscr();
      std s;
      s.input();
      fstream f1("std600.dat",ios::binary|ios::app);
      f1.write((char*)&s,sizeof(s));
      f1.close();
      cout<<endl<<endl<<endl;
      cout<<"PRESS ANY KEY TO GO BACK TO MAIN MENU"<<endl;
      getch();
      mainm();
};

/**********************DECLARATION OF MODIFY()*****************************/

void modify()
      {
	 clrscr();
	 std s;
int ctr=0;
char sd[25];
cout<<"ENTER THE NAME OF THE STUDENT FOR MODIFICATION"<<endl;
gets(sd);
fstream f1("std600.dat",ios::binary|ios::in|ios::out);

while(f1.read((char*)&s,sizeof(s)))
{
	  if(strcmpi(s.retn(),sd)==0)
	      {
	       s.change();
	       f1.seekg(ctr*sizeof(s));
	       f1.write((char*)&s,sizeof(s));
	      };

ctr++;
};
cout<<endl<<endl;
cout<<"PRESS ANY KEY TO GO TO THE MAIN MENU"<<endl;
getch();
mainm();
};


/************************DECLARATION OF DELET()****************************/

void delet()
{
 clrscr();
 std s;
 char sd[25];
 cout<<"ENTER THE NAME OF STUDENT FOR YOU WANT TO DELETE THE RECORD"<<endl;
 gets(sd);
 ifstream f1("std600.dat",ios::binary);
 ofstream f2("new1.dat",ios::binary);
 while(f1.read((char*)&s,sizeof(s)))
 {
		if(strcmpi(s.retn(),sd)!=0)
		   f2.write((char*)&s,sizeof(s));
 };
 f1.close();
 f2.close();
 ofstream f3("std600.dat",ios::binary);
 ifstream f4("new1.dat",ios::binary);
	      while(f4.read((char*)&s,sizeof(s)))
		  f3.write((char*)&s,sizeof(s));

 ofstream f5("new1.dat",ios::binary);
 cout<<endl<<endl;
 f3.close();
 f4.close();
 f5.close();
 cout<<"RECORD DELETED"<<endl;
 cout<<"PRESS ANY KEY TO GO TO THE MAIN MENU"<<endl;
 getch();
 mainm();
};

/************************DECLARATION OF VIEWA()****************************/

void viewa()
{
 clrscr();
 std s[80],t;
 int i=0,ch;
 cout<<"/*/*/*/*/*/*/*/*/*/*/STUDENT LIST*/*/*/*/*/*/*//*/*/*/*/*/*/"<<endl;
 cout<<endl<<endl;
 cout<<"NAME\tCLASS\tSECTION\tFATHER'S NAME\tADDRESS\tTELEPHONE"<<endl;
 cout<<endl<<endl;
 ifstream f1("std600.dat",ios::binary);
 while(f1.read((char*)&s[i],sizeof(s[i])))
    i++;
 for(int k=0;k<i-1;k++)
     {for(int l=k+1;l<i;l++)
	 if(strcmpi(s[k].retn(),s[l].retn())>0)
	     {t=s[k];
	      s[k]=s[l];
	      s[l]=t;
	     }
	     }f1.close();

 ofstream f2("std600.dat",ios::binary);
 for(k=0;k<i;k++)
    f2.write((char*)&s[k],sizeof(s[k]));
  f2.close();
 ifstream f3("std600.dat",ios::binary);
 while(f3.read((char*)&t,sizeof(t)))
    {t.display();
    i++;
    if(i%16==0)
    {getch();
    }
    };
   f3.close();
 cout<<endl<<endl;
 cout<<"PRESS 1 TO GO TO VIEW MENU"<<endl<<endl;
 cout<<"PRESS 2 TO GO TO MAIN MENU"<<endl;
 cin>>ch;
 if(ch==1)viewt();
 else if(ch==2)mainm();
 };

/*************************DECLARATION OF VIEW()****************************/

void view()
{clrscr();
std s;
int ch;
char sd[25];
cout<<"ENTER THE NAME OF THE STUDENT FOR WHICH YOU WANT TO SEE RECORD"<<endl;
gets(sd);
clrscr();
cout<<"NAME\tCLASS\tSECTION\tFATHER'S NAME\tADDRESS\tTELEPHONE"<<endl;
ifstream f1("std600.dat",ios::binary);
while(f1.read((char*)&s,sizeof(s)))
{if(strcmpi(s.retn(),sd)==0)
s.display();

};
f1.close();
 cout<<endl<<endl;
 cout<<"PRESS 1 TO GO TO VIEW MENU"<<endl<<endl;
 cout<<"PRESS 2 TO GO TO MAIN MENU"<<endl;
 cin>>ch;
 if(ch==1)viewt();
 else if(ch==2)mainm();

};

/********************DECLARATION OF TOTALC()*******************************/

void totalc()
{
 clrscr();
 std s;
 int cls,a=0,ch;
 cout<<"ENTER THE CLASS"<<endl;
 cin>>cls;
 ifstream f1("std600.dat",ios::binary);
 while(f1.read((char*)&s,sizeof(s)))
    if(cls==s.retcls())
	 a++;
 f1.close();
 cout<<"TOTAL NO. OF STUDENTS IN CLASS  "<<cls<<"="<<a;
 cout<<endl<<endl<<endl;
 cout<<"PRESS 1 TO GO TO VIEW MENU"<<endl<<endl;
 cout<<"PRESS 2 TO GO TO MAIN MENU"<<endl;
 cin>>ch;
 if(ch==1)viewt();
 else if(ch==2)mainm();
 };

/***********************DECLARATION OF TOTALL()****************************/

void totall()
{
 clrscr();
 int a=0,ch;
 std s;
 ifstream f1("std600.dat",ios::binary);
 while(f1.read((char*)&s,sizeof(s)))
      a++;
 cout<<"TOTAL NO. OF STUDENTS IN THE SCHOOL=  "<<a;
 cout<<endl<<endl<<endl;
 cout<<"PRESS 1 TO GO TO VIEW MENU"<<endl<<endl;
 cout<<"PRESS 2 TO GO TO MAIN MENU"<<endl;
 cin>>ch;
 if(ch==1)viewt();
 else if(ch==2)mainm();
 };

/*************************DECLARATION OF VIEWT()***************************/

void viewt()
{
 clrscr();
 int ch;
 cout<<"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/VIEW MENU*/*/*/*/*/*/*/";
 cout<<"*/*/*/*/*/*/*/*/*/*/*/"<<endl<<endl<<endl<<endl<<endl;
 cout<<"1>PRESS 1 TO VIEW RECORD OF ALL THE STUDENTS IN ASCENDING ORDER";
 cout<<endl<<endl;
 cout<<"2>PRESS 2 TO VIEW THE RECORD OF STUDENTS BY NAME"<<endl<<endl;
 cout<<"3>PRESS 3 TO VIEW TOTAL NO. OF STUDENTS IN A CLASS"<<endl<<endl;
 cout<<"4>PRESS 4 TO VIEW TOTAL NO. OF STUDENTS IN THE SCHOOL"<<endl<<endl;
 cout<<"5>PRESS 5 TO GO TO MAIN MENU"<<endl;
 cin>>ch;
 switch(ch)
 {case 1:viewa();
  case 2:view();
  case 3:totalc();
  case 4:totall();
  case 5:mainm();
  default:{cout<<"ENTER THE CORRECT CHOICE" ;
	   delay(600);
	   viewt();
	  };
 };
 };

/****************************DECLARATION OF MAIN()*************************/

main()
{clrscr();
mainm();
getch();
};

/**************************END OF PROGRAMME********************************/






