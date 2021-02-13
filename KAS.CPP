#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<process.h>
struct name{char n[25],p[10];
	}x,y;
class gr1{char n[30],fn[30],mn[30],sec,add[100],tn[11];
	  long int r,adm,cl;
   public:void input();
	  char* retn()
	  {return n;
	  }
	  void display();
	  void change();
	  void change1();
	  void change2();
	  void change3();
	  void change4();
	  void change5();
	  void change6();
	  void change7();
	  void change8();
	 };
class profile{char name[80],type[30];
	      int score;
       public:void inputs(char a[80],int s,char t[30])
	      {strcpy(name,a);
	       score=s;
	       strcpy(type,t);
	      }
	      void display()
	      {cprintf(name);
	       cout<<"\t\t\t"<<score<<"\t\t\t"<<type<<'\n';
	       }
	     }m;
void start();
void disp();
void start1();
void game();
void database();
void newf();
void show();
void cla();
void edit();
void add();
void search();
void del();
void delf();
void save(char n[80],int score,char t[30]);
void game1();
void game2();
void game3();
void scores();
void main()
{ start();
}
void start()
{clrscr();
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(12);
 rectangle(0,0,639,479);
 line(319,90,299,105);
 line(319,90,339,105);
 arc(293,108,210,30,5);
 arc(345,108,150,330,5);
 line(288,112,270,118);
 line(350,112,368,118);
 ellipse(263,165,300,70,20,50);
 ellipse(375,165,110,240,20,50);
 line(277,203,361,203);
 rectangle(273,208,365,230);
 circle(319,160,25);
 line(319,165,314,150);
 line(319,165,324,150);
 line(314,150,324,150);
 setcolor(14);
 arc(316,145,300,60,6);
 arc(322,145,120,240,6);
 setcolor(12);
 line(308,175,333,162);
 line(310,178,335,165);
 line(308,175,310,178);
 line(333,162,335,165);
 line(333,162,337,160);
 line(335,165,337,160);
 line(330,175,305,162);
 line(327,178,303,165);
 line(327,178,330,175);
 line(303,165,305,162);
 line(298,160,303,165);
 line(298,160,305,162);
 settextstyle(2,0,5);
 setcolor(14);
 outtextxy(276,210,"TRUTH");
 outtextxy(321,210,"IS");
 outtextxy(332,210," GOD");
 settextstyle(2,0,4);
 outtextxy(288,160,"A");
 outtextxy(288,152,"R");
 outtextxy(289,144,"M");
 outtextxy(293,137,"Y");
 setcolor(10);
 outtextxy(300,130,"P");
 outtextxy(305,126,"U");
 outtextxy(311,124,"B");
 outtextxy(317,123,"L");
 outtextxy(322,124,"I");
 outtextxy(326,125,"C");
 setcolor(14);
 outtextxy(333,128,"S");
 outtextxy(338,132,"C");
 outtextxy(343,137,"H");
 outtextxy(345,145,"O");
 outtextxy(347,153,"O");
 outtextxy(347,160,"L");
 setcolor(12);
 settextstyle(4,0,7);
 setcolor(11);
 outtextxy(40,3,"Army");
 setcolor(13);
 outtextxy(40,8,"____");
 setcolor(13);
 outtextxy(230,3,"Public");
 setcolor(11);
 outtextxy(230,8,"____");
 setcolor(11);
 outtextxy(430,3,"School");
 setcolor(13);
 outtextxy(430,8,"_____");
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(80,130,"Dhaula");
 setcolor(12);
 outtextxy(75,133,"_____");
 setcolor(14);
 outtextxy(430,130,"Kaun");
 setcolor(12);
 outtextxy(425,133,"____");
 delay(200);
 settextstyle(7,0,4);
 setcolor(6);
 outtextxy(60,240,"Computer");
 setcolor(2);
 outtextxy(235,240,"Science");
 outtextxy(365,240,"Project");
 setcolor(6);
 outtextxy(495,240,"Report");
 settextstyle(1,0,2);
 setcolor(3);
 outtextxy(90,315,"Submitted To");
 outtextxy(390,315,"Submitted By");
 setcolor(14);
 outtextxy(88,320,"__________ __");
 outtextxy(388,320,"__________ __");
 setcolor(4);
 outtextxy(90,350,"Mrs.Chavi Ghosh");
 outtextxy(390,350,"Anoop Sharma");
 outtextxy(390,375,"Akshay Jha");
 setcolor(14);
 rectangle(250,440,400,445);
 setcolor(1);
 for(int i=1;i<149;i++)
 {rectangle(251,441,251+i,444);
  delay(50);
 }
 start1();
}
void gr1::change()
{cout<<'\n';
 cprintf("Enter New Name:");
 gets(n);
}
void gr1::change1()
{cout<<'\n';
 cprintf("Enter New Father's Name:");
 gets(fn);
}
void gr1::change2()
{cout<<'\n';
 cprintf("Enter New Mother's Name:");
 gets(mn);
}
void gr1::change3()
{cout<<'\n';
 cprintf("Enter New Roll no.:");
 cin>>r;
}
void gr1::change4()
{cout<<'\n';
 cprintf("Enter New Admission no.:");
 cin>>adm;
}
void gr1::change5()
{cout<<'\n';
 cprintf("Enter New Class:");
 cin>>cl;
}
void gr1::change6()
{cout<<'\n';
 cprintf("Enter New Section:");
 cin>>sec;
}
void gr1::change7()
{cout<<'\n';
 cprintf("Enter New Address:");
 gets(add);
}
void gr1::change8()
{cout<<'\n';
 cprintf("Enter New Telephone no.:");
 gets(tn);
}
void gr1::input()
	  {cprintf("Enter name:");
	   gets(n);
	   cprintf("Enter father's name:");
	   gets(fn);
	   cprintf("Enter mother's name:");
	   gets(mn);
	   cprintf("Enter roll no.:");
	   cin>>r;
	   cprintf("Enter admission no.:");
	   cin>>adm;
	   cprintf("Enter class:");
	   cin>>cl;
	   cprintf("Enter section:");
	   cin>>sec;
	   cprintf("Enter address:");
	   gets(add);
	   cprintf("Enter telephone no.:");
	   gets(tn);
	  }
