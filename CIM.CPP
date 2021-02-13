#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>

class cri{
   public:
	  char id[10];
   private:
	  char n[25],add[50],fn[25],crm[20],pun[30],jail[25],age[3];
   public:
	  void in();
	  void out();
	  void updt();
	 }X;

struct log{
	   char un[25],pass[25];
	  }A;

void start();
void begin();
void injail();
void notc();
void search();
void mod();
void add();

void main()
{
 start();
// getch();
}
void start()
{
 char u[25],pass[25],ch;
 int i=0;
 clrscr();
 cout<<"\n\n\n\n\t ***  ***   *  **   **  ***    ***   ***   ***   **   ***   ***";
 cout<<"\n\t**    *  *  *  * * * *  *      *  *  *    **    *  *  *  *  *  *";
 cout<<"\n\t**    ***   *  *  *  *  ***    ***   ***  **    *  *  ***   *  *";
 cout<<"\n\t**    * *   *  *     *  *      * *   *    **    *  *  * *   *  *";
 cout<<"\n\t ***  *  *  *  *     *  ***    *  *  ***   ***   **   *  *  ***";
 cout<<"\n\n\n\n\n\n\t\t\t\tSIGN IN";
 cout<<"\n\t\tUser     : ";
 cout<<"\n\t\tPassword : ";
 gotoxy(30,16);
 gets(u);
 gotoxy(30,17);
 l:
 ch=getch();
 if(ch==13)
  pass[i]='\0';
 else if(ch==27)
  exit(0);
 else if(ch==8&&i>0)
 {
  cout<<'\b'<<" "<<'\b';
  i--;
  goto l;
 }
 else if(ch>=48&&ch<=57&&i<=23)
 {
  cout<<"*";
  pass[i] = ch;
  i++;
  goto l;
 }
 else goto l;
/* strcpy(A.pass,pass);
 strcpy(A.un,u);
 ofstream f1;
 f1.open("Password.txt",ios::out);
 f1.write((char *)&A,sizeof(A));
 f1.close();*///testing purpose
 ifstream f1;
 f1.open("Password.txt",ios::in);
 f1.read((char *)&A,sizeof(A));
 f1.close();
 if(strcmp(A.un,u)==0&&strcmp(A.pass,pass)==0)
 {
  gotoxy(18,19);
  cout<<"Signing In";
  for(i=0;i<200;i++)
  {
   gotoxy(30,19);
   printf("\\-");
   delay(10);
   gotoxy(30,19);
   printf("-/");
   delay(10);

  }
  begin();
 }
 else
 {
  gotoxy(20,19);
  cout<<"ERROR in LOGIN!!!";
  getch();
  start();
 }
}

void begin()
{
 int ch;
 clrscr();
// start();
 gotoxy(20,2);
 cout<<"Welcome!!!";
 cout<<"\n\n\n\t\t1. In Jail";
 cout<<"\n\t\t2. Not Captured";
 cout<<"\n\t\t0. Exit";
 m:
 switch(getch()-48)
 {
  case 1:injail();
	 break;
  case 2:notc();
	 break;
  case 0://end();
	 break;
  default: goto m;
 }
}

void injail()
{
 a:
 clrscr();
 gotoxy(20,2);
 cout<<"In Jail!!!";
 cout<<"\n\n\n\t\t1. Add";
 cout<<"\n\t\t2. Modify";
 cout<<"\n\t\t3. Search";
 cout<<"\n\t\t0. Back";
 m:
 switch(getch()-48)
 {
  case 1:add();goto a;
  case 2:mod();goto a;
  case 3:search();goto a;
  case 0:begin();
	 break;
  default: goto m;
 }
}

void notc()
{

}

void cri::in()
{
 char t[10];
 ifstream f1;
 ofstream f2;
 f1.open("ID.txt");
 if(f1.read((char*)&t,sizeof(t)))
 {
  cout<<t;
  sprintf(id,"%d",atoi(t)+1);
  cout<<id;
 }
 else
 {
  strcpy(id,"1000");
 }
 f1.close();
 f2.open("ID.txt");
 f2.write((char*)&id,sizeof(id));
 f2.close();
 clrscr();
 cout<<"Criminal Id: "<<id<<endl;
 cout<<"Enter Name: ";
 gets(n);
 cout<<"Enter Father Name: ";
 gets(fn);
 cout<<"Enter Address: ";
 gets(add);
 cout<<"Enter Age: ";
 cin>>age;
 cout<<"Enter Crime: ";
 gets(crm);
 cout<<"Enter Punishment: ";
 gets(pun);
 cout<<"Enter Jail Name: ";
 gets(jail);
 cout<<"\n\n\tRecord Added!!!";
}

void cri::out()
{
 cout<<"\n\tName: "<<n;
 cout<<"\n\t Father Name: "<<fn;
 cout<<"\n\t Address: "<<add;
 cout<<"\n\t Age: "<<age;
 cout<<"\n\t Crime: "<<crm;
 cout<<"\n\t Punishment: "<<pun;
 cout<<"\n\t Jail Name: "<<jail;
}

void cri:: updt()
{
 clrscr();
 cout<<"Criminal Id: "<<id<<endl;
 cout<<"Enter Name: ";
 gets(n);
 cout<<"Enter Father Name: ";
 gets(fn);
 cout<<"Enter Address: ";
 gets(add);
 cout<<"Enter Age: ";
 cin>>age;
 cout<<"Enter Crime: ";
 gets(crm);
 cout<<"Enter Punishment: ";
 gets(pun);
 cout<<"Enter Jail Name: ";
 gets(jail);
 cout<<"\n\n\tRecord Updated!!!";
}

void add()
{
 X.in();
 ofstream f1;
 if(strcmp(X.id,"1000")==0)
 {
  f1.open("CBI",ios::out);
 }
 else
 {
  f1.open("CBI",ios::app);
 }
 f1.write((char*)&X,sizeof(X));
 f1.close();
 getch();
}

void search()
{
 char t[10];
 int flag=0;
 cri Y;
 ifstream f1;
 clrscr();
 f1.open("CBI",ios::in);
 cout<<"\n\tEnter Criminal ID: ";
 gets(t);
 while(f1.read((char*)&Y,sizeof(Y)))
 {
  if(strcmp(Y.id,t)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  cout<<"\n\n\tRecord not Present!!!";
 }
 else Y.out();
 getch();
}

void mod()
{
 char t[10];
 int flag=0;
 cri Y,T;
 ifstream f1;
 clrscr();
 f1.open("CBI",ios::in);
 cout<<"\n\tEnter Criminal ID: ";
 gets(t);
 while(f1.read((char*)&Y,sizeof(Y)))
 {
  if(strcmp(Y.id,t)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  cout<<"\n\n\tWrong Criminal ID!!!";
 }
 else
 {
  Y.updt();
  ifstream f2;
  ofstream f3;
  f2.open("CBI",ios::in);
  f3.open("Temp",ios::out);
  while(f2.read((char*)&T,sizeof(T)))
  {
   if(strcmp(T.id,Y.id)!=0)
    f3.write((char*)&T,sizeof(T));
  }
  f2.close();
  f3.close();
  remove("CBI");
  rename("temp","CBI");
  ofstream f4;
  f4.open("CBI",ios::app);
  f4.write((char*)&Y,sizeof(Y));
  f4.close();
 }
 getch();
}
