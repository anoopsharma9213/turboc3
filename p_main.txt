#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <graphics.h>

class _player_
{
     char _player_name[25];
     char _player_gender[25];
     int _player_age;
     char _hosp_name[25];
     int _hosp_age;
     char _hosp_dept[25];
     char _hosp_gender[25];
     char _hosp_date[25];
     int _total_1;
     int _total_2;
     int _total_3;

     public:
     char * ret_player_name()
     {
	     return _player_name;
     }
     char * ret_hosp_name()
     {
	     return _hosp_name;
     }

     void _hosp_input_entry();
     void _hosp_display_entry();
     void _hosp_bill();
     void __player_info();
     void __emp_test();
     void  __player_result();

}p,a[10];


struct __emp_info
{
	char _emp_name[25];
	char _emp_uid[25];
	char _emp_gender[10];
	int _emp_age;

}emp;

fstream file;

fstream openfile;
fstream showfile;
fstream editfile;

void openFile()
{

     openfile.open("info.dat",ios::app|ios::binary);
}

void editFile()
{

     editfile.open("info.dat",ios::out|ios::binary);
}

void showFile()
{
     showfile.open("info.dat",ios::in|ios::binary);
}

void _player_::_hosp_input_entry()
{
     cout<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<"	                   E N T R Y  S E C T I O N    "<<endl<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<"Enter the Patient Name            	    :";
     cin>>_hosp_name;
     cout<<endl;
     cout<<"Enter the Gender                	    :";
     cin>>_hosp_gender;
     cout<<endl;
     cout<<"Enter the Patient Age            	    :";
     cin>>_hosp_age;
     cout<<endl;
     cout<<"Enter the Department              	    :";
     cin>>_hosp_dept;
     cout<<endl;
     cout<<"Enter the Date of Admission (dd-mm-yy)      :";
     cin>>_hosp_date;
     cout<<endl;
}
void _player_::_hosp_display_entry()
{
   cout<<endl;
   cout<<"********************************************************************************"<<endl;
   cout<<"	                  D I S P L A Y  S E C T I O N    "<<endl<<endl;
   cout<<"********************************************************************************"<<endl;
   cout<<"The Patient Name           		      :"<<_hosp_name<<endl<<endl;
   cout<<"The Patient Gender 	        	      :"<<_hosp_gender<<endl<<endl;
   cout<<"The Patient Age       	       	     	      :"<<_hosp_age<<endl<<endl;
   cout<<"The Patient Department      	 	      :"<<_hosp_dept<<endl<<endl;
   cout<<"The Patient Date of Admission (dd-mm-yy)      :"<<_hosp_date<<endl<<endl;
   cout<<"\n\n\n\n\n\n"<<endl;
   getch();
}

