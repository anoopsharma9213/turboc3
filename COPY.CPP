#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>


class directory
     {
	       char pn[10];
	       int age;
	       char address[50];
	       char occupation[20];
	       char name[20];
	       char emailadd[25];
     public:
     directory()
     { pn[0]='\0';
       age=0;
       address[0]='\0';
       occupation[0]='\0';
       emailadd[0]='\0';
     }
     void input()          //TO INPUT THE DETAILS OF A PERSON
      {clrscr();
      textcolor(BLACK);
      gotoxy(30,1);
      cout<<" [ADDITION] ";
      textcolor(BLACK);
      cout<<" \n ENTER HOUSE PHONE NUMBER : ";
      cin>>pn;
      cout<<" \n ENTER NAME : ";
      gets(name);
      cout<<" \n ENTER THE OCCUPATION : ";
      gets(occupation);
      cout<<" \n ENTER HOUSE ADDRESS : ";
      gets(address);
      cout<<" \n ENTER EMAIL ADDRESS : ";
      gets(emailadd);
      }

    char* retpn()
    {return pn;}

    void display() //TO DISPLAY RECORD
    {
      cout<<"\n";
      cout<<" PHONE NUMBER1 : "<<pn<<"\n";
      cout<<" NAME : "<<name<<"\n";
      cout<<" HOUSE ADDRESS : "<<address<<"\n";
      cout<<" OCCUPATION : "<<occupation<<"\n";
      cout<<" EMAIL ADDRESS : "<<emailadd<<"\n";
      getch();
    }        };


void addition(directory &d)  //TO ADD RECORD
  {
      fstream f1("rahul.dat",ios::binary|ios::in|ios::out);
      f1.seekg(0,ios::end);
      d.input();
      f1.write((char*)&d,sizeof(d));
      f1.close();

    }
int test(directory d)    //TO COUNT NO. OF RECORDS
    {
      ifstream f2("rahul.dat",ios::binary);
      int n=0;
      while(f2.read((char*)&d,sizeof (d)))
      n++;
      f2.close();
      cout<<" \n NUMBER OF RECORDS = "<<n ;
      return n ;
    }
void search(directory &d)  //SEARCHING FOR A PARTICULAR NUMBER
    {
      ifstream f3("rahul.dat",ios::binary);
      if(test(d)==0)
	{
	  cout<<" \n FILE IS EMPTY ";
	  getch();
		}
      clrscr();
      textcolor(BLACK);
      gotoxy(30,1);
      cout<<" [SEARCHING] ";
      cout<<" \n ENTER PHONE NUMBER TO BE SEARCHED : ";
      char pn[10];
      cin>>pn;
	int ctr=0;
	while( f3.read((char*)&d,sizeof(d)));
	{
	  if(strcmp(pn,d.retpn())==0)
	    {f3.seekg(ctr*sizeof(d));
	    d.display();}
	    else {cout<<"NUMBER NOT FOUND"<<endl;
		 getch();}
		 ctr++;
	 }
		 f3.close();
    }

    void del(directory &d)  //TO DELETE A RECORD
    {ifstream f1("rahul.dat",ios::binary);
    ofstream f2("new.dat",ios::binary);
    cout<<"ENTER THE PHONE NO WHOSE RECORD IS TO BE DELETED"<<endl;
     char p[10];
     cin>>p;
      while(f1.read((char*)&d,sizeof(d)))
    { if(strcmp(p,d.retpn())!=0)
     f2.write((char*)&d,sizeof(d));  }
     cout<<"THE RECORD IS DELETED"<<endl;
     remove ("rahul.dat");
     rename ("new.dat","rahul.dat");

     getch();
     f1.close();
     f2.close();
     }

     void modification(directory &d)  //TO MODIFY A RECORD
     {cout<<"ENETR THE PHONE NO WHOSE RECORD IS TO BE MODIFIED"<<endl;
      char p[10];
      cin>>p;
      fstream f1("rahul.dat",ios::binary|ios::in|ios::out);
      int ctr=0;
      while(f1.read((char*)&d,sizeof(d)))
      {

	if (strcmp(p,d.retpn())==0)
       {f1.seekg(ctr*sizeof(d));
	d.input();
	f1.write((char*)&d,sizeof(d));
	}
       ctr++;
      }
      f1.close();
      }

      void view(directory &d)//TO VIEW ALL THE RECORDS
      {ifstream f1("rahul.dat",ios::binary);
       while(f1.read((char*)&d,sizeof(d)))
       {clrscr();
	if(!strcmp(d.retpn(),"")){break;}
	d.display();
	cout<<endl<<endl<<"TO SEE THE NEXT RECORD PRESS ANY KEY"<<endl;

	getch();}
	f1.close();
      }

      void  menu()    //TO CALL DIFFERENT FUNCTIONS
    {  directory d;
       clrscr();
       textbackground(WHITE);
       textcolor(BLACK);
       gotoxy(30,8);
       cout<<" A:ADDITION ";
       gotoxy(30,9);
       cout<<" D:DELETION \n  ";
       gotoxy(30,10);
       cout<<" M:MODIFICATION \n  ";
       gotoxy(30,11);
       cout<<" S:SEARCH \n  ";
       gotoxy(30,12);
       cout<<" V:VIEW ALL RECORDS \n";
       gotoxy(30,13);
       cout<<" E:EXIT \n ";
       char ch;
       cin>>ch;
      switch(ch)
	   {
	     case 'a':
	     case 'A':
	       {addition(d);
		break; }
	     case 'd' :
	     case 'D' :
	       {del(d);
		break;}
	     case 'm':
	     case 'M':
		{modification(d);
		 break;}
	     case 's':
	     case 'S':
		 {search(d);
		  break;}
	     case 'v':
	     case 'V':
		{view(d);
		break;}
	     case 'e':
	     case 'E':
		exit(0);

	 }
	 menu();
	 }

void welcome_screen()         //MAIN SCREEN
     {
	clrscr();
	gotoxy(20,10);
	cout<<"**************** W E L C O M E  *********************** ";
	gotoxy(20,14);
	textcolor(BLUE);
	cout<<" T E L E P H O N E  M A N A G E M E N T  S O F T W A R E  ";
	gotoxy(38,16);
	textcolor(BLUE);
	cout<<" D O N E  B Y :  ";
	gotoxy(50,18);
	cout<<" RAHUL YADAV
	";
	gotoxy(20,25);
	textcolor(BLUE);
	cout<<" *** PRESS ANY KEY TO CONTINUE***";
	getch();
	clrscr();
	menu();
	}


void main()     //TO EXECUTE THE PROGRAM
    { clrscr();
      welcome_screen();

   }
