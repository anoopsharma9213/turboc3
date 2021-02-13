#include<iostream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>

static int bcnt=0,mcnt=0;
int i,j;

class book
 {
   protected:
     int bno[5];
     char bname[5][20];
     char aname[5][20];
     int flag[5];
   public:
     void add_book();

     void mod_book();
     void del_book();
     void show_book();
     int retbno(int a);
 };

struct dat
 {
   int dd;
   int mm;
   int yr;
 };

class member:book
 {
     long regno[5];
     int fn[5];
     char mname[5][20];
     int mbno[5];
     dat di[5],dr[5];
   public:
     void add_mem();
     void mod_mem();
     void del_mem();
     void show_mem();
     void b_issue(book bk);
     void b_return(book bk);
     void greater(dat,dat);
     int fine(dat,dat);
     dat dt();
 };

void book::add_book()
 {
   clrscr();
   cout<<"\nNEW BOOK ENTRY...\n";
   cout<<"\nEnter the book no.:";
   cin>>(bno[bcnt]);
   cout<<"\n\nEnter the Name of the Book:";
   gets(bname[bcnt]);
   cout<<"\n\nEnter the Author's Name:";
   gets(aname[bcnt]);
   cout<<"\n\n\nBook Created..";
   flag[bcnt]=0;
   bcnt++;
 }

void book::show_book()
 {
   clrscr();
   for(i=0;i<bcnt;i++)
     {
       cout<<"\nBook no. : "<<bno[i];
       cout<<"\nBook Name : ";
       puts(bname[i]);
       cout<<"Author Name : ";
       puts(aname[i]);
       if(flag[i]==1)
  cout<<"The book is issued.\n";
       else
  cout<<"The book is not issued.\n";
     }
   if(i==0)
     cout<<"\nNo book is found.";
 }

void book::mod_book()
 {
   clrscr();
   int b_no;
   cout<<"\nEnter book no.:";
   cin>>b_no;
   for(i=0;i<bcnt;i++)
     if(b_no==bno[i])
       {
  cout<<"\nEnter the name of the book:";
  gets(bname[i]);
  cout<<"\nEnter the name of the author:";
  gets(aname[i]);
  break;
       }
   if(i==bcnt)
     cout<<"No such book is found.";
 }

void book::del_book()
 {
   clrscr();
   int b_no;
   cout<<"\nEnter the book no. of the book to be deleted:";
   cin>>b_no;
   for(i=0;i<bcnt;i++)
     if(b_no==bno[i])
       {
  for(j=i;j<bcnt;j++)
    {
      flag[j]=flag[j+1];
      bno[j]=bno[j+1];
      strcpy(bname[j],bname[j+1]);
      strcpy(aname[j],aname[j+1]);
    }
  bcnt-=1;
  cout<<"\n\n\nBook record deleted...";
  break;
       }
   if(i==bcnt)
     cout<<"\n\nNo such book is found.";
 }

int book::retbno(int a)
 {
   return bno[a];
 }

void member::add_mem()
 {
   clrscr();
   cout<<"\nNEW MEMBER ENTRY...\n";
   cout<<"\nEnter the registration no.:";
   cin>>regno[mcnt];
   cout<<"\n\nEnter the Name of the member:";
   gets(mname[mcnt]);
   cout<<"\n\n\nMember Created..";
   fn[i]=0;
   mbno[i]=0;
   mcnt++;
 }

void member::show_mem()
 {
   clrscr();
   for(i=0;i<mcnt;i++)
     {
       cout<<"\nRegistration no. : "<<regno[i];
       cout<<"\nMember Name : ";
       puts(mname[i]);
       if(mbno[i]!=0)
  {
    cout<<"\nBook code of the issued book:"<<mbno[i];
    cout<<"\n";
  }
       cout<<"Fine:"<<fn[i]<<"\n";
     }
   if(i==0)
     cout<<"\nNo member is found.";
 }