void _hosp_input()
{
	clrscr();
	ofstream f1("std.dat",ios::binary);
	{
	 p._hosp_input_entry();
	 f1.write((char*)&p,sizeof(p));
	 }
     f1.close();
}
void _hosp_display()
{
	clrscr();
	 ifstream f3("std.dat",ios::binary);
 while(f3.read((char*)&p,sizeof(p)))
	p._hosp_display_entry();
       f3.close();

}
void _hosp_add()
{
	clrscr();
	fstream f1("std.dat",ios::binary|ios::app);
	{
	p._hosp_input_entry();
	f1.write((char*)&p,sizeof(p));
	}f1.close();
}
void _hosp_append()
{
	clrscr();
	char c[25];
  fstream f2("std.dat",ios::out,ios::binary|ios::app);
  {
       cout<<endl;
       cout<<"\t\tEnter The Name Of The Patient To Be Modify :";
       cin>>c;
	if(strcmp (p.ret_hosp_name(),c)==0)
	{
	clrscr();
	p._hosp_input_entry();
	f2.write((char*)&p,sizeof(p));
	}
	  else
	  clrscr();
	  gotoxy(14,10);
	  cout<<"I N V A L I D  N A M E "<<endl;
	  getch();

  }
  f2.close();
}
void _hosp_delete()
{
	clrscr();
	fstream f4("std.dat",ios::in|ios::binary);
	fstream f5("temp.dat",ios::out|ios::binary);
	char w[25];
	cout<<"********************************************************************************"<<endl;
	cout<<"                         D E L E T I N G    R E C O R D "<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"\t\tEnter The Player Name To be Deleted :";
	cin>>w;
	while(f4.read((char*)&p,sizeof(p)))
     {
	   if (strcmp (p.ret_hosp_name(),w)!=0)
	       f5.write ((char*)&p,sizeof(p));
     }
     f4.close();
     f5.close();

     remove ("std.dat");
     rename ("temp.dat","std.dat");

}
void _player_::_hosp_bill()
{
      clrscr();
      char b[25];
      char d[25];
      int i;
      cout<<"********************************************************************************"<<endl;
      cout<<"\t\t\t D I S C H A R G I N G  S E C T I O N "<<endl;
      cout<<"********************************************************************************"<<endl;
      cout<<endl;
      cout<<"\t\tEnter The Name of Patient to be discharged :";
      cin>>b;
      cout<<endl;
      cout<<"\t\tEnter The Date of discharging(dd/mm/yy)    :";
      cin>>d;
	    if(strcmp(p.ret_hosp_name(),b)==0)
	    {
		clrscr();
		randomize();
		i= rand()/1;
		cout<<endl;
		cout<<"================================================================================"<<endl;
		cout<<"\t\t\t\tB  I  L  L"<<endl<<endl;
		cout<<"================================================================================"<<endl;
		cout<<"Name  "<<"     "<<" Gender "<< "      "<<" Age "<<"      "<< " Department " <<"   "<<" Date of Admission "<<endl<<endl;
		cout<<   _hosp_name<<"      "<<_hosp_gender<<"          "<<_hosp_age<<"         "<<_hosp_dept<<" 	    "<<_hosp_date<<endl<<endl;
		cout<<"\t\t      +++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"\t\t          Y O U R  B I L L: "<<i<<" Rs"<<endl;
		cout<<"\t\t      +++++++++++++++++++++++++++++++++++"<<endl;
	    }
	    else
	    {
	    clrscr();
	    gotoxy(14,10);
	    cout<<"I N V A I L D  P A T I E N T  N A M E.....!!!!!"<<endl;
	    }
getch();
}
void _hosp_()
{
      int h;
     do{
     clrscr();
       cout<<endl;
       cout<<" \t\t\tR I S H A B ' S   H O S P I T A L "<<endl;
       cout<<"********************************************************************************"<<endl;
	cout<<"\t\t\t1.To Input The Patient Data           "<<endl<<endl;
	cout<<"\t\t\t2.To Display The Patient Data         "<<endl<<endl;
	cout<<"\t\t\t3.To Add More Record                  "<<endl<<endl;
	cout<<"\t\t\t4.To Modify The Patient Data          "<<endl<<endl;
	cout<<"\t\t\t5.To Delete The Patient Data          "<<endl<<endl;
	cout<<"\t\t\t6.To Discharge The Patient            "<<endl<<endl;
	cout<<"\t\t\t0.Exit				   "<<endl<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<"Enter Choice: ";
	cin>>h;
	switch(h)
	{
	  case 1:
		  _hosp_input();
	       break;
	  case 2:
		_hosp_display();
	       break;
	  case 3:
		_hosp_add();
	       break;
	 case 4:
		_hosp_append();
	       break;
	 case 5:
		_hosp_delete();
		break;
	 case 6:
		p._hosp_bill();
		break;
	    }
	    }while(h!=0);
}

void input__emp_info()
{
	clrscr();
     long id;
     cin.get();
	randomize();
	id = rand()%100;
	ltoa(id,emp._emp_uid,10);
	cout<<endl;
	cout<<"\t\tYOUR USER ID                    :"<<id<<endl<<endl;
	cout<<"\t\tEnter The Player Name    	:";
	cin.getline(emp._emp_name,25);
	cout<<endl;
	cout<<"\t\tEnter The Player gender  	:";
	cin.getline(emp._emp_gender,25);
	cout<<endl;
	cout<<"\t\tEnter The Player Age     	:";
	cin>>emp._emp_age;
	cout<<endl;
	openFile();
	openfile.write((char*)&emp,sizeof(emp));
	file.close();
}

