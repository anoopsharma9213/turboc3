#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<string.h>

struct book{
	    char n[100],authn[100],pubn[100];
	    char edi[50],cost[20];
	   }b;

struct mag{
	   char n[50],edi[50];
	  }m;

struct cust{
	    char n[50],id[11],bn[100],bedi[50],date[10];
	   }c;

struct user{
	    char n[25],pass[12];
	   }x;

class lms{
	  struct book b;
	  struct mag m;
	  struct cust c;
	  struct user x;
   public:
	 void start();
	 void login();
	 void option();
	 void book();
	 void mag();
	 void record();
	 void setting();
	 void quit();
	 void addb();
	 void delb();
	 void listb();
	 void addm();
	 void delm();
	 void listm();
	 void search();
	 void give();
	 void take();
	 void list();
	};


void main()
{
 lms A;
 A.start();
}

void lms::start()
{
 int gd=DETECT,gm,i;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,8);
 delay(500);
 outtextxy(130,40,"WELCOME");
 delay(500);
 outtextxy(270,160,"TO");
 delay(500);
 outtextxy(140,280,"LIBRARY");
 rectangle(270,420,370,425);
 setcolor(4);
 for(i=0;i<99;i++)
 {
  rectangle(271,421,271+i,424);
  delay(30);
 }
 closegraph();
 login();
}