void member::mod_mem()
 {
   clrscr();
   long reg_no;
   cout<<"\nEnter registration no.:";
   cin>>reg_no;
   for(i=0;i<mcnt;i++)
     if(reg_no==regno[i])
       {
  cout<<"\nEnter the name of the member:";
  gets(mname[i]);
  break;
       }
   if(i==mcnt)
     cout<<"No such member is found.";
 }

void member::del_mem()
 {
   clrscr();
   long reg_no;
   cout<<"\nEnter the registration no. of the member to be deleted:";
   cin>>reg_no;
   for(i=0;i<mcnt;i++)
     if(reg_no==regno[i])
       {
  for(j=i;j<mcnt;j++)
    {
      regno[j]=regno[j+1];
      fn[j]=fn[j+1];
      mbno[j]=mbno[j+1];
      strcpy(mname[j],mname[j+1]);
    }
  mcnt-=1;
  cout<<"\n\n\nMember details deleted...";
  break;
       }
   if(i==mcnt)
     cout<<"\n\nNo such member is found.";
 }

dat member::dt()
 {
   int chk=0;
   dat d;
   cin>>d.dd>>d.mm>>d.yr;
   if((d.yr<1000)||(d.yr>9999))
     {
       cout<<"\n Year must be in range 1000-9999 ! ";
       chk=1;
     }
   if((d.mm>12)||(d.mm<=0)||(d.dd<=0)||(d.yr<=0))
     chk=1;
   if(d.mm==2)
     {
       if((d.yr%400==0)||((d.yr%4==0)&&(d.yr%100!=0)))
  {
    if(d.dd>29)
      chk=1;
  }
       else if(d.dd>28)
  chk=1;
     }
   else if((d.mm==4)||(d.mm==6)||(d.mm==9)||(d.mm==11))
     {
       if(d.dd>30)
  chk=1;
     }
   else if(d.dd>31)
     chk=1;
   if(chk==1)
     {
       cout<<"\n Invalid date!\n Enter again : ";
       dt();
     }
   return d;
}

void member::greater(dat d1,dat d2)
 {
   int chk=0;
   if(d2.yr>d1.yr);
   else if(d2.yr==d1.yr)
     {
       if(d2.mm>d1.mm);
       else if(d2.mm==d1.mm)
  {
    if(d2.dd>d1.dd);
    else
      {
        chk=1;
      }
  }
       else
  {
    chk=1;
  }
     }
   else
     {
       chk=1;
     }
   if(chk==0);
   else
     {
       cout<<"\nInvalid returning date.";
       getch();
     }
 }