void display__emp_info()
{
	clrscr();
     {
	  cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	  cout<<"\t\t\tTHE USER ID                          : "<<emp._emp_uid<<endl<<endl;
	  cout<<"\t\t\tThe Name of The Player		     : "<<emp._emp_name<<endl<<endl;
	  cout<<"\t\t\tThe Gender of The Player	     : "<<emp._emp_gender<<endl<<endl;
	  cout<<"\t\t\tThe Age of The Player		     : "<<emp._emp_age<<endl<<endl;
	  cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
     }
      showFile();
     while(showfile.read((char*)&emp,sizeof(emp)))
     getch();
     file.close();
}
void _game()
{
	clrscr();
	int k;
	 do{
     clrscr();
	     cout<<"********************************************************************************"<<endl;
	     cout<<"\t\t\tJ U M B L E D - U P - W O R D S"<<endl;
	     cout<<"********************************************************************************"<<endl;
	     cout<<"\t\t\t1.To Enter The Information"<<endl<<endl;
	     cout<<"\t\t\t2.To Play the Game        "<<endl<<endl;
	     cout<<"\t\t\t0.Exit		       "<<endl;
	     cout<<"================================================================================"<<endl;
	     cout<<"Enter  choice:";
	cin>>k;
	switch (k)
	{
	      case 1:
		  p.__player_info();
			  break;
	       case 2:
		  p.__emp_test();
		    break;
	    }
	    }while(k!=0);
}

void emp_Level_1()
{
     char que[5][40] = {"USEMO","ABLET","ALLYR","BEEROK","ORCEF"};
     char ans[5][40] = {"MOUSE","TABLE","RALLY","REEBOK","FORCE"};
     clrscr();
     int _total_1 = 0;
     char resp[2][80];
     int i,len;
     int x = 20, y = 44;
     for(i=0;i<5;i++)
     {
       cout<<"Your score: "<<_total_1<<endl<<endl;
	  gotoxy(x,y);
	  cout<<"\t\t "<<"JUMBLED WORD"<<i+1<<" :  ";
	  puts(que[i]);
	  gotoxy(14,y);
       cout<<"\t\t YOUR ANSWERE  :  ";
       gets(resp[i]);
       len=strlen(resp[i]);
       for(int j=0;j<len;j++)
       {
	 resp[i][j] = toupper(resp[i][j]);
       }
       if(strcmp(ans[i],resp[i])==0)
       {
	      _total_1 =  _total_1 + 10;
       }
       clrscr();
      }
      int total1=_total_1 - 10;
      gotoxy(14,10);
      cout<<"\t\tYour Total Score is: "<<total1<<endl;
      getch();
}

void emp_Level_2()
{
     char que[5][40] = {"CHINAME","MESSYT","ACTCOMP","PHYROT","DOWNWIS"};
     char ans[5][40] = {"MACHINE","SYSTEM","COMPACT","TROPHY","WINDOWS"};

     clrscr();
     char resp[2][80];
     int i;
     int  _total_2= 0,len;
     int x = 10, y = 34;
     for(i=0;i<5;i++)
    {
     cout<<"Your score: "<< _total_2<<endl<<endl;
	  gotoxy(x,y);
	  cout<<"\t\t "<<"JUMBLED WORD"<<i+1<<" :  ";
	  puts(que[i]);
	  gotoxy(14,y);
       cout<<"\t\t YOUR ANSWERE  :  ";
       gets(resp[i]);
       len=strlen(resp[i]);
       for(int j=0;j<len;j++)
       {
	 resp[i][j] = toupper(resp[i][j]);
       }
       if(strcmp(ans[i],resp[i])==0)
       {
	      _total_2 = _total_2 + 10;
       }
       clrscr();
      }
      int total2=_total_2 - 10;
      gotoxy(14,10);
      cout<<"\t\tYour Total Score is: "<<total2<<endl;
      getch();
}



