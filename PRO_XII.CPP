#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
/***************************INITIALISING GRAPHICS******************************/
class graphics
{ int gd, gm, i ;
  char ch ;
  public : void page_1()
  { gd=DETECT ;
    initgraph(&gd, &gm, "f:\\tc\\bgi") ;
    setcolor(10) ;
    settextstyle(4,0,6) ;
    setbkcolor(RED) ;
    outtextxy(40,50,"COMPUTER SCIENCE") ;
    rectangle(5,5,getmaxx(), getmaxy()) ;
    rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
    line(35,115,600,115) ;
    settextstyle(1,0,4) ;
    outtextxy(100,140,"A PROJECT ON C++") ;
    outtextxy(300,240,"MADE BY-") ;
    outtextxy(300,300,"GURMANJOT SINGH") ;
    settextstyle(1,0,2);
    outtextxy(40,400,"PRESS ENTER KEY TO SKIP") ;
    ch=getch() ;
    if(ch==char(13))cleardevice() ;
    else page_1() ;
  }
}g ;
/********************************CLASS STUDENT*********************************/
int i, j ;
char ch ;

class student
{ char n[80], e[80];
  long r ;
  float p ;
  public : void input()
	 { cout<<"NAME :" ;
	   gets(n) ;
	   cout<<"EXAM :" ;
	   gets(e) ;
	   cout<<"ROLL NO.:" ;
	   cin>>r ;
	   cout<<"PERCENTAGE :";
	   cin>>p ;
	 }
	   void details()
	 { cout<<"\t\tNAME :"<<n<<"\n" ;
	   cout<<"\t\tEXAM :"<<e<<"\n" ;
	   cout<<"\t\tROLL NO. :"<<r<<"\n" ;
	   cout<<"\t\tPERCENTAGE :"<<p<<"\n" ;
	 }
	   void display()
	 { cout<<"\t"<<n<<"\t\t"<<e<<"\t\t"<<r<<"\t\t"<<p<<"\n" ;
	 }
	   void modify() ;

	   char *retn()
	 { return n ;
	 }
	   float retp()
	 { return p ;
	 }
	   long retroll()
	 { return r ;
	 }
}x,a[100], t;

void student::modify()
	 { cout<<"ENTER THE NEW DETAILS\n" ;
	   for(i=1 ; i<=22 ; i++)
	   cout<<"-" ;
	   cout<<"\n\n" ;
	   char stu_name[80]=" ", examination[80]=" " ;
	   long roll_no ;
	   float percentage ;
	   cout<<"MODIFIED NAME(PRESS 'R' OR 'r' TO RETAIN THE OLD NAME) :" ;
	   gets(stu_name) ;
	   cout<<"\n\n" ;
	   cout<<"MODIFIED EXAM(PRESS 'R' OR 'r' TO RETAIN THE OLD EXAM) :" ;
	   gets(examination) ;
	   cout<<"\n\n" ;
	   cout<<"MODIFIED ROLL NO.(1 TO RETAIN THE OLD ROLL NUMBER) :" ;
	   cin>>roll_no ;
	   cout<<"\n\n" ;
	   cout<<"MODIFIED PERCENTAGE(1 TO RETAIN THE OLD PERCENTAGE) :" ;
	   cin>>percentage ;
	   if(strcmpi(stu_name,"R")!=0)strcpy(n,stu_name) ;
	   if(strcmpi(examination,"R")!=0)strcpy(e,examination) ;
	   if(percentage!=1)p = percentage ;
	   if(roll_no!=1)r=roll_no ;
	 }

/******************************FILE F1 OPENED**********************************/
void create()
{ setbkcolor(0) ;
/*cout<<"INPUT THE DATA OF THE STUDENTS :\n" ;
  for(i=0 ; i<=32 ; i++)
  cout<<"-" ;
  cout<<"\n\n" ;
  ofstream f1("student.dat", ios::binary) ;
  do
  { x.input() ;
    cout<<"\n" ;
    f1.write((char*)&x, sizeof(x)) ;
    cout<<"Do you want to continue(y/n) :" ;
    cin>>ch ;
    cout<<"\n" ;
  }
  while(ch=='y' || ch=='Y') ;
  cout<<"PRESS ENTER TO SEE THE MENU " ;
  f1.close() ;    */
  ch=getch() ;
  if(ch==char(13)){ clrscr() ;
		    cleardevice() ;
		    setbkcolor(RED) ;
		  }
}
/**********************************PAGE 2**************************************/
 void page_2()
  { rectangle(5,5,getmaxx(), getmaxy()) ;
    rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
    setbkcolor(RED) ;
    settextstyle(1,0,4) ;
    setcolor(10) ;
    outtextxy(200,40,"A PROGRAM") ;
    outtextxy(260,85," TO") ;
    outtextxy(120,130," MANTAIN THE RECORDS") ;
    outtextxy(260,175," OF") ;
    outtextxy(170,220," THE STUDENTS") ;
    settextstyle(1,0,2) ;
    outtextxy(60,360,"PRESS ENTER KEY TO INPUT THE DATA") ;
    ch=getch() ;
    if(ch==char(13)){ cleardevice() ;
		      create() ;
		      clrscr() ;
		      cleardevice() ;
		    }
    else page_2() ;
  }