void gr1::display()
{cprintf("Name:");
 cout<<n<<'\n';
 cprintf("Father's name:");
 cout<<fn<<'\n';
 cprintf("Mother's name:");
 cout<<mn<<'\n';
 cprintf("Roll no.:");
 cout<<r<<'\n';
 cprintf("Admission no.:");
 cout<<adm<<'\n';
 cprintf("Class:");
 cout<<cl<<'\n';
 cprintf("Section:");
 cout<<sec<<'\n';
 cprintf("Address:");
 cout<<add<<'\n';
 cprintf("Telephone no.:");
 cout<<tn<<'\n';
}
void delf()
{clrscr();
 closegraph();
 ifstream f1("filed.dat",ios::binary);
 ofstream f2("filed1.dat",ios::binary);
 char ch[25];//int i=0;
 cprintf("Enter the name of file to be deleted:");
 gets(ch);
 while(f1.read((char*)&y,sizeof(y)))
  if(strcmpi(ch,y.n)!=0)
   f2.write((char*)&y,sizeof(y));
 f1.close();
 f2.close();
 remove("filed.dat");
 rename("filed1.dat","filed.dat");
 int k;
 ifstream f5("Count.txt");
 f5>>k;
 f5.close();
 k--;
 ofstream f6("Count.txt");
 f6<<k;
 f6.close();
 textcolor(4);
 cprintf("File Deleted");
 getch();
 return;
}
void del()
{clrscr();
 closegraph();
 ifstream f1(y.n,ios::binary);
 ofstream f2("temp.dat",ios::binary);
 gotoxy(2,3);
 char ch[30];gr1 x;//int i=0;
 textcolor(9);
 cprintf("Enter name(FULL) of record to be deleted:");
 gets(ch);
 while(f1.read((char*)&x,sizeof(x)))
  if(strcmpi(ch,x.retn())!=0)
   f2.write((char*)&x,sizeof(x));
 f1.close();
 f2.close();
 remove(y.n);
 rename("temp.dat",y.n);
 textcolor(4);
 cprintf("Record Deleted");
 getch();
 return;

}
void search()
{clrscr();
 closegraph();
 gotoxy(2,3);
 ifstream f1(y.n,ios::binary);
 gr1 x;int flag=0;char ch[30],ch1[25];
 textcolor(2+128);
 cprintf("Enter name(FULL) whose record to be searched:");
 gets(ch);
 while(f1.read((char*)&x,sizeof(x)))
 {a:
  if(strcmpi(x.retn(),ch)==0)
  {flag++;
   cout<<'\n';
   textcolor(14);
   x.display();
   textcolor(2+128);
   cout<<'\n'<<'\n';
   cprintf("Press Enter to view next record");
   textcolor(7);
  char s;
  s=getch();
  if(s==13)
  {if(f1.read((char*)&x,sizeof(x)))
   {clrscr();
    goto a;
   }
   else {cout<<'\n'<<'\n';
	 textcolor(4);
	 cprintf("No more record");
	 break;
	}
  }
  else goto a;
 }
}
if(flag==0)
{textcolor(4);
 cprintf("Record not exist");
}
f1.close();
getch();
return;
}
void add()
{clrscr();
 closegraph();
 gotoxy(2,3);
 fstream f1(y.n,ios::binary|ios::app);
 gr1 z,y[100],t;
  char ch;
 do{textcolor(2+128);
     cprintf("Enter record:");
     cout<<'\n'<<'\n';
     textcolor(14);
     z.input();
     f1.write((char*)&z,sizeof(z));
     textcolor(2+128);
     cprintf("Want to enter more record(Y/N):");
     cin>>ch;
    }while(ch=='Y'||ch=='y');
f1.close();
return;
}
void show()
{clrscr();
 closegraph();
 ifstream f1(y.n,ios::binary);
 gr1 x;int i=0;char s;
 g:
 while(f1.read((char*)&x,sizeof(x)))
 {i++;
  a:
  gotoxy(2,3);
  textcolor(2+128);
  cprintf("Record");
  cout<<" "<<i<<'\n'<<'\n';
  x.display();
  cout<<'\n'<<'\n';
  textcolor(2+128);
  cprintf("Press Enter to view next record");
  s=getch();
  if(s==13)
  {if(f1.read((char*)&x,sizeof(x)))
   {clrscr();
    goto a;
   }
   else {cout<<'\n'<<'\n';
    textcolor(4);
    cprintf("No more record");
    break;
   }
  }
 else goto a;
 }
 if(i==0)
  cprintf("File empty");
getch();
f1.close();
return;
}
void modify()
{m:
 clrscr();
 closegraph();
 gotoxy(1,1);
 fstream f1(y.n,ios::binary|ios::in|ios::out);
 gr1 x;int ctr=0,flag=0;char ch[30],ch1[25];
 textcolor(2+128);
 cprintf("Enter name(FULL) whose record to be edit:");
 gets(ch);
 while(f1.read((char*)&x,sizeof(x)))
 {if(strcmpi(x.retn(),ch)==0)
  {flag++;
   cout<<'\n';
   textcolor(14);
   x.display();
   textcolor(2+128);
   cprintf("Modify :");
   textcolor(14);
   cout<<'\n';cprintf("1. Name");
   cout<<'\n';cprintf("2. Father's Name");
   cout<<'\n';cprintf("3. Mother's Name");
   cout<<'\n';cprintf("4. Roll no.");
   cout<<'\n';cprintf("5. Admission no.");
   cout<<'\n';cprintf("6. Class");
   cout<<'\n';cprintf("7. Section");
   cout<<'\n';cprintf("8. Address");
   cout<<'\n';cprintf("9. Telephone no.");
   cout<<'\n';cprintf("Enter choice(1-9)");
   char d=getch();
   textcolor(14);
   if(d=='1')
     x.change();
   else if(d=='2')
     x.change1();
   else if(d=='3')
     x.change2();
   else if(d=='4')
     x.change3();
   else if(d=='5')
     x.change4();
   else if(d=='6')
     x.change5();
   else if(d=='7')
     x.change6();
   else if(d=='8')
     x.change7();
   else if(d=='9')
     x.change8();
   else {textcolor(4);
	 cprintf("Wrong choice");
	 cout<<'\n';
	 cprintf("Enter correct choice");
	 getch();
	 goto m;
	}
   f1.seekg(ctr*sizeof(x));
   f1.write((char*)&x,sizeof(x));
   }
   ctr++;
  }
f1.close();
char ch3;
if(flag==0)
{cout<<'\n';
 textcolor(4);
 cprintf("Record not present");
 getch();
 return;
}
else{textcolor(2);
     cout<<'\n';
     cprintf("Want to make more changes(Y/N):");
     cin>>ch3;
     if(ch3=='y'||ch3=='Y')
      goto m;
     else return;
    }
}
void disp()
{z:
 closegraph();
 clrscr();
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 settextstyle(8,0,1);
 setcolor(4);
 rectangle(0,0,639,479);
 setbkcolor(6);
 setcolor(15);
 settextstyle(1,0,1);
 outtextxy(120,30,"Choose any one(PRESS ENTER)");
 outtextxy(120,420,"Use '1'for moving down and '2' for up");
 settextstyle(1,0,1);
 setcolor(4);
 rectangle(0,0,639,479);
 a:
 setcolor(14);
 outtextxy(30,90,"Display Record");
 setcolor(1);
 outtextxy(30,150,"Add Record");
 outtextxy(30,210,"Edit Record");
 outtextxy(30,270,"Search Record");
 outtextxy(30,330,"Delete Record");
 outtextxy(30,390,"Back");
 int i=0;
 m:
 char x;
 x=getch();
 if(x==13)
 {if(i==0)
  {show();
   goto z;
  }
  else if(i==1)
       {add();
	goto z;
       }
   else if(i== 2)
	{modify();
	 goto z;
	}
    else if(i==3)
	 {search();
	  goto z;
	 }
    else if(i==4)
	 {del();
	  goto z;
	 }
    else return;
 }
 if(i==0)
  {if(x=='1')
   {b:
    setcolor(1);
    outtextxy(30,90,"Display Record");
    setcolor(14);
    outtextxy(30,150,"Add Record");
    setcolor(1);
    outtextxy(30,210,"Edit Record");
    outtextxy(30,270,"Search Record");
    outtextxy(30,330,"Delete Record");
    outtextxy(30,390,"Back");
    i++;
    goto m;
   }
   else goto m;
  }
  else if(i==1)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,90,"Display Record");
    outtextxy(30,150,"Add Record");
    setcolor(14);
    outtextxy(30,210,"Edit Record");
    setcolor(1);
    outtextxy(30,270,"Search Record");
    outtextxy(30,330,"Delete Record");
    outtextxy(30,390,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	goto a;
	}
   else {i=0;
	 goto a;
	}
  }
 else if(i==2)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,90,"Display Record");
    outtextxy(30,150,"Add Record");
    outtextxy(30,210,"Edit Record");
    setcolor(14);
    outtextxy(30,270,"Search Record");
    setcolor(1);
    outtextxy(30,330,"Delete Record");
    outtextxy(30,390,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	 setcolor(1);
	 outtextxy(30,90,"Display Record");
	 setcolor(14);
	 outtextxy(30,150,"Add Record");
	 setcolor(1);
	 outtextxy(30,210,"Edit Record");
	 outtextxy(30,270,"Search Record");
	 outtextxy(30,330,"Delete Record");
	 outtextxy(30,390,"Back");
	 goto m;
	}
   else{i=0;
	goto a;
       }
  }
  else if(i==3)
  {if(x=='1')
    {setcolor(1);
     outtextxy(30,90,"Display Record");
     outtextxy(30,150,"Add Record");
     outtextxy(30,210,"Edit Record");
     outtextxy(30,270,"Search Record");
     setcolor(14);
     outtextxy(30,330,"Delete Record");
     setcolor(1);
     outtextxy(30,390,"Back");
     i++;goto m;
    }
   if(x=='2')
    {i--;
     setcolor(1);
     outtextxy(30,90,"Display Record");
     outtextxy(30,150,"Add Record");
     setcolor(14);
     outtextxy(30,210,"Edit Record");
     setcolor(1);
     outtextxy(30,270,"Search Record");
     outtextxy(30,330,"Delete Record");
     outtextxy(30,390,"Back");
     goto m;
    }
   else {i=0;
	 goto a;
	}
  }
  else if(i==4)
  {if(x=='1')
    {setcolor(1);
     outtextxy(30,90,"Display Record");
     outtextxy(30,150,"Add Record");
     outtextxy(30,210,"Edit Record");
     outtextxy(30,270,"Search Record");
     outtextxy(30,330,"Delete Record");
     setcolor(14);
     outtextxy(30,390,"Back");
     i++;goto m;
    }
   else if(x=='2')
    {i--;
     setcolor(1);
     outtextxy(30,90,"Display Record");
     outtextxy(30,150,"Add Record");
     outtextxy(30,210,"Edit Record");
     setcolor(14);
     outtextxy(30,270,"Search Record");
     setcolor(1);
     outtextxy(30,330,"Delete Record");
     outtextxy(30,390,"Back");
     goto m;
    }
  else {i=0;
	goto a;
       }
  }

  else if(i==5)
  {if(x=='1')
    goto a;
   else if(x=='2')
   {i--;
    setcolor(1);
     outtextxy(30,90,"Display Record");
     outtextxy(30,150,"Add Record");
     outtextxy(30,210,"Edit Record");
     outtextxy(30,270,"Search Record");
     setcolor(14);
     outtextxy(30,330,"Delete Record");
     setcolor(1);
     outtextxy(30,390,"Back");
     goto m;
    }
   else goto a;
  }
 getch();
}
void cla()
 {fstream f1(x.n,ios::binary|ios::in|ios::out);
  clrscr();
  closegraph();
  gr1 z,y[100],t;
  char ch;
  do{clrscr();
     textcolor(2+128);
     cprintf("Enter record:");
     textcolor(14);
     cout<<'\n'<<'\n';
     z.input();
     f1.seekg(0,ios::end);
     f1.write((char*)&z,sizeof(z));
     textcolor(2+128);
     cprintf("Want to enter more record(Y/N):");
     cin>>ch;
    }while(ch=='Y'||ch=='y');
 return;
 }