void lms::login()
{
 int i,j;
 char n[25],p[12],ch;
 FILE *f1;
 f1=fopen("Main","r");
 fread(&x,sizeof(x),1,f1);
 fclose(f1);
 l:
 i=0;
 clrscr();
 for(j=0;j<30;j++)
 {gotoxy(17+j,9);
  cprintf("*");
  gotoxy(46-j,13);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<5;j++)
 {gotoxy(17,9+j);
  cprintf("*");
  gotoxy(46,13-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(20,10);
 cprintf("USER :");
 gotoxy(20,12);
 cprintf("PASSWORD :");
 gotoxy(45,25);
 cprintf("Write 'Exit' in User to exit");
 gotoxy(28,10);
 gets(n);
 gotoxy(32,12);
 a:
 ch=getch();
 if(ch==13)
  p[i]='\0';
 else if(ch==8)
 {
  if(i==0)
   goto a;
  else
  {i--;
   cprintf("\b");
   cprintf(" ");
   cprintf("\b");
   goto a;
  }
 }
 else{
      if(i==10)
       goto a;
      else
      {p[i]=ch;
       cprintf("*");
       i++;
       goto a;
      }
     }
 for(i=0;p[i]!='\0';i++)
  p[i]+=15;
 if((strcmp(p,x.pass)==0)&&(strcmp(n,x.n)==0))
  option();
 else if((strcmp(n,"Exit")==0))
  exit(0);
 else
     {gotoxy(18,15);
      cprintf("User name or Password Incorrect!!!!");
      getch();
      goto l;
     }
}

void lms::option()
{
 int j;
 char ch;
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(35,4);
 cprintf("OPTIONS");
 textcolor(15);
 gotoxy(10,8);
 cprintf("1. Books");
 gotoxy(10,10);
 cprintf("2. Magazines");
 gotoxy(10,12);
 cprintf("3. Record");
 gotoxy(10,14);
 cprintf("4. Setting");
 gotoxy(10,16);
 cprintf("0. Exit");
 gotoxy(33,22);
 cprintf("CHOOSE ANY ONE");
 a:
 ch=getch();
 switch(ch)
 {
  case '1': book();
	    break;
  case '2': mag();
	    break;
  case '3': record();
	    break;
  case '4': setting();
	    break;
  case '0': quit();
	    break;
  default : goto a;
 }
}

void lms::book()
{
 int j;
 char ch;
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(35,4);
 cprintf("BOOKS");
 textcolor(15);
 gotoxy(10,8);
 cprintf("1. Add");
 gotoxy(10,10);
 cprintf("2. Delete");
 gotoxy(10,12);
 cprintf("3. Details");
 gotoxy(10,14);
 cprintf("0. Back");
 gotoxy(33,20);
 cprintf("CHOOSE ANY ONE");
 a:
 ch=getch();
 switch(ch)
 {
  case '1': addb();
	    break;
  case '2': delb();
	    break;
  case '3': listb();
	    break;
  case '0': option();
	    break;
  default : goto a;
 }
}

void lms::mag()
{
 int j;
 char ch;
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(32,4);
 cprintf("MAGAZINES");
 textcolor(15);
 gotoxy(10,8);
 cprintf("1. Add");
 gotoxy(10,10);
 cprintf("2. Delete");
 gotoxy(10,12);
 cprintf("3. Details");
 gotoxy(10,14);
 cprintf("0. Back");
 gotoxy(33,20);
 cprintf("CHOOSE ANY ONE");
 a:
 ch=getch();
 switch(ch)
 {
  case '1': addm();
	    break;
  case '2': delm();
	    break;
  case '3': listm();
	    break;
  case '0': option();
	    break;
  default : goto a;
 }
}

void lms::record()
{
 int j;
 char ch;
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(34,4);
 cprintf("RECORD");
 textcolor(15);
 gotoxy(10,8);
 cprintf("1. Search");
 gotoxy(10,10);
 cprintf("2. Issue");
 gotoxy(10,12);
 cprintf("3. Return");
 gotoxy(10,14);
 cprintf("4. List");
 gotoxy(10,16);
 cprintf("0. Back");
 gotoxy(33,20);
 cprintf("CHOOSE ANY ONE");
 a:
 ch=getch();
 switch(ch)
 {
  case '1': search();
	    break;
  case '2': give();
	    break;
  case '3': take();
	    break;
  case '4': list();
	    break;
  case '0': option();
	    break;
  default : goto a;
 }
}

void setting()
{
 FILE *f1;
 char ch,oun[25],op[12],nun[25],np[12],cp[12];
 int i=0,j;
 f1=fopen("Main","r");
 fread(&x,sizeof(x),1,f1);
 fclose(f1);
 l:
 clrscr();
 textcolor(14);
 for(j=0;j<32;j++)
 {gotoxy(18+j,7);
  cprintf("*");
  gotoxy(49-j,17);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<11;j++)
 {gotoxy(18,7+j);
  cprintf("*");
  gotoxy(49,17-j);
  cprintf("*");
  delay(50);
 }
 textcolor(15);
 gotoxy(20,8);
 cprintf("OLD USER NAME :");
 gotoxy(20,10);
 cprintf("NEW USER NAME :");
 gotoxy(20,12);
 cprintf("OLD PASSWORD :");
 gotoxy(20,14);
 cprintf("NEW PASSWORD :");
 gotoxy(20,16);
 cprintf("CONFIRM PASSWORD :");
 gotoxy(37,8);
 gets(oun);
 gotoxy(37,10);
 gets(nun);
 gotoxy(36,12);
 a:
 ch=getch();
 if(ch==13)
  op[i]='\0';
 else if(ch==8)
 {
  if(i==0)
   goto a;
  else
  {i--;
   cprintf("\b");
   cprintf(" ");
   cprintf("\b");
   goto a;
  }
 }
 else{
      if(i==10)
       goto a;
      else
      {op[i]=ch;
       cprintf("*");
       i++;
       goto a;
      }
     }
 for(i=0;op[i]!='\0';i++)
  op[i]+=15;
 gotoxy(36,14);
 i=0;
 b:
 ch=getch();
 if(ch==13)
  np[i]='\0';
 else if(ch==8)
 {
  if(i==0)
   goto b;
  else
  {i--;
   cprintf("\b");
   cprintf(" ");
   cprintf("\b");
   goto b;
  }
 }
 else{
      if(i==10)
       goto b;
      else
      {np[i]=ch;
       cprintf("*");
       i++;
       goto b;
      }
     }
 for(i=0;np[i]!='\0';i++)
  np[i]+=15;
 gotoxy(40,16);
 i=0;
 c:
 ch=getch();
 if(ch==13)
  cp[i]='\0';
 else if(ch==8)
 {
  if(i==0)
   goto c;
  else
  {i--;
   cprintf("\b");
   cprintf(" ");
   cprintf("\b");
   goto c;
  }
 }
 else{
      if(i==10)
       goto c;
      else
      {cp[i]=ch;
       cprintf("*");
       i++;
       goto c;
      }
     }
 for(i=0;cp[i]!='\0';i++)
  cp[i]+=15;
 if(strcmp(oun,x.n)==0&&strcmp(op,x.pass)==0)
 {
  if(strcmp(np,cp)==0)
  {
   gotoxy(20,20);
   cprintf("Do you to change User name and Password(Y/N)?");
   ch=getch();
   if(ch=='y'||ch=='Y')
   {
    strcpy(x.n,nun);
    strcpy(x.pass,np);
    f1=fopen("Main","w");
    fwrite(&x,sizeof(x),1,f1);
    fclose(f1);
    option();
   }
   else option();
  }
  else{
       gotoxy(30,20);
       cprintf("Wrong Duplication!!!");
       getch();
       goto l;
      }
 }
 else{
      gotoxy(20,20);
      cprintf("Old User name or Password Incorrect!!!");
      getch();
      option();
     }
}

void quit()
{
 char ch;
 int j;
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(22+j,10);
  cprintf("*");
  gotoxy(58-j,14);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<4;j++)
 {gotoxy(22,10+j);
  cprintf("*");
  gotoxy(58,14-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(25,12);
 cprintf("Do you really want to quit(Y/N)?");
 ch=getch();
 if(ch=='y'||ch=='Y')
 {
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd,&gm,"");
  setcolor(10);
  rectangle(0,0,639,479);
  settextstyle(4,0,6);
  outtextxy(120,100,"Thanks for using");
  settextstyle(8,0,4);
  outtextxy(60,250,"LIBRARY MANAGEMENT SYSTEM");
  delay(3000);
  closegraph();
  exit(0);
 }
 else option();
}

void addb()
{
 int j;
 char ch;
 FILE *f1;
 a:
 f1=fopen("Brecord","a");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(30,4);
 cprintf("Enter Book Details");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Name : ");
 gets(b.n);
 gotoxy(10,10);
 cprintf("Author Name : ");
 gets(b.authn);
 gotoxy(10,12);
 cprintf("Publisher : ");
 gets(b.pubn);
 gotoxy(10,14);
 cprintf("Edition : ");
 gets(b.edi);
 gotoxy(10,16);
 cprintf("Cost : Rs. ");
 gets(b.cost);
 gotoxy(30,20);
 cprintf("Do you want to add book(Y/N): ");
 ch=getch();
 if(ch=='Y'||ch=='y')
 {fwrite(&b,sizeof(b),1,f1);
  fflush(stdin);
  fclose(f1);
 }
 else {fclose(f1);
       book();
      }
 clrscr();
 textcolor(14);
 for(j=0;j<41;j++)
 {gotoxy(20+j,10);
  cprintf("*");
  gotoxy(60-j,14);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<4;j++)
 {gotoxy(20,10+j);
  cprintf("*");
  gotoxy(60,14-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(22,12);
 cprintf("Do you want to add another book(Y/N):");
 ch=getch();
 if(ch=='Y'||ch=='y')
  goto a;
 else book();
}

void delb()
{
 int i=0,j;
 char ch,n[100],e[50];
 FILE *f1,*f2;
 f1=fopen("Brecord","r");
 f2=fopen("Temp","w");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(33,4);
 cprintf("Delete Book");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Name : ");
 gets(n);
 gotoxy(10,10);
 cprintf("Edition : ");
 gets(e);
 while(fread(&b,sizeof(b),1,f1)!=NULL)
 {
  if(strcmp(b.n,n)==0&&strcmp(b.edi,e)==0)
	i++;
  else {fwrite(&b,sizeof(b),1,f2);
	fflush(stdin);
       }
 }
 if(i==0)
 {gotoxy(30,20);
  cprintf("Book not found");
  fclose(f1);
  fclose(f2);
  getch();
  book();
 }
 else {gotoxy(20,20);
       cprintf("Do you want to delete book(Y/N): ");
       ch=getch();
       if(ch=='Y'||ch=='y')
       {fclose(f1);
	fclose(f2);
	remove("Brecord");
	rename("Temp","Brecord");
	book();
       }
       else {fclose(f1);
	     fclose(f2);
	     book();
	    }
      }
}

void listb()
{
 int j,i=0;
 FILE *f1;
 f1=fopen("Brecord","r");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(33,4);
 cprintf("Book Details");
 textcolor(14);
 gotoxy(3,7);
 cprintf("S.No.");
 gotoxy(10,7);
 cprintf("Name");
 gotoxy(50,7);
 cprintf("Edition");
 textcolor(15);
 gotoxy(5,9);
 while(fread(&b,sizeof(b),1,f1)!=NULL)
 {
  printf("%d",i+1);
  gotoxy(10,9+i);
  cprintf(b.n);
  gotoxy(50,9+i);
  cprintf(b.edi);
  i++;
  gotoxy(5,9+i);
 }
 getch();
 book();
}

void addm()
{
 int j;
 char ch;
 FILE *f1;
 a:
 f1=fopen("Mrecord","a");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(23,4);
 cprintf("Enter Magazine/Journal Details");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Name : ");
 gets(m.n);
 gotoxy(10,10);
 cprintf("Issue : ");
 gets(m.edi);
 gotoxy(20,20);
 cprintf("Do you want to magazine/journal book(Y/N): ");
 ch=getch();
 if(ch=='Y'||ch=='y')
 {fwrite(&m,sizeof(m),1,f1);
  fflush(stdin);
  fclose(f1);
 }
 else {fclose(f1);
       mag();
      }
 clrscr();
 textcolor(14);
 for(j=0;j<48;j++)
 {gotoxy(17+j,10);
  cprintf("*");
  gotoxy(64-j,14);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<4;j++)
 {gotoxy(17,10+j);
  cprintf("*");
  gotoxy(64,14-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(19,12);
 cprintf("Do you want to another magazine/journal(Y/N):");
 ch=getch();
 if(ch=='Y'||ch=='y')
  goto a;
 else mag();
}

void delm()
{
 int i=0,j;
 char ch,n[100],e[50];
 FILE *f1,*f2;
 f1=fopen("Mrecord","r");
 f2=fopen("Temp","w");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(27,4);
 cprintf("Delete Magazine/journal");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Name : ");
 gets(n);
 gotoxy(10,10);
 cprintf("Issue : ");
 gets(e);
 while(fread(&m,sizeof(m),1,f1)!=NULL)
 {
  if(strcmp(m.n,n)==0&&strcmp(m.edi,e)==0)
	i++;
  else {fwrite(&m,sizeof(m),1,f2);
	fflush(stdin);
       }
 }
 if(i==0)
 {gotoxy(24,20);
  cprintf("Magazine/Journal not found");
  fclose(f1);
  fclose(f2);
  getch();
  mag();
 }
 else {gotoxy(15,20);
       cprintf("Do you want to delete magazine/journal(Y/N): ");
       ch=getch();
       if(ch=='Y'||ch=='y')
       {fclose(f1);
	fclose(f2);
	remove("Mrecord");
	rename("Temp","Mrecord");
	mag();
       }
       else {fclose(f1);
	     fclose(f2);
	     mag();
	    }
      }
}

void listm()
{
 int j,i=0;
 FILE *f1;
 f1=fopen("Mrecord","r");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(26,4);
 cprintf("Magazine/Journal Details");
 textcolor(14);
 gotoxy(3,7);
 cprintf("S.No.");
 gotoxy(10,7);
 cprintf("Name");
 gotoxy(50,7);
 cprintf("Issue");
 textcolor(15);
 gotoxy(5,9);
 while(fread(&m,sizeof(m),1,f1)!=NULL)
 {
  printf("%d",i+1);
  gotoxy(10,9+i);
  cprintf(m.n);
  gotoxy(50,9+i);
  cprintf(m.edi);
  i++;
  gotoxy(5,9+i);
 }
 getch();
 mag();
}

void search()
{
 int j,i=0;
 char bn[100],bedi[50];
 FILE *f1;
 f1=fopen("Brecord","r");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(36,4);
 cprintf("Book Search");
 textcolor(14);
 gotoxy(6,7);
 cprintf("Name : ");
 gets(bn);
 gotoxy(6,10);
 cprintf("Edition : ");
 gets(bedi);
 gotoxy(30,20);
 cprintf("Searching....");
 delay(2000);
 clrscr();
 gotoxy(33,4);
 cprintf("Book Details");
 textcolor(14);
 gotoxy(3,7);
 cprintf("S.No.");
 gotoxy(10,7);
 cprintf("Name");
 gotoxy(50,7);
 cprintf("Edition");
 textcolor(15);
 i=0;
 gotoxy(5,9);
 while(fread(&b,sizeof(b),1,f1)!=NULL)
 {if(strcmp(b.n,bn)==0&&strcmp(b.edi,bedi)==0)
  {printf("%d",i+1);
   gotoxy(10,9+i);
   cprintf(b.n);
   gotoxy(50,9+i);
   cprintf(b.edi);
   i++;
   gotoxy(5,9+i);
  }
 }
 if(i==0)
 {
  gotoxy(30,15);
  cprintf("Book Not Found");
 }
 getch();
 record();
}

void give()
{
 int j,i=0,k=0;
 char ch,date[30];
 struct cust c1;
 FILE *f1,*f2;
 f1=fopen("Issue","r");
 f2=fopen("Brecord","r");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(27,4);
 cprintf("Enter Customer Details");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Customer Name : ");
 gets(c.n);
 gotoxy(10,10);
 cprintf("Customer Id : ");
 gets(c.id);
 gotoxy(10,12);
 cprintf("Book Name : ");
 gets(c.bn);
 gotoxy(10,14);
 cprintf("Book Edition : ");
 gets(c.bedi);
 gotoxy(10,16);
 cprintf("Date (dd/mm/yyyy) : ");
 gets(c.date);
 while(fread(&b,sizeof(b),1,f2)!=NULL)
  if(strcmp(b.n,c.bn)==0&&strcmp(b.edi,c.bedi)==0)
    k++;
 fclose(f2);
 if(k!=0)
 {while(fread(&c1,sizeof(c1),1,f1)!=NULL)
   if(strcmp(c1.bn,c.bn)==0&&strcmp(c1.bedi,c.bedi)==0)
    i++;
  fclose(f1);
  if(i!=0)
  {gotoxy(23,20);
   cprintf("Book could not be Issued!!!");
   getch();
   record();
  }
  else {f1=fopen("Issue","a");
	fwrite(&c,sizeof(c),1,f1);
	fclose(f1);
	gotoxy(32,20);
	cprintf("Book has been Issued");
	getch();
	record();
       }
 }
 else {gotoxy(26,20);
       cprintf("Please enter correct Book name!!!");
       getch();
       record();
      }
}

void take()
{
 int j;
 char bn[100],bedi[50],d[10];
 FILE *f1,*f2;
 f1=fopen("Issue","r");
 f2=fopen("Temp","w");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(27,4);
 cprintf("Enter Book Details");
 textcolor(15);
 gotoxy(10,8);
 cprintf("Book Name : ");
 gets(bn);
 gotoxy(10,10);
 cprintf("Book Edition : ");
 gets(bedi);
 gotoxy(10,12);
 cprintf("Return Date (dd/mm/yyyy) : ");
 gets(d);
 gotoxy(10,14);
 cprintf("Issue Date (dd/mm/yyyy) : ");
 cprintf(c.date);
 gotoxy(10,16);
 cprintf("Fine will be calculated after 7 days");
 while(fread(&c,sizeof(c),1,f1)!=NULL)
  if(strcmp(bn,c.bn)==0&&strcmp(bedi,c.bedi)==0);
  else fwrite(&c,sizeof(c),1,f2);
 fclose(f1);
 fclose(f2);
 remove("Issue");
 rename("Temp","Issue");
 gotoxy(20,20);
 cprintf("Book Returned");
 getch();
 record();
}

void list()
{
 int j,i=0;
 FILE *f1;
 f1=fopen("Issue","r");
 clrscr();
 textcolor(14);
 for(j=0;j<37;j++)
 {gotoxy(20+j,3);
  cprintf("*");
  gotoxy(56-j,5);
  cprintf("*");
  delay(50);
 }
 for(j=0;j<3;j++)
 {gotoxy(20,3+j);
  cprintf("*");
  gotoxy(56,5-j);
  cprintf("*");
  delay(50);
 }
 gotoxy(33,4);
 cprintf("Book Details");
 textcolor(14);
 gotoxy(3,7);
 cprintf("S.No.");
 gotoxy(40,7);
 cprintf("Book Name");
 gotoxy(10,7);
 cprintf("Customer Name");
 gotoxy(60,7);
 cprintf("Issue Date");
 textcolor(15);
 gotoxy(5,9);
 while(fread(&c,sizeof(c),1,f1)!=NULL)
 {
  printf("%d",i+1);
  gotoxy(10,9+i);
  cprintf(c.n);
  gotoxy(40,9+i);
  cprintf(c.bn);
  gotoxy(60,9+i);
  cprintf(c.date);
  i++;
  gotoxy(5,9+i);
 }
 getch();
 record();
}