/********************************BASE_CHANGE 1**********************************/
    void base_change1()
  { clrscr() ;
    cleardevice() ;
    setbkcolor(0) ;
  }
/********************************BASE_CHANGE 2********************************/
    void base_change2()
  { clrscr() ;
    cleardevice() ;
    setbkcolor(RED) ;
  }
/*********************************1.DISPLAY*************************************/
  void disp()
  {  cout<<"\n\n" ;
     cout<<"\tDISPLAYING THE RECORDS\n\t" ;
     for(i=1 ; i<=22 ; i++)
     cout<<"-" ;
     cout<<"\n\n" ;
     cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n\n" ;
     ifstream f2("student.dat", ios :: binary) ;
     while(f2.read((char*)&x, sizeof(x)))
     { x.display() ;
       cout<<"\n" ;
     }
     f2.close() ;
  }
/*********************************2.APPEND**************************************/
     void append()
  {  cout<<"ADD MORE RECORDS TO THE FILE\n" ;
     fstream f3("student.dat", ios::binary | ios::app) ;
     do
     { x.input() ;
       cout<<"\n" ;
       f3.write((char*)&x, sizeof(x)) ;
       cout<<"Do you want to continue(y/n) :" ;
       cin>>ch ;
       cout<<"\n" ;
     }
     while(ch=='y' || ch=='Y') ;
     f3.close() ;
     if(ch=='n' || ch=='N'){ base_change1() ;
			     cout<<"\n\n\tMODIFIED FILE :\n" ;
			     cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n\n" ;
			     ifstream f4("student.dat", ios::binary) ;
			     while(f4.read((char*)&x, sizeof(x)))
			     { x.display() ;
			       cout<<"\n" ;
			     }
			     f4.close() ;
			   }
}
/********************************3.DELETE**************************************/
     void del()
     {  char name[80] ;
	cout<<"\n\n\tINPUT A NAME TO DELETE THAT RECORD :" ;
	gets(name) ;
	ofstream f5("new.dat", ios::binary) ;
	ifstream f6("student.dat", ios::binary) ;
	while(f6.read((char*)&x, sizeof(x)))
	if(strcmpi(x.retn(),name)!=0)
	f5.write((char*)&x, sizeof(x)) ;
	f5.close() ;
	f6.close() ;
	remove("student.dat") ;
	rename("new.dat","student.dat") ;
	cout<<"\n\tMODIFIED FILE :\n" ;
	cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n\n" ;
	ifstream f7("student.dat", ios::binary) ;
	while(f7.read((char*)&x, sizeof(x)))
	{ x.display() ;
	  cout<<"\n" ;
	}
	f7.close() ;
     }

/*******************************4.MODIFY**************************************/
     void modified()
     { fstream f8("student.dat", ios::binary | ios::in | ios::out) ;
       int rno ;
       long pos ;
       char found='f' ;
       cout<<"ENTER ROLL NUMBER OF STUDENT WHOSE RECOED IS TO BE MODIFIED :" ;
       cin>>rno ;
       while(!f8.eof())
       { pos=f8.tellg() ;
	 f8.read((char*)&x, sizeof(x)) ;
	 if(x.retroll() == rno)
		     { x.modify() ;
		       f8.seekg(pos) ;
		       f8.write((char*)&x, sizeof(x)) ;
		       found='t' ;
		       break ;
		     }
       }
       if(found=='f')cout<<"\n\nROLL NUMBER NOT FOUND !!!\n" ;
       f8.seekg(0) ;
       base_change1() ;
       cout<<"\n\n\tDISPLAYING THE MODIFIED RECORDS\n\t" ;
       for(i=1 ; i<=30 ; i++)
       cout<<"-" ;
       cout<<"\n\n" ;
       cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n\n" ;
       ifstream f9("student.dat", ios :: binary) ;
       while(f9.read((char*)&x, sizeof(x)))
     { x.display() ;
       cout<<"\n" ;
     }
       f8.close() ;
       f9.close() ;
     }
/*******************************5.SORT RANK***********************************/
    void sort_rank()
    { i=0 ;
      ifstream f10("student.dat", ios::binary) ;
      while(f10.read((char*)&a[i], sizeof(a[i])))
      i++ ;
      f10.close() ;
      int n=i ;
      for(i=0 ; i<=n-2 ; i++)
      for(j=i+1 ; j<=n-1 ; j++)
      if(a[i].retp()<a[j].retp()){ t=a[i] ;
				   a[i]=a[j] ;
				   a[j]=t ;
				 }
      ofstream f11("student.dat", ios::binary) ;
      for(i=0 ; i<=n-1 ; i++)
      f11.write((char*)&a[i], sizeof(a[i])) ;
      f11.close() ;
      cout<<"\n\n\tLIST OF THE STUDENTS RANKWISE\n" ;
      cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n" ;
      ifstream f12("student.dat", ios::binary) ;
      while(f12.read((char*)&x, sizeof(x)))
      { x.display() ;
	cout<<"\n" ;
      }
      f12.close() ;
    }