void newf()
{m:
 fstream f1("filed.dat",ios::binary|ios::app);
 clrscr();
 closegraph();
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 settextstyle(8,0,1);
 setcolor(4);
 rectangle(0,0,639,479);
 setbkcolor(1);
 setcolor(14);
 outtextxy(30,40,"Please Enter");
 setcolor(12);
 outtextxy(50,80,"File Name(max 25 char)");
 rectangle(50,110,260,128);
 setcolor(14);
 outtextxy(50,160,"Password(max 10 char)");
 rectangle(50,190,150,208);
 char a;
 int i=0;
 gotoxy(8,8);
 gets(x.n);
 if(strcmpi(x.n,'\0')==0)
 {outtextxy(50,300,"Please enter some text");
  delay(800);
  goto m;
 }
 setcolor(14);
 outtextxy(50,80,"File Name(max 25 char)");
 rectangle(50,110,260,128);
 setcolor(12);
 outtextxy(50,160,"Password(max 10 char)");
 rectangle(50,190,150,208);
 gotoxy(8,13);
 while(a!=13)
 {a=getch();
  if(a==13)break;
  if(i==9||a==8)goto m;
  x.p[i]=a;
  cout<<"*";
  i++;
 }
 x.p[i]='\0';
 f1.write((char*)&x,sizeof(x));
 cla();
 f1.close();
 closegraph();
return;
}
void edit()
{p:
 clrscr();
 closegraph();
 int i=0;
 ifstream f1("filed.dat",ios::binary);
 textcolor(4+128);
 cprintf("All Files:");
 textcolor(10);
 cout<<'\n';
 while(f1.read((char*)&y,sizeof(y)))
 {cprintf(y.n);
  cout<<"   ";
  if(i==4)
  {cout<<'\n';
   i=-1;
  }
  i++;
 }
 f1.close();
 char ch[25],ch1[10];
 textcolor(14);
 gotoxy(1,24);
 cprintf("Enter file name:");
 gets(ch);
 ifstream f2("filed.dat",ios::binary);
 while(f2.read((char*)&y,sizeof(y)))
 {if(strcmpi(y.n,ch)!=0)
   continue;
  else {gotoxy(40,24);
	cprintf("Enter password:");
	gets(ch1);
	if(strcmpi(ch1,y.p)==0)
	 disp();
	else{gotoxy(0,25);
	     cprintf("Wrong password");
	     delay(800);
	     goto p;
	    }
       }
  }
  f2.close();
  return;
}
void database()
{z:
 closegraph();
 clrscr();
 int k;
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(15);
  setbkcolor(6);
  settextstyle(1,0,1);
 outtextxy(120,30,"Choose any one(PRESS ENTER)");
 outtextxy(120,400,"Use '1'for moving down and '2' for up");
 setcolor(4);
 rectangle(0,0,639,479);
 a:
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(30,100,"New File");
 setcolor(1);
 outtextxy(30,180,"Open File");
 outtextxy(30,260,"Delete File");
 outtextxy(30,340,"Back");
 int i=0;
 m:
 char x;
 x=getch();
 if(x==13)
 {if(i==0)
  {newf();
   ifstream f1("Count.txt");
   f1.seekg(0);
   f1>>k;
   f1.close();
   k++;
   ofstream f2("Count.txt");
   f2<<k;
   f2.close();
   goto z;
  }
  else if(i==1)
       {ifstream f3("Count.txt");
	f3.seekg(0);
	f3>>k;
	 if(k==0)
	 {setcolor(10);
	  settextstyle(1,0,1);
	  outtextxy(300,350,"No file exit");
	  getch();
	 }
	 else edit();
	goto z;
       }
   else if(i==2)
	{delf();
	 goto z;
	}
   else return;
 }
 if(i==0)
  {if(x=='1')
   {b:
    setcolor(1);
    outtextxy(30,100,"New File");
    setcolor(14);
    outtextxy(30,180,"Open File");
    setcolor(1);
    outtextxy(30,260,"Delete File");
    outtextxy(30,340,"Back");
    i++;
    goto m;
   }
   else goto m;
  }
  else if(i==1)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,100,"New File");
    outtextxy(30,180,"Open File");
    setcolor(14);
    outtextxy(30,260,"Delete File");
    setcolor(1);
    outtextxy(30,340,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	goto a;
	}
   else {i=0;
	 goto a;
	}
  }
 else if(i==2)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,100,"New File");
    outtextxy(30,180,"Open File");
    outtextxy(30,260,"Delete File");
    setcolor(14);
    outtextxy(30,340,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	 setcolor(1);
	 outtextxy(30,100,"New File");
	 setcolor(14);
	 outtextxy(30,180,"Open File");
	 setcolor(1);
	 outtextxy(30,260,"Delete File");
	 outtextxy(30,340,"Back");
	 goto m;
	}
   else{i=0;
	goto a;
       }
  }
  else if(i==3)
  {if(x=='1')
    goto a;
   if(x=='2')
    {i--;
     setcolor(1);
     outtextxy(30,100,"New File");
     outtextxy(30,180,"Open File");
     setcolor(14);
     outtextxy(30,260,"Delete File");
     setcolor(1);
     outtextxy(30,340,"Back");
     goto m;
    }
   else goto a;
  }
}
void start1()
{z:
 closegraph();
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(6);
 rectangle(0,0,639,479);
 setcolor(15);
 settextstyle(1,0,1);
 outtextxy(120,30,"Choose any one(PRESS ENTER)");
 outtextxy(120,400,"Use '1'for moving down and '2' for up");
 settextstyle(4,0,3);
 char x;
 a:
 setcolor(14);
 outtextxy(70,100,"Game");
 setcolor(1);
 outtextxy(70,180,"Database");
 outtextxy(70,260,"Exit");
 int i=0;
 m:
 x=getch();
 if(x==13)
 {if(i==0)
  {game();
   goto z;
  }
  else if(i==1)
       {database();
	goto z;
       }
   else exit(0);
 }

 if(i==0)
  {if(x=='1')
   {b:
    setcolor(1);
    outtextxy(70,100,"Game");
    setcolor(14);
    outtextxy(70,180,"Database");
    setcolor(1);
    outtextxy(70,260,"Exit");
    i++;
    goto m;
   }
   else goto m;
  }
  else if(i==1)
  {if(x=='1')
   {setcolor(1);
    outtextxy(70,100,"Game");
    outtextxy(70,180,"Database");
    setcolor(14);
    outtextxy(70,260,"Exit");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	 goto a;
	}
   else {i=0;
	 goto a;
	}
  }

  else if(i==2)
  {if(x=='1')
    goto a;
   if(x=='2')
    {i--;
     setcolor(1);
     outtextxy(70,100,"Game");
     setcolor(14);
     outtextxy(70,180,"Database");
     setcolor(1);
     outtextxy(70,260,"Exit");
     goto m;
    }
   else goto a;
  }
}
void game()
{clrscr();
  closegraph();
int gd,gm;
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,14);
setbkcolor(0);
setcolor(RED);
settextstyle(2,0,4);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
settextstyle(7,0,8);
setcolor(12);
outtextxy(145,30,"Welcome");
setcolor(1);
outtextxy(130,35,"_______");
setcolor(2);
outtextxy(250,135,"To");
setcolor(1);
outtextxy(250,140,"__");
settextstyle(7,0,8);
setcolor(4);
outtextxy(100,240,"Quiz");
outtextxy(340,240,"Zone");
setcolor(5);
outtextxy(140,340,"2008");
outtextxy(330,340,"-");
outtextxy(400,340,"09");
setcolor(5);
outtextxy(100,245,"____");
outtextxy(340,245,"____");
setcolor(1);
outtextxy(400,345,"__");
outtextxy(140,345,"____");
setcolor(4);
 rectangle(250,445,400,450);
 setcolor(1);
 for(int i=1;i<149;i++)
 {rectangle(251,446,251+i,449);
  delay(50);
 }