int member::fine(dat d1,dat d2)
 {
   int c,rs,a=0,b=0,y,j;
   if(d2.yr<d1.yr)
     {
       y=d2.yr;
       for(j=y;j<d1.yr;j++)
  {
    if((j%400==0)||((j%4==0)&&(j%100!=0)))
      a+=366;
    else
      a+=365;
  }
       for(j=1;j<d1.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      a+=31;
    else if(j==4||j==6||j==9||j==11)
      a+=30;
    else if((j==2)&&(d1.yr%400==0)||((d1.yr%4==0)&&(d1.yr%100!=0)))
      a+=29;
    else
      a+=28;
  }
       a+=d1.dd;
       for(j=1;j<d2.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      b+=31;
    else if(j==4||j==6||j==9||j==11)
      b+=30;
    else if((j==2)&&(d2.yr%400==0)||((d2.yr%4==0)&&(d2.yr%100!=0)))
      b+=29;
    else
      b+=28;
  }
       b+=d2.dd;
     }
   else if(d1.yr<d2.yr)
     {
       y=d1.yr;
       for(j=y;j<d2.yr;j++)
  {
    if((j%400==0)||((j%4==0)&&(j%100!=0)))
      b+=366;
    else
      b+=365;
  }
       for(j=1;j<d1.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      a+=31;
    else if(j==4||j==6||j==9||j==11)
      a+=30;
    else if((j==2)&&(d1.yr%400==0)||((d1.yr%4==0)&&(d1.yr%100!=0)))
      a+=29;
    else
      a+=28;
  }
       a+=d1.dd;
       for(j=1;j<d2.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      b+=31;
    else if(j==4||j==6||j==9||j==11)
      b+=30;
    else if((j==2)&&(d2.yr%400==0)||((d2.yr%4==0)&&(d2.yr%100!=0)))
      b+=29;
    else
      b+=28;
  }
       b+=d2.dd;
     }
   else
     {
       for(j=1;j<d1.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      a+=31;
    else if(j==4||j==6||j==9||j==11)
      a+=30;
    else if((j==2)&&(d1.yr%400==0)||((d1.yr%4==0)&&(d1.yr%100!=0)))
      a+=29;
    else
      a+=28;
  }
       a+=d1.dd;
       for(j=1;j<d2.mm;j++)
  {
    if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
      b+=31;
    else if(j==4||j==6||j==9||j==11)
      b+=30;
    else if((j==2)&&(d2.yr%400==0)||((d2.yr%4==0)&&(d2.yr%100!=0)))
      b+=29;
    else
      b+=28;
  }
       b+=d2.dd;
     }
   c=b-a;
   if(c<8)
     {
       rs=0;
       cout<<"\nBook returned on time.";
     }
   else if(c>7 && c<22)
     {
       rs=2*(c-7);
       cout<<"\nBook is returned after "<<c-7<<" days. So fine =Rs. "<<rs;
     }
   else
     {
       rs=5*(c-7);
       cout<<"\nBook is returned after "<<c-7<<" days of returning date. So fine =Rs. "<<rs;
     }
   return rs;
 }

void member::b_issue(book bk)
 {
   clrscr();
   long reg_no;
   int b_no;
   cout<<"\nEnter the registration no. of the member:";
   cin>>reg_no;
   for(i=0;i<mcnt;i++)
     if(reg_no==regno[i])
       {
  cout<<"\nEnter the book no., you want to issue:";
  cin>>b_no;
  for(j=0;j<bcnt;j++)
    {
    if(b_no==bk.retbno(j))
      {
        mbno[i]=b_no;
        cout<<"\nEnter date of issueing the book:";
        di[i]=dt();
        flag[j]=1;
        cout<<"\nYou have to return the book within 7 days.";
        break;
      }
    }
  if(j==bcnt)
    cout<<"\nNo such book is found.";
  break;
       }
   if(i==mcnt)
     cout<<"\nNo such member is found.";
 }

void member::b_return(book bk)
 {
   clrscr();
   long reg_no;
   cout<<"\nEnter the registration no. of the member:";
   cin>>reg_no;
   for(i=0;i<mcnt;i++)
     if(reg_no==regno[i])
       {
  cout<<"\nBook no. of the book issued to the member:"<<mbno[i];
  for(j=0;j<bcnt;j++)
  {
    int b_no2;
    b_no2=bk.retbno(j);
    if(mbno[i]==b_no2)
      {
        cout<<"\nEnter date of returning the book:";
        dr[i]=dt();
        greater(di[i],dr[i]);
        fn[i]=fine(di[i],dr[i]);
        flag[j]=0;
        break;
      }
   }
  if(j==bcnt)
    cout<<"\nNo such book is issued.";
  break;
       }
   if(i==mcnt)
     cout<<"\nNo such member is found.";
 }