/******************************6.SORT ALPHA************************************/
    void sort_alpha()
    { i=0 ;
      ifstream f13("student.dat", ios::binary) ;
      while(f13.read((char*)&a[i], sizeof(a[i])))
      i++ ;
      f13.close() ;
      int n=i ;
      for(i=0 ; i<=n-2 ; i++)
      for(j=i+1 ; j<=n-1 ; j++)
      if(strcmpi(a[i].retn(),a[j].retn())>0){ t=a[i] ;
					      a[i]=a[j] ;
					      a[j]=t ;
					    }
      ofstream f14("student.dat", ios::binary) ;
      for(i=0 ; i<=n-1 ; i++)
      f14.write((char*)&a[i], sizeof(a[i])) ;
      f14.close() ;
      cout<<"\n\n\tLIST OF THE STUDENTS SORTED IN ALPHABETICAL ORDER\n" ;
      cout<<"\tNAME\t\tEXAM\t\tROLL NO.\tPERCENTAGE\n" ;
      ifstream f15("student.dat", ios::binary) ;
      while(f15.read((char*)&x, sizeof(x)))
      { x.display() ;
	cout<<"\n" ;
      }
	f15.close() ;
    }
/********************************7.SEARCH*************************************/
    void search()
    {   char N[80] ;
	cout<<"\n\n\tINPUT A NAME TO GET THE DETAILS :" ;
	gets(N) ;
	cout<<"\n\n" ;
	cout<<"\tSEARCHING " ;
	for(i=1 ; i<=4 ; i++)
	{ cout<<"" ;
	  delay(500) ;
	}
	ifstream f16("student.dat", ios::binary) ;
	while(f16.read((char*)&x, sizeof(x)))
	if(strcmpi(N,x.retn())==0){ cout<<"\n\n\tDETAILS OF "<<N<<"\n\n" ;
				    x.details() ;
				    rectangle(120,130,250,210) ;
				    rectangle(117,127,253,213) ;
				  }
	cout<<"\n\n\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT\n\n" ;
	rectangle(5,5,getmaxx(), getmaxy()) ;
	rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
	f16.close() ;
    }

/********************************MAIN PROGRAM*********************************/
    void next()
  { settextstyle(1,0,1) ;
    outtextxy(40,40,"YOU HAVE ALREADY INPUT THE DATA. PLEASE HAVE A LOOK") ;
    outtextxy(40,65,"ON THE MENU GIVEN BELOW AND CHOOSE ONE OF THEM") ;
    settextstyle(2,0,5) ;
    outtextxy(60,110,"1.TO DISPLAY THE DATA") ;
    outtextxy(60,140,"2.TO ADD MORE RECORDS") ;
    outtextxy(60,170,"3.TO DELETE A RECORD" ) ;
    outtextxy(60,200,"4.TO MODIFY A RECORD ") ;
    outtextxy(60,230,"5.TO ARRANGE THE RECORDS RANK-WISE") ;
    outtextxy(60,260,"6.TO ARRANGE THE RECORDS IN ALPHABETICAL ORDER") ;
    outtextxy(60,290,"7.SEARCH") ;
    rectangle(5,5,getmaxx(), getmaxy()) ;
    rectangle(8,8,getmaxx()-4, getmaxy()-4) ;
    rectangle(60,370,450,440) ;
    outtextxy(65,375,"PLEASE CHOOSE A MENU ITEM BY PRESSING A NUMBER") ;
    outtextxy(65,405,"REPRESENTING IT FROM THE MENU BAR") ;
    ch=getch() ;
    switch(ch)
    { case '1' : base_change1() ;
		 disp() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '2' : base_change1() ;
		 append() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '3' : base_change1() ;
		 del() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '4' : base_change1() ;
		 modified() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '5' : base_change1() ;
		 sort_rank() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '6' : base_change1() ;
		 sort_alpha() ;
		 cout<<"\tPRESS ENTER TO GO MENU BAR OR SPACE BAR TO EXIT" ;
		 rectangle(5,5,getmaxx(), getmaxy()) ;
		 rectangle(8,8,getmaxx()-4,getmaxy()-4) ;
		 ch=getch() ;
		 if(ch==char(13)){ base_change2() ;
				   next() ;
				 }
		 if(ch==char(32))exit(0) ;
		 break ;

      case '7' :   base_change1() ;
		   search() ;
		   ch=getch() ;
		   if(ch==char(13)){ base_change2() ;
				     next() ;
				   }
		   if(ch==char(32))exit(0) ;
		   break ;
      default  : next() ;
    };
}
/**********************************MAIN()**************************************/
main ()
{ clrscr();
g.page_1();
  page_2();
  next()  ;
  getch() ;
  return 0;
}