closegraph();
game1();
}
void game2()
{int score=0;
 closegraph();
int gd,gm,sum=1,sum1=1,i;
 clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,6);
floodfill(2,3,6);
setcolor(RED);
settextstyle(2,0,4);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
settextstyle(7,0,3);
setcolor(1);
outtextxy(180,9,"Rules For Playing");
outtextxy(180,12,"_______________");
outtextxy(180,13,"_______________");
settextstyle(8,0,1);
setcolor(14);
delay(200);
outtextxy(5,50,"1. This game consists of 10 questions.");
delay(100);
outtextxy(5,90,"2. Each question consists of four options namely A,B,C,D.");
delay(100);
outtextxy(5,130,"3. You could choose one option by pressing correponding ");
outtextxy(5,150,"   alphabet key.");
delay(100);
outtextxy(5,190,"4. You have one helpline named 50-50, which you can use");
outtextxy(5,210,"   two times");
delay(100);
outtextxy(5,250,"5. You can use 50-50 helpline by pressing alphabet key 'F'.");
delay(100);
outtextxy(5,290,"6. You can quit anywhere in game using QUIT helpline.");
delay(100);
outtextxy(5,330,"7. You can use QUIT helpline by pressing alphabet key 'S'.");
delay(100);
outtextxy(5,370,"8. You would get +10 for each right answer and -5 for");
outtextxy(5,390,"   each wrong answer.");
delay(100);
setcolor(2);
settextstyle(6,0,1);
outtextxy(5,430,"PRESS ENTER TO CONTINUE");
getch();
closegraph();
/*_________________________________________________*/
a1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.1. What is the capital of Mizoram?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Dispur");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Aizwal");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Kohima");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Imphal");
fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
char x;
a:
x=getch();
if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,10);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Aizwal");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Dispur");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Kohima");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Imphal");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(160,350,102,32);
  fillellipse(450,350,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto a;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
   goto a1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto a1;}