void emp_Level_3()
{
     char que[5][40] = {"EMBERDCE","CUTEXEEVI","RESTWINGL","SIGMATENIN","FORNATIONIM"};
     char ans[5][40] = {"DECEMBER","EXECUTIVE","WRESTLING","ASSIGNMENT","INFORMATION"};

     clrscr();
     char resp[2][80];
     int i,len;
     int  _total_3= 0;
     int x = 10, y = 34;
     for(i=0;i<5;i++)
       {
       cout<<"Your score: "<< _total_3<<endl<<endl;
	  gotoxy(x,y);
	  cout<<"\t\t "<<"JUMBLED WORD"<<i+1<<" :  ";
	  puts(que[i]);
	  gotoxy(14,y);
       cout<<"\t\t YOUR ANSWERE  :  ";
       gets(resp[i]);
       len=strlen(resp[i]);
       for(int j=0;j<len;j++)
       {
	 resp[i][j] = toupper(resp[i][j]);
       }
       if(strcmp(ans[i],resp[i])==0)
       {
	      _total_3 =  _total_3 + 10;
       }
       clrscr();
      }
      int total3=_total_3 - 10;
      gotoxy(14,10);
      cout<<"\t\tYour Total Score is: "<<total3<<endl;
      getch();
}


void emp_test_rule()
{
     clrscr();
     cout<<"********************************************************************************"<<endl;
     cout<<"\t\t\t\tJ U M B L E D -  W O R D"<<endl<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<endl;
     cout<<"\t\t R U L E S:"<<endl;
     cout<<"This is very intresting and easy game in which you have"<<endl;
     cout<<"to guess the JUMBLED WORD and give the correspoding answer to it...."<<endl;
     getch();
}

void _player_::__emp_test()
{
     int t;
     do{
     clrscr();
     cout<<"********************************************************************************"<<endl;
	cout<<"\t\t\t1.To Know About The Game        "<<endl<<endl;
	cout<<"\t\t\t2.To Play The 1st Level         "<<endl<<endl;
	cout<<"\t\t\t3.To Play The 2nd Level         "<<endl<<endl;
	cout<<"\t\t\t4.To Play The 3rd Level         "<<endl<<endl;
	cout<<"\t\t\t0.Return			          "<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<"Enter Choice: ";
	cin>>t;
	switch (t)
	{
       case 1:
	    emp_test_rule();
	       break;
	  case 2:
	       emp_Level_1();
	       break;
	  case 3:
	       emp_Level_2();
	       break;
	 case 4:
	       emp_Level_3();
	       break;
	    }
	    }while(t!=0);
}

void _player_::__player_info()
{
	int choice;
	do{
     clrscr();
     cout<<"********************************************************************************"<<endl;
	cout<<"\t\t\t1.To Enter The Info of Player   "<<endl<<endl;
	cout<<"\t\t\t2.To Display The Info of Player "<<endl<<endl;
	cout<<"\t\t\t0.Return			       "<<endl;
     cout<<"********************************************************************************"<<endl;
     cout<<"Enter Choice: ";
	cin>>choice;
	switch (choice)
	{ case 1:
	       input__emp_info();
	       break;
	  case 2:
	       display__emp_info();
	       break;
	}
	}while(choice!=0);
}

void main()
{
	int ch;
     {
	clrscr();
	     cout<<endl;
	     cout<<"********************************************************************************"<<endl;
	     cout<<" \t\t\t        P  R  O  J  E  C  T "<<endl<<endl;
	     cout<<"********************************************************************************"<<endl;
	     gotoxy(23,14);
	     cout<<" \t\t\t B Y  -  R I S H A B   K H A T R I"<<endl;
	     cout<<"\t\t\t\t\t       X I I - E"<<endl;
	     gotoxy(14,23);
	     cout<<" P R E S S  A N Y  K E Y  T O  C O N T I N U E..........."<<endl;
	     getch();
	     clrscr();
	     do {
	     clrscr();
	     cout<<endl;
	     cout<<"\t\t      M   A   I   N     S   C   R   E   E   N"<<endl;
	     cout<<"********************************************************************************"<<endl;
	     cout<<"\t\t\t1.R I S H A B 'S   H O S P I T A L  "<<endl<<endl;
	     cout<<"\t\t\t2.J U M B L E D - UP - W O R D S   "<<endl<<endl;
	     cout<<"\t\t\t0.E X I T		             "<<endl;
	     cout<<"********************************************************************************"<<endl;
	     cout<<"Enter Choice: ";
	     cin>>ch;
	     switch(ch)
	     {
	       case 1:
		    _hosp_();
		    break;
	       case 2:
		    _game();
		    break;
	      }
	}while(ch!=0);
}
}