void intro()
 {
   clrscr() ;
   gotoxy(31,5) ;
   cout <<"Welcome to Project" ;
   textcolor(BLACK+BLINK) ;
   textbackground(WHITE) ;
   gotoxy(33,7) ;
   cprintf(" BOOK LIBRARY ") ;
   textcolor(LIGHTGRAY) ;
   textbackground(BLACK) ;
   gotoxy(15,10) ;
   cout <<"This  project has facility of maintaining  records" ;
   gotoxy(15,11) ;
   cout <<"of BOOKS and MEMBERS." ;
   gotoxy(15,13) ;
   cout <<"This  project  can  hold maximum of 5 books records" ;
   gotoxy(15,16) ;
   cout <<"One member can issue one book at a time. If he/she" ;
   gotoxy(15,17) ;
   cout <<"does  not return book upto 7 days he/she have  to" ;
   gotoxy(15,18) ;
   cout <<"pay fine of Rs.2/- per day till next 3 weeks and" ;
   gotoxy(15,19);
   cout<<"fine of Rs.5/- per day after that.";
   textcolor(LIGHTGRAY+BLINK) ;
   gotoxy(27,25) ;
   cprintf("Press any key to continue") ;
   textcolor(LIGHTGRAY) ;
 }

void main()
 {
   int choice;
   clrscr();
   intro();
   getch();
   int ch,ch1,ch2;
   char ans='y';
   book bk;
   member mr;
   do
     {
       clrscr();
       cout<<"\n\n\n\n\t\t\t\tMain Menu";
       cout<<"      \n\t\t\t\t~~~~~~~~~";
       cout<<"\n\n\t\t\t\t1. Books options";
       cout<<"\n\n\t\t\t\t2. Members options";
       cout<<"\n\n\t\t\t\t3. Exit";
       cout<<"\n\n\t\t\t\tEnter your choice:";
       cin>>ch;
       switch(ch)
  {
    case 1:clrscr();
    cout<<"\n\n\n\n\t\t\t\tBooks Option";
    cout<<"      \n\t\t\t\t~~~~~~~~~~~~";
    cout<<"\n\n\t\t\t\t1. Add a book";
    cout<<"\n\n\t\t\t\t2. Show all books";
    cout<<"\n\n\t\t\t\t3. Modify a book";
    cout<<"\n\n\t\t\t\t4. Delete a book";
    cout<<"\n\n\t\t\t\t5. Back to main menu";
    cout<<"\n\n\t\t\t\tEnter your choice:";
    cin>>ch1;
    switch(ch1)
      {
        case 1:bk.add_book();
        break;
        case 2:bk.show_book();
        break;
        case 3:bk.mod_book();
        break;
        case 4:bk.del_book();
        break;
        case 5:break;
        default:cout<<"\nWrong input.Enter again!!!";
         break;
      }
    break;
    case 2:clrscr();
    cout<<"\n\n\n\n\t\t\t\tMembers Option";
    cout<<"      \n\t\t\t\t~~~~~~~~~~~~~~";
    cout<<"\n\n\t\t\t\t1. Add a member";
    cout<<"\n\n\t\t\t\t2. Show all members";
    cout<<"\n\n\t\t\t\t3. Modify a member";
    cout<<"\n\n\t\t\t\t4. Delete a member";
    cout<<"\n\n\t\t\t\t5. Issue a book";
    cout<<"\n\n\t\t\t\t6. Return a book";
    cout<<"\n\n\t\t\t\t7. Back to main menu";
    cout<<"\n\n\t\t\t\tEnter your choice:";
    cin>>ch2;
    switch(ch2)
      {
        case 1:mr.add_mem();
        break;
        case 2:mr.show_mem();
        break;
        case 3:mr.mod_mem();
        break;
        case 4:mr.del_mem();
        break;
        case 5:mr.b_issue(bk);
        break;
        case 6:mr.b_return(bk);
         break;
        case 7:break;
        default:cout<<"\nWrong input.Enter again!!!";
         break;
      }
    break;
    case 3:exit(0);
    default:cout<<"\nWrong input.";
  }
       cout<<"\n\nDo you want to continue(Y/N)";
       cin>>ans;
     }while(ans=='y'||ans=='Y');
 }