closegraph();
/*__________________________________________________*/
b1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.2. How many districts does Asssam has?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. 45");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. 08");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. 23");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. 20");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{ setfillstyle(1,2);
setcolor(4);
fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");  }
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
setfillstyle(1,2);
setcolor(4);
b:
x=getch();
if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. 23");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. 45");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. 08");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. 20");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(160,260,102,32);
  fillellipse(450,350,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto b;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
   goto b1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
   } }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto b1;}
closegraph();
/*_____________________________________________*/
c1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.3. Which lake is found in Asia?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Aral");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Victoria");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Huron");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Superior");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{ setfillstyle(1,2);
setcolor(4);
fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");  }
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
setfillstyle(1,2);
setcolor(4);
c:
x=getch();
if(x=='a'||x=='A')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Aral");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Huron");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Vitoria");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Superior");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(450,260,100,32);
  fillellipse(450,350,100,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto c;
   }
  else if(sum==3)
  {
  clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
   goto c1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
   } }
  else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto c1;}
closegraph();
/*______________________________________________*/
d1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.4. Name the inventer of radio?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Dreser");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Atreya");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Wright");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. G Marconi");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
d:
x=getch();
if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,10);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. G Marconi");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Dreser");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Wright");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Atreya");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(160,350,102,32);
  fillellipse(450,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto d;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto d1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto d1;}
closegraph();
/*__________________________________________*/
e1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.5. Which day is celebrated as Earth Day?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. May 15");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. June 11");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Dec 1");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. April 22");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
e:
x=getch();
if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,10);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. April 22");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. May 15");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Dec 1");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. June 11");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(160,350,102,32);
  fillellipse(160,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto e;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto e1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto e1;}
closegraph();
/*____________________________________________*/
f1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.6. Wine is measured in ___?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Hogshead");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Gallon");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Bushel");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Joule");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
f:
x=getch();
if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Hogshead");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Joule");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Bushel");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Gallon");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(160,350,102,32);
  fillellipse(450,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto f;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto f1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto f1;}
closegraph();
/*____________________________________________*/
g1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(109,115,"Q.7. Vitamin A was discovered in ____?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. 1930");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. 1945");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. 1913");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. 1839");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
g:
x=getch();
if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. 1913");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. 1839");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. 1930");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. 1945");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(450,350,102,32);
  fillellipse(450,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto g;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto g1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto g1;}
closegraph();
/*____________________________________________*/
h1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(103,110,"Q.8. Which one is the unofficial language of UN?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. French");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Detuch");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Spanish");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Russian");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
h:
x=getch();
if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,10);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Detuch");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Russian");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. French");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Spanish");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(450,350,102,32);
  fillellipse(160,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto h;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto h1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto h1;}
closegraph();
/*__________________________________________*/
i1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(100,107,"Q.9. Which one is also THE SUGAR BOWL OF WORLD?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Cuba");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Russia");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Venice");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Lhasa");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
i:
x=getch();
if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Cuba");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Lhasa");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose-5 points");
score-=5;
getch();
 }
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Russia");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Venice");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(450,350,102,32);
  fillellipse(450,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto i;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto i1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto i1;}
closegraph();
/*____________________________________________*/
j1:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(SOLID_FILL,9);
floodfill(319,238,9);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
rectangle(3,3,636,476);
rectangle(4,4,635,475);
rectangle(5,5,634,474);
setfillstyle(1,2);
fillellipse(319,118,300,40);
setcolor(4);
ellipse(319,118,0,360,301,41);
ellipse(319,118,0,360,302,42);
settextstyle(8,0,1);
outtextxy(103,110,"Q.10. Parliament of Japan is?");
setcolor(4);
fillellipse(160,260,100,30);
ellipse(160,260,0,360,101,31);
ellipse(160,260,0,360,102,32);
outtextxy(90,253,"A. Majlis");
fillellipse(450,260,100,30);
ellipse(450,260,0,360,101,31);
ellipse(450,260,0,360,102,32);
outtextxy(400,253,"B. Yuan");
fillellipse(160,350,100,30);
ellipse(160,350,0,360,101,31);
ellipse(160,350,0,360,102,32);
outtextxy(90,343,"C. Diet");
fillellipse(450,350,100,30);
ellipse(450,350,0,360,101,31);
ellipse(450,350,0,360,102,32);
outtextxy(400,343,"D. Tshodgu");
if(sum==3)
  {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  }
else if(sum!=3)
{fillellipse(350,430,40,40);
circle(350,430,40);
circle(350,430,41);
circle(350,430,42);
outtextxy(323,416,"50-50");}
setfillstyle(1,2);
setcolor(4);
fillellipse(470,430,40,40);
circle(470,430,40);
circle(470,430,41);
circle(470,430,42);
outtextxy(445,416,"Quit");
j:
x=getch();
if(x=='C'||x=='c')
{setfillstyle(SOLID_FILL,10);
fillellipse(160,350,100,30);
setcolor(4);
outtextxy(90,343,"C. Diet");
delay(200);
setcolor(10);
outtextxy(10,400,"Congrats! You are right.");
outtextxy(10,440,"You got +10 points");
score+=10;
getch();
}
else if(x=='D'||x=='d')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,350,100,30);
setcolor(4);
outtextxy(400,343,"D. Tshodgu");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
 }
else if(x=='B'||x=='b')
{setfillstyle(SOLID_FILL,12);
fillellipse(450,260,100,30);
setcolor(4);
outtextxy(400,253,"B. Yuan");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='A'||x=='a')
{setfillstyle(SOLID_FILL,12);
fillellipse(160,260,100,30);
setcolor(4);
outtextxy(90,253,"A. Majlis");
delay(200);
setcolor(10);
outtextxy(10,400,"Sorry! You lose -5 points");
score-=5;
getch();
}
else if(x=='f'||x=='F')
{if(sum!=3)
 {setcolor(9);
  setfillstyle(SOLID_FILL,12);
  fillellipse(350,430,40,40);
  setfillstyle(SOLID_FILL,9);
  fillellipse(450,350,102,32);
  fillellipse(160,260,102,32);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  fillellipse(350,430,40,40);
  circle(350,430,40);
  circle(350,430,41);
  circle(350,430,42);
  outtextxy(320,416,"50-50");
  sum++;
  goto j;
   }
  else if(sum==3)
  {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,200,"You have used this helpline!!!");
   getch();
     goto j1;
  }
}
else if(x=='s'||x=='S')
{if(sum1!=0)
 {setfillstyle(SOLID_FILL,12);
  fillellipse(470,430,40,40);
  setfillstyle(1,2);
  delay(800);
  setcolor(4);
  goto v;
  }
  }
else {clrscr();
   setfillstyle(SOLID_FILL,9);
   floodfill(319,238,9);
   setcolor(RED);
   rectangle(0,0,639,479);
   rectangle(1,1,638,478);
   rectangle(2,2,637,477);
   rectangle(3,3,636,476);
   rectangle(4,4,635,475);
   rectangle(5,5,634,474);
   setcolor(14);
   settextstyle(7,0,4);
   outtextxy(100,160,"You have pressed wrong key!!!");
   outtextxy(100,200,"Please study rules carefully..");
   outtextxy(100,240,"Have a nice day!!!!");
   getch();
   goto j1;}
closegraph();
/*_________________________________________*/
v:
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,14);
floodfill(2,3,14);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
settextstyle(7,0,2);
char n[80],z,str[4];
//i=0;
outtextxy(45,105,"Enter Your Name:");
gotoxy(35,8);
gets(n);
outtextxy(45,200,"Your score:");
gotoxy(22,14);
cout<<score;
char t[30]="G.K. Quiz";
save(n,score,t);
getch();
closegraph();
/*__________________________________________*/
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,14);
floodfill(2,3,14);
setcolor(RED);
settextstyle(7,0,4);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
setcolor(5);
delay(800);
outtextxy(45,100,"Thanks A Lot For Viewing..!!");
delay(800);
outtextxy(35,200,"Hope You Enjoyed..");
delay(800);
outtextxy(290,300,"THE QUIZ!!");
settextstyle(7,0,4);
getch();
closegraph();
}
void save(char n[80],int score,char t[30])
{fstream f1("score.dat",ios::binary|ios::in|ios::out|ios::app);
 m.inputs(n,score,t);
 f1.write((char*)&m,sizeof(m));
}
void game3()
{char c,o;
int gd,gm,score=0;
gd=DETECT;
initgraph(&gd,&gm,"");
setcolor(1);
for(int i=1;i<450;i++)
{circle(300,250,i);
delay(20);}
setcolor(14);
settextstyle(10,0,2);
outtextxy(10,0,"WELCOME TO THE ASTRONOMY QUIZ.");
setcolor(4);
 rectangle(250,445,400,450);
 setcolor(14);
 for(i=1;i<149;i++)
 {rectangle(251,446,251+i,449);
  delay(50);
 }
closegraph();
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.1>IN WHAT CATEGORY PLUTO IS CLASSIFIED?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>PLANET");
outtextxy(0,220,"B.>COMET");
outtextxy(0,260,"C.>DWARF PLANET");
outtextxy(0,300,"D.>ASTEROID");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY.");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'PLANET' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'COMET' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'ASTEROID' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'DWARF PLANET' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.2>WHICH OF THE FOLLOWING PLANET HAS LONGEST DAY?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>VENUS");
outtextxy(0,220,"B.>MARS");
outtextxy(0,260,"C.>MERCURY");
outtextxy(0,300,"D.>EARTH");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'VENUS' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'MERCURY' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"'EARTH' IS A WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'MARS' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.3>WHAT IS THE SOURCE OF GAMMA RAY EXPLOSION?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>NEUTRON STARS");
outtextxy(0,220,"B.>WHITE DWARFS");
outtextxy(0,260,"C.>NORMAL STARS");
outtextxy(0,300,"D.>BLACK HOLES");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='D'||o=='d')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'BLACK HOLE' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.4>NAME THE SATTELITE OF PLUTO?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>CHARON");
outtextxy(0,220,"B.>TETHYS");
outtextxy(0,260,"C.>DEIMOS");
outtextxy(0,300,"D.>CALLISTO");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'CHARON' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.5>HOW MANY RINGS DOES SATURN HAS ?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>FOUR");
outtextxy(0,220,"B.>SIX");
outtextxy(0,260,"C.>EIGHT");
outtextxy(0,300,"D.>SEVEN");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'EIGHT' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.6>IN WHICH DIRECTION DOES VENUS ROTATE?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>EAST TO WEST");
outtextxy(0,220,"B.>WEST TO EAST");
outtextxy(0,260,"C.>NORTH-WEST TO SOUTH-EAST");
outtextxy(0,300,"D.>NORTH-EAST TO SOUTH-WEST");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'EAST TO WEST' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.7>NAME THE LARGEST SATTELITE IN OUR SOLAR SYSTEM?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>EUROPA");
outtextxy(0,220,"B.>TITAN");
outtextxy(0,260,"C.>CALLISTO");
outtextxy(0,300,"D.>GANYMEDE");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='D'||o=='d')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'GANYMEDE' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
initgraph(&gd,&gm,"");
setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(5);}
setcolor(14);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.8>WHAT IS THE SURFACE TEMP. OF THE SUN IN DEG.CEL.?");
outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>12000");
outtextxy(0,220,"B.>6000");
outtextxy(0,260,"C.>7000");
outtextxy(0,300,"D.>10128");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");
o=getch();
if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(10,180,"WRONG ANSWER");
outtextxy(10,240,"Sorry! You lose -5 points");
score-=5;
delay(2000);
closegraph();}
else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(10,180,"'6000' IS CORRECT ANSWER ");
outtextxy(10,240,"You got +10 points");
score+=10;
delay(2000);
closegraph();}
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,14);
floodfill(2,3,14);
setcolor(RED);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
settextstyle(7,0,2);
char n[80],z,str[4];
outtextxy(45,105,"Enter Your Name:");
gotoxy(35,8);
gets(n);
outtextxy(45,200,"Your score:");
gotoxy(22,14);
cout<<score;
char t[30]="Astronomy Quiz";
save(n,score,t);
getch();
closegraph();
/*_________________________________________________________________________*/
clrscr();
gd=DETECT;
initgraph(&gd ,&gm ,"");
setfillstyle(1,14);
floodfill(2,3,14);
setcolor(RED);
settextstyle(7,0,4);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
rectangle(2,2,637,477);
setcolor(5);
delay(800);
outtextxy(45,100,"Thanks A Lot For Viewing..!!");
delay(800);
outtextxy(35,200,"Hope You Enjoyed..");
delay(800);
outtextxy(290,300,"THE QUIZ!!");
settextstyle(7,0,4);
getch();
closegraph();
 return;
}
void scores()
{fstream f1("score.dat",ios::binary|ios::in|ios::out);
 clrscr();
 closegraph();
 textbackground(14);
 textcolor(4+128);
 gotoxy(20,2);
 cprintf("SCORES OF QUIZ");
 textcolor(10);
 textbackground(BLACK);
 cout<<"\n\n";
 cprintf("Name");
 cout<<"\t\t\t";
 cprintf("Score");
 cout<<"\t\t\t";
 cprintf("Type");
 cout<<'\n';
 textcolor(14);
 profile z;
 while(f1.read((char*)&z,sizeof(z)))
  z.display();
 f1.close();
 getch();
}
void game1()
{z:
 closegraph();
 clrscr();
 int k;
 int gd,gm;
 gd=DETECT;
 initgraph(&gd,&gm,"");
 setcolor(15);
  setbkcolor(6);
  settextstyle(1,0,1);
 outtextxy(120,30,"Choose any one(PRESS ENTER)");
 outtextxy(120,400,"Use '1'for moving down and '2' for up");
 setcolor(4);
 rectangle(0,0,639,479);
 a:
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(30,100,"G.K. Quiz");
 setcolor(1);
 outtextxy(30,180,"Astronomy Quiz");
 outtextxy(30,260,"Score");
 outtextxy(30,340,"Back");
 int i=0;
 m:
 char x;
 x=getch();
 if(x==13)
 {if(i==0)
  {game2();
   goto z;
  }
  else if(i==1)
       {game3();
	goto z;
       }
   else if(i==2)
	{scores();
	 goto z;
	}
   else return;
 }
 if(i==0)
  {if(x=='1')
   {b:
    setcolor(1);
    outtextxy(30,100,"G.K. Quiz");
    setcolor(14);
    outtextxy(30,180,"Astronomy Quiz");
    setcolor(1);
    outtextxy(30,260,"Score");
    outtextxy(30,340,"Back");
    i++;
    goto m;
   }
   else goto m;
  }
  else if(i==1)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,100,"G.K. Quiz");
    outtextxy(30,180,"Astronomy Quiz");
    setcolor(14);
    outtextxy(30,260,"Score");
    setcolor(1);
    outtextxy(30,340,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	goto a;
	}
   else {i=0;
	 goto a;
	}
  }
 else if(i==2)
  {if(x=='1')
   {setcolor(1);
    outtextxy(30,100,"G.K. Quiz");
    outtextxy(30,180,"Astronomy Quiz");
    outtextxy(30,260,"Score");
    setcolor(14);
    outtextxy(30,340,"Back");
    i++; goto m;
   }
   else if(x=='2')
	{i--;
	 setcolor(1);
	 outtextxy(30,100,"G.K. Quiz");
	 setcolor(14);
	 outtextxy(30,180,"Astronomy Quiz");
	 setcolor(1);
	 outtextxy(30,260,"Score");
	 outtextxy(30,340,"Back");
	 goto m;
	}
   else{i=0;
	goto a;
       }
  }
  else if(i==3)
  {if(x=='1')
    goto a;
   if(x=='2')
    {i--;
     setcolor(1);
     outtextxy(30,100,"G.K. Quiz");
     outtextxy(30,180,"Astronomy Quiz");
     setcolor(14);
     outtextxy(30,260,"Score");
     setcolor(1);
     outtextxy(30,340,"Back");
     goto m;
    }
   else goto a;
  }
}