#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include "iisdat.c"

struct state z;
struct cust c;
struct india g;

void adm();
void admm();
void add();
void modify();
void del();
void exm();
void cpass();
void adds();
void addut();
void dels();
void delut();
void editi();
void edits();
void editut();
void callmods();
void callmodut();

/*void main()
{
 adm();
} */

void adm()
{
 FILE *f1;
 int gd=DETECT,gm,i,x,j;
 int poly[]={270,100,270,184,340,184,340,100};
 int poly1[]={1,1,1,478,638,478,638,1};
 char p[25],ch,m[25];
 clrscr();
 f1=fopen("Password","r");
 fgets(m,25,f1);
 fclose(f1);
 initgraph(&gd,&gm,"");
 b:
 i=0,x=0;
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 line(280,190,280,220);
 line(330,190,330,220);
 line(285,185,325,185);
 line(285,225,325,225);
 arc(285,190,90,180,5);
 arc(325,190,0,90,5);
 arc(325,220,270,0,5);
 arc(285,220,180,270,5);
 arc(305,185,0,180,15);
 arc(305,185,0,180,20);
 circle(305,213,4);
 circle(305,213,2);
 line(263,258,348,258);
 line(263,272,348,272);
 arc(265,265,90,180,7);
 arc(265,265,180,270,7);
 arc(348,265,0,90,7);
 arc(348,265,270,0,7);
 settextstyle(8,0,1);
 outtextxy(260,230,"Password");
 outtextxy(210,430,"Press Esc to go Back");
 a:
 ch=getch();
 if(ch==27)
 {
  closegraph();
 }
 else if(ch==8)
 {
  if(i==0)
   goto a;
  i--;
  x-=8;
  setcolor(1);
  circle(265+x,265,2);
  circle(265+x,265,1);
  goto a;
 }
 else if(ch==13)
 {p[i]='\0';
  for(j=0;p[j]!='\0';j++)
   p[j]+=15;
  if(strcmp(p,m)==0)
  {for(i=1;i<=20;i++)
   {
    setcolor(1);
    setfillstyle(1,0);
    fillpoly(4,poly);
    setcolor(14);
    arc(305,185-i,0,180,15);
    arc(305,185-i,0,180,20);
    line(290,185-i,285,185-i);
    line(320,185,320,185-i);
    line(325,185,325,185-i);
    delay(30);
   }
  delay(2000);
  closegraph();
  admm();
  }
  else {
	settextstyle(8,0,1);
	outtextxy(220,300,"Wrong Password!!!");
	getch();
	setcolor(1);
	setfillstyle(1,0);
	fillpoly(4,poly1);
	goto b;
       }
 }
 else
 {
  if(x==88)
   goto a;
  setcolor(14);
  p[i]=ch;
  circle(265+x,265,2);
  circle(265+x,265,1);
  x+=8;
  i++;
  goto a;
 }


}

void admm()
{
 int gd=DETECT,gm,i=0;
 int poly[]={1,1,1,478,638,478,638,1};
 char ch,ch1;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setbkcolor(6);
 setcolor(1);
 settextstyle(4,0,4);
 outtextxy(20,90,"Add");
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(20,160,"Modify");
 outtextxy(20,230,"Delete");
 outtextxy(20,300,"Examine");
 outtextxy(20,370,"Change Password");
 outtextxy(550,400,"Exit");
 a:
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(230,40,"Choose any one");
 outtextxy(90,450,"Press up and down to move, Enter to select");
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==80)
  {
   if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,150,"Modify");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i++;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,220,"Delete");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i++;
    goto a;
   }
   else if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,290,"Examine");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i++;
    goto a;
   }
   else if(i==3)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,360,"Change Password");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Exit");
    i++;
    goto a;
   }
   else if(i==4)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Exit");
    i++;
    goto a;
   }
   else if(i==5)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,90,"Add");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i=0;
    goto a;
   }
  }
  if(ch1==72)
  {
   if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,150,"Modify");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i--;
    goto a;
   }
   else if(i==3)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,220,"Delete");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i--;
    goto a;
   }
   else if(i==4)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,290,"Examine");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i--;
    goto a;
   }
   else if(i==5)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,360,"Change Password");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Exit");
    i--;
    goto a;
   }
   else if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,90,"Add");
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Exit");
    i=5;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(20,90,"Add");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(20,160,"Modify");
    outtextxy(20,230,"Delete");
    outtextxy(20,300,"Examine");
    outtextxy(20,370,"Change Password");
    outtextxy(550,400,"Exit");
    i--;
    goto a;
   }
  }
 }
 else if(ch==13)
 {
  if(i==0)
  {closegraph();
   add();
  }
  else if(i==1)
       {closegraph();
	modify();
       }
  else if(i==2)
       {closegraph();
	del();
       }
  else if(i==3)
       {closegraph();
	exm();
       }
  else if(i==4)
       {closegraph();
	cpass();
       }
  else if(i==5)
       {closegraph();
	adm();
       }
 }
 else goto a;
}

void add()
{
 int gd=DETECT,gm,i=0;
 int poly[]={1,1,1,478,638,478,638,1};
 char ch,ch1;
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(6);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(1);
 settextstyle(4,0,4);
 outtextxy(40,150,"Add State");
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(40,230,"Add Union Territory");
 outtextxy(550,400,"Back");
 a:
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(230,40,"Choose any one");
 outtextxy(90,450,"Press up and down to move, Enter to select");
 ch=getch();
 if(ch==0)
 {ch1=getch();
  if(ch1==80)
  {
   if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Add State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,220,"Add Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i++;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Add State");
    outtextxy(40,230,"Add Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i++;
    goto a;
   }
   else if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,150,"Add State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,230,"Add Union Territory");
    outtextxy(550,400,"Back");
    i=0;
    goto a;
   }
  }
  else if(ch1==72)
  {
   if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Add State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,220,"Add Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
   else if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Add State");
    outtextxy(40,230,"Add Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i=2;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,150,"Add State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,230,"Add Union Territory");
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
  }
 }
 else if(ch==13)
 {
  if(i==0)
   {closegraph();
    adds();
   }
  else if(i==1)
   {closegraph();
    addut();
   }
  else if(i==2)
   {closegraph();
    admm();
   }
 }
 else goto a;
}

void modify()
{
 int gd=DETECT,gm,i=0;
 int poly[]={1,1,1,478,638,478,638,1};
 char ch,ch1;
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(6);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(1);
 settextstyle(4,0,4);
 outtextxy(40,110,"Edit India");
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(40,180,"Edit State");
 outtextxy(40,250,"Edit Union Territory");
 outtextxy(550,400,"Back");
 a:
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(230,40,"Choose any one");
 outtextxy(90,450,"Press up and down to move, Enter to select");
 ch=getch();
 if(ch==0)
 {ch1=getch();
  if(ch1==80)
  {
   if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,170,"Edit State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,250,"Edit Union Territory");
    outtextxy(550,400,"Back");
    i++;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    outtextxy(40,180,"Edit State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,240,"Edit Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i++;
    goto a;
   }
   else if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    outtextxy(40,180,"Edit State");
    outtextxy(40,250,"Edit Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i++;
    goto a;
   }
   else if(i==3)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,110,"Edit India");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,180,"Edit State");
    outtextxy(40,250,"Edit Union Territory");
    outtextxy(550,400,"Back");
    i=0;
    goto a;
   }
  }
  else if(ch1==72)
  {
   if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,170,"Edit State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,250,"Edit Union Territory");
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
   else if(i==3)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    outtextxy(40,180,"Edit State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,240,"Edit Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
   else if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,110,"Edit India");
    outtextxy(40,180,"Edit State");
    outtextxy(40,250,"Edit Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i=3;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,110,"Edit India");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,180,"Edit State");
    outtextxy(40,250,"Edit Union Territory");
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
  }
 }
 else if(ch==13)
 {
  if(i==0)
   {closegraph();
    editi();
   }
  else if(i==1)
   {closegraph();
    edits();
   }
  else if(i==2)
   {closegraph();
    editut();
   }
  else if(i==3)
   {closegraph();
    admm();
   }
 }
 else goto a;
}

void del()
{
 int gd=DETECT,gm,i=0;
 int poly[]={1,1,1,478,638,478,638,1};
 char ch,ch1;
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(6);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(1);
 settextstyle(4,0,4);
 outtextxy(40,150,"Delete State");
 setcolor(14);
 settextstyle(4,0,3);
 outtextxy(40,230,"Delete Union Territory");
 outtextxy(550,400,"Back");
 a:
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(230,40,"Choose any one");
 outtextxy(90,450,"Press up and down to move, Enter to select");
 ch=getch();
 if(ch==0)
 {ch1=getch();
  if(ch1==80)
  {
   if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Delete State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,220,"Delete Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i++;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Delete State");
    outtextxy(40,230,"Delete Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i++;
    goto a;
   }
   else if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,150,"Delete State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,230,"Delete Union Territory");
    outtextxy(550,400,"Back");
    i=0;
    goto a;
   }
  }
  else if(ch1==72)
  {
   if(i==2)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Delete State");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,220,"Delete Union Territory");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
   else if(i==0)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,150,"Delete State");
    outtextxy(40,230,"Delete Union Territory");
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(550,390,"Back");
    i=2;
    goto a;
   }
   else if(i==1)
   {
    setcolor(6);
    setfillstyle(6,0);
    fillpoly(4,poly);
    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(40,150,"Delete State");
    setcolor(14);
    settextstyle(4,0,3);
    outtextxy(40,230,"Delete Union Territory");
    outtextxy(550,400,"Back");
    i--;
    goto a;
   }
  }
 }
 else if(ch==13)
 {
  if(i==0)
   {closegraph();
    dels();
   }
  else if(i==1)
   {closegraph();
    delut();
   }
  else if(i==2)
   {closegraph();
    admm();
   }
 }
 else goto a;

}

void exm()
{
 FILE *f1;
 int i=0;
 char ch=13;
 f1=fopen("Customer","r");
 clrscr();
 while((fread(&c,sizeof(c),1,f1)!=NULL)&&ch==13)
 {textcolor(14);
  gotoxy(24,5);
  cprintf("Customer Suggestions/Complaints");
  gotoxy(5,9);
  cprintf("Comment :");
  textcolor(15);
  gotoxy(8,11);
  cprintf(c.com);
  gotoxy(5,18);
  textcolor(14);
  cprintf("Customer Name :");
  textcolor(15);
  gotoxy(8,20);
  cprintf(c.n);
  textcolor(10);
  gotoxy(8,24);
  cprintf("'Press enter to view next comment' else 'Esc to go back'");
  ch=getch();
  i++;
 }
  if(i==0)
  {gotoxy(20,20);
   cprintf("Sorry! No comments!!!");
   getch();
   admm();
  }
  else admm();
}

void cpass()
{
 int gd=DETECT,gm,i,x,j;
 char op[20],np[20],rp[20],ch,ch1,p[25];
 FILE *f1,*f2;
 f1=fopen("Password","r");
 fgets(p,25,f1);
 fclose(f1);
 l:
 i=0,x=0;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(7,0,1);
 outtextxy(80,100,"Old Password");
 outtextxy(80,150,"New Password");
 outtextxy(80,200,"Retype Password");
 settextstyle(8,0,1);
 outtextxy(210,430,"Press Esc to go Back");
 setcolor(8);
 line(303,106,388,106);
 line(303,120,388,120);
 arc(305,113,90,180,7);
 arc(305,113,180,270,7);
 arc(386,113,0,90,7);
 arc(386,113,270,0,7);
 setcolor(14);
 line(303,156,388,156);
 line(303,170,388,170);
 arc(305,163,90,180,7);
 arc(305,163,180,270,7);
 arc(386,163,0,90,7);
 arc(386,163,270,0,7);

 line(303,206,388,206);
 line(303,220,388,220);
 arc(305,213,90,180,7);
 arc(305,213,180,270,7);
 arc(386,213,0,90,7);
 arc(386,213,270,0,7);
 a:
 ch=getch();
 if(ch==27)
 {closegraph();
  admm();
 }
 else if(ch==13)
  op[i]='\0';
 else if(ch==8)
 {
  if(x==0)
   goto a;
  i--;
  x-=8;
  setcolor(16);
  circle(305+x,113,2);
  circle(305+x,113,1);
  goto a;
 }
 else {
       if(x==88)
	goto a;
       op[i]=ch;
       setcolor(14);
       circle(305+x,113,2);
       circle(305+x,113,1);
       i++;
       x+=8;
       goto a;
      }

 x=0,i=0;
 setcolor(14);
 line(303,106,388,106);
 line(303,120,388,120);
 arc(305,113,90,180,7);
 arc(305,113,180,270,7);
 arc(386,113,0,90,7);
 arc(386,113,270,0,7);
 setcolor(8);
 line(303,156,388,156);
 line(303,170,388,170);
 arc(305,163,90,180,7);
 arc(305,163,180,270,7);
 arc(386,163,0,90,7);
 arc(386,163,270,0,7);
 setcolor(14);
 line(303,206,388,206);
 line(303,220,388,220);
 arc(305,213,90,180,7);
 arc(305,213,180,270,7);
 arc(386,213,0,90,7);
 arc(386,213,270,0,7);
 b:
 ch=getch();
 if(ch==27)
 {closegraph();
  admm();
 }
 else if(ch==13)
  np[i]='\0';
 else if(ch==8)
 {
  if(x==0)
   goto b;
  i--;
  x-=8;
  setcolor(16);
  circle(305+x,163,2);
  circle(305+x,163,1);
  goto b;
 }
 else {
       if(x==88)
	goto b;
       np[i]=ch;
       setcolor(14);
       circle(305+x,163,2);
       circle(305+x,163,1);
       i++;
       x+=8;
       goto b;
      }

 x=0,i=0;
 setcolor(14);
 line(303,106,388,106);
 line(303,120,388,120);
 arc(305,113,90,180,7);
 arc(305,113,180,270,7);
 arc(386,113,0,90,7);
 arc(386,113,270,0,7);

 line(303,156,388,156);
 line(303,170,388,170);
 arc(305,163,90,180,7);
 arc(305,163,180,270,7);
 arc(386,163,0,90,7);
 arc(386,163,270,0,7);
 setcolor(8);
 line(303,206,388,206);
 line(303,220,388,220);
 arc(305,213,90,180,7);
 arc(305,213,180,270,7);
 arc(386,213,0,90,7);
 arc(386,213,270,0,7);
 c:
 ch=getch();
 if(ch==27)
 {closegraph();
  admm();
 }
 else if(ch==13)
  rp[i]='\0';
 else if(ch==8)
 {
  if(x==0)
   goto c;
  i--;
  x-=8;
  setcolor(16);
  circle(305+x,213,2);
  circle(305+x,213,1);
  goto c;
 }
 else {
       if(x==88)
	goto c;
       rp[i]=ch;
       setcolor(14);
       circle(305+x,213,2);
       circle(305+x,213,1);
       i++;
       x+=8;
       goto c;
      }
 for(j=0;op[j]!='\0';j++)
    op[j]+=15;
 for(j=0;np[j]!='\0';j++)
    np[j]+=15;
 for(j=0;rp[j]!='\0';j++)
    rp[j]+=15;
 if(strcmp(p,op)==0&&strcmp(np,rp)==0)
 {
  outtextxy(130,280,"Do you want to change Password(Y/N)");
  ch1=getch();
  if(ch1=='Y'||ch1=='y')
  {f2=fopen("Password","w");
    fputs(np,f2);
   fclose(f2);
   closegraph();
   admm();
  }
  else {closegraph();
	admm();
       }
 }
 else if(strcmp(p,op)!=0)
      {outtextxy(200,280,"Wrong Old Password!!!");
       getch();
       closegraph();
       goto l;
      }
 else {outtextxy(200,280,"Wrong Duplication!!!");
       getch();
       closegraph();
       goto l;
      }
 closegraph();
}

void adds()
{
 int gd=DETECT,gm,i=0,j,k;
 char n[50],n1[50][50],t[50],ch;
 FILE *f1;
 f1=fopen("State","a");
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,5);
 outtextxy(270,10,"State");
 gotoxy(4,6);
 printf("Name : ");
 gotoxy(4,8);
 printf("Capital Name : ");
 gotoxy(4,10);
 printf("Governor : ");
 gotoxy(4,12);
 printf("Chief Minister : ");
 gotoxy(4,14);
 printf("Language : ");
 gotoxy(4,16);
 printf("Population : ");
 gotoxy(4,18);
 printf("Area : ");
 gotoxy(4,20);
 printf("No. of District : ");
 gotoxy(4,22);
 printf("Famous Places (only 2 places): ");
 gotoxy(4,24);
 printf("Famous Things (only 2 things): ");
 gotoxy(2,6);
 putchar(26);
 gotoxy(12,6);
 gets(z.n);
 gotoxy(2,8);
 putchar(26);
 gotoxy(20,8);
 gets(z.cn);
 gotoxy(2,10);
 putchar(26);
 gotoxy(16,10);
 gets(z.g);
 gotoxy(2,12);
 putchar(26);
 gotoxy(22,12);
 gets(z.cm);
 gotoxy(2,14);
 putchar(26);
 gotoxy(16,14);
 gets(z.lang);
 gotoxy(2,16);
 putchar(26);
 gotoxy(18,16);
 gets(z.pop);
 gotoxy(2,18);
 putchar(26);
 gotoxy(12,18);
 gets(z.area);
 gotoxy(2,20);
 putchar(26);
 gotoxy(23,20);
 gets(z.nod);
 gotoxy(2,22);
 putchar(26);
 gotoxy(36,22);
 gets(z.fs);
 rectangle(0,0,639,479);
 gotoxy(2,24);
 putchar(26);
 gotoxy(36,24);
 gets(z.ft);
 fwrite(&z.n,sizeof(z.n),1,f1);
 fclose(f1);
 f1=fopen("State","r");
 while(fread(&n,sizeof(n),1,f1)!=NULL)
 {strcpy(n1[i],n);
  i++;
 }
 fclose(f1);
 for(j=0;j<i;j++)
  for(k=j;k<i;k++)
   if(strcmp(n1[j],n1[k])>0)
   {strcpy(t,n1[j]);
    strcpy(n1[j],n1[k]);
    strcpy(n1[k],t);
   }
 settextstyle(8,0,1);
 setcolor(14);
 outtextxy(140,400,"Do you want to add state(Y/N)?");
 ch=getch();
 if(ch=='y'||ch=='Y')
 {f1=fopen("State","w");
  for(j=0;j<i;j++)
  {fwrite(&n1[j],sizeof(n1[j]),1,f1);
   fflush(stdin);
  }
  fclose(f1);
  f1=fopen(z.n,"w");
   fwrite(&z,sizeof(z),1,f1);
  fclose(f1);
  outtextxy(180,440,"State has been added!!!");
  delay(700);
 }
  closegraph();
  admm();
}

void addut()
{
 int gd=DETECT,gm,i=0,j,k;
 char n[50],n1[50][50],t[50],ch;
 FILE *f1;
 f1=fopen("UT","a");
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,5);
 outtextxy(200,10,"Union Territories");
 gotoxy(4,6);
 printf("Name : ");
 gotoxy(4,8);
 printf("Capital Name : ");
 gotoxy(4,10);
 printf("Governor : ");
 gotoxy(4,12);
 printf("Chief Minister : ");
 gotoxy(4,14);
 printf("Language : ");
 gotoxy(4,16);
 printf("Population : ");
 gotoxy(4,18);
 printf("Area : ");
 gotoxy(4,20);
 printf("No. of District : ");
 gotoxy(4,22);
 printf("Famous Places (only 2 places): ");
 gotoxy(4,24);
 printf("Famous Things (only 2 things): ");
 gotoxy(2,6);
 putchar(26);
 gotoxy(12,6);
 gets(z.n);
 gotoxy(2,8);
 putchar(26);
 gotoxy(20,8);
 gets(z.cn);
 gotoxy(2,10);
 putchar(26);
 gotoxy(16,10);
 gets(z.g);
 gotoxy(2,12);
 putchar(26);
 gotoxy(22,12);
 gets(z.cm);
 gotoxy(2,14);
 putchar(26);
 gotoxy(16,14);
 gets(z.lang);
 gotoxy(2,16);
 putchar(26);
 gotoxy(18,16);
 gets(z.pop);
 gotoxy(2,18);
 putchar(26);
 gotoxy(12,18);
 gets(z.area);
 gotoxy(2,20);
 putchar(26);
 gotoxy(23,20);
 gets(z.nod);
 gotoxy(2,22);
 putchar(26);
 gotoxy(36,22);
 gets(z.fs);
 rectangle(0,0,639,479);
 gotoxy(2,24);
 putchar(26);
 gotoxy(36,24);
 gets(z.ft);
 fwrite(&z.n,sizeof(z.n),1,f1);
 fclose(f1);
 f1=fopen("UT","r");
 while(fread(&n,sizeof(n),1,f1)!=NULL)
 {strcpy(n1[i],n);
  i++;
 }
 fclose(f1);
 for(j=0;j<i;j++)
  for(k=j;k<i;k++)
   if(strcmp(n1[j],n1[k])>0)
   {strcpy(t,n1[j]);
    strcpy(n1[j],n1[k]);
    strcpy(n1[k],t);
   }
 settextstyle(8,0,1);
 setcolor(14);
 outtextxy(90,400,"Do you want to add union territory(Y/N)?");
 ch=getch();
 if(ch=='y'||ch=='Y')
 {f1=fopen("UT","w");
  for(j=0;j<i;j++)
  {fwrite(&n1[j],sizeof(n1[j]),1,f1);
   fflush(stdin);
  }
  fclose(f1);
  f1=fopen(z.n,"w");
   fwrite(&z,sizeof(z),1,f1);
  fclose(f1);
  outtextxy(130,440,"Union Territory has been added!!!");
  delay(700);
 }
 closegraph();
 admm();
}

void dels()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k,l;
 int poly[]={240,200,240,300,635,300,635,200};
 int poly1[]={10,115,10,320,240,320,240,115};
 FILE *f1;
 char n[50],n1[50][50],ch,ch1,ch2;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(6);
 setbkcolor(1);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(270,5,"States");
 settextstyle(3,0,1);
 outtextxy(70,450,"Press Down to move, Enter to delete and Esc for back");
 f1=fopen("State","r");
 while(fread(&n,sizeof(n),1,f1)==1)
 {strcpy(n1[j],n);
  j++;
 }
 fclose(f1);
 a:
 setcolor(1);
 setfillstyle(1,1);
 fillpoly(4,poly);
 setcolor(14);
 settextstyle(4,0,5);
 outtextxy(250,200,n1[i]);
 b:
 if(i%9==0)
 {p=0;q=0;
  setcolor(1);
  setfillstyle(1,1);
  fillpoly(4,poly1);
  setcolor(14);
  settextstyle(7,0,1);
  for(k=i;k<i+9&&k<j;k++)
  {outtextxy(10,120+p,n1[k]);
   p+=20;
  }
 }
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==80)
  {i++;
   if(i==j)
   {
    i=0;
    goto a;
   }
   setcolor(1);
   setfillstyle(1,1);
   fillpoly(4,poly);
   setcolor(14);
   settextstyle(4,0,5);
   outtextxy(250,200,n1[i]);
   setcolor(9);
   settextstyle(7,0,1);
   outtextxy(10,120+q,n1[i-1]);
   q+=20;
   goto b;
  }
  else goto b;
 }
 else if(ch==13)
 {
  setcolor(14);
  settextstyle(8,0,1);
  outtextxy(100,360,"Do you really want to delete state(Y/N)?");
  ch2=getch();
  if(ch2=='Y'||ch2=='y')
  {
   f1=fopen("State","w");
   for(l=0;l<j;l++)
    if(strcmp(n1[i],n1[l])!=0)
     fwrite(&n1[l],sizeof(n1[l]),1,f1);
   fclose(f1);
   settextstyle(8,0,1);
   outtextxy(210,400,"State Deleted!!!");
   delay(800);
   closegraph();
   admm();
  }
  else {closegraph();
	admm();
       }
 }
 else if(ch==27)
  {closegraph();
   admm();
  }
 else goto b;
}

void delut()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k,l;
 int poly[]={60,340,60,430,635,430,635,340};
 int poly1[]={10,115,10,320,340,320,340,115};
 FILE *f3;
 char n[50],n1[50][50],ch,ch1,ch2;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(1);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,6);
 outtextxy(150,5,"Union Territories");
 settextstyle(3,0,1);
 outtextxy(70,450,"Press Down to move, Enter to select and Esc for back");
 f3=fopen("UT","r");
 while(fread(&n,sizeof(n),1,f3)==1)
 {strcpy(n1[j],n);
  j++;
 }
 fclose(f3);
 a:
 setcolor(1);
 setfillstyle(1,1);
 fillpoly(4,poly);
 setcolor(14);
 settextstyle(4,0,5);
 outtextxy(60,340,n1[i]);
 b:
 if(i%8==0)
 {p=0;q=0;
  setcolor(1);
  setfillstyle(1,1);
  fillpoly(4,poly1);
  setcolor(14);
  settextstyle(7,0,1);
  for(k=i;k<j&&k<i+8;k++)
  {outtextxy(10,120+p,n1[k]);
   p+=20;
  }
 }
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==80)
  {i++;
   if(i==j)
   {
    i=0;
    goto a;
   }
   setcolor(1);
   setfillstyle(1,1);
   fillpoly(4,poly);
   setcolor(14);
   settextstyle(4,0,5);
   outtextxy(60,340,n1[i]);
   setcolor(9);
   settextstyle(7,0,1);
   outtextxy(10,120+q,n1[i-1]);
   q+=20;
   goto b;
  }
  else goto b;
 }
 else if(ch==13)
 {setcolor(14);
  settextstyle(8,0,1);
  outtextxy(40,410,"Do you really want to delete union territory(Y/N)?");
  ch2=getch();
  if(ch2=='Y'||ch2=='y')
  {
   f3=fopen("UT","w");
   for(l=0;l<j;l++)
    if(strcmp(n1[i],n1[l])!=0)
     fwrite(&n1[l],sizeof(n1[l]),1,f3);
   fclose(f3);
   settextstyle(8,0,1);
   outtextxy(350,200,"Union Territory Deleted!!!");
   delay(800);
   closegraph();
   admm();
  }
  else {closegraph();
	admm();
       }
 }
 else if(ch==27)
  {closegraph();
   admm();
  }
 else goto b;
}

void editi()
{
 int gd=DETECT,gm;
 char ch;
 struct india t;
 FILE *f1;
 f1=fopen("India","r");
 fread(&t,sizeof(t),1,f1);
 fclose(f1);
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,5);
 outtextxy(270,10,"India");
 gotoxy(4,8);
 printf("Prime Minister : ");
 gotoxy(4,10);
 printf("President : ");
 gotoxy(4,12);
 printf("Population : ");
 gotoxy(4,14);
 printf("Number of States : ");
 gotoxy(4,16);
 printf("Number of Union Territories : ");
 gotoxy(2,8);
 putchar(26);
 gotoxy(22,8);
 gets(t.pm);
 gotoxy(2,10);
 putchar(26);
 gotoxy(17,10);
 gets(t.pr);
 gotoxy(2,12);
 putchar(26);
 gotoxy(18,12);
 gets(t.pop);
 gotoxy(2,14);
 putchar(26);
 gotoxy(24,14);
 gets(t.nos);
 gotoxy(2,16);
 putchar(26);
 gotoxy(35,16);
 gets(t.nout);
 setcolor(14);
 settextstyle(8,0,1);
 outtextxy(100,360,"Do you really want to modify info(Y/N)?");
 ch=getch();
 if(ch=='y'||ch=='Y')
 {f1=fopen("India","w");
  fwrite(&t,sizeof(t),1,f1);
  fclose(f1);
  outtextxy(180,420,"Info has been modified!!!");
  delay(700);
 }
 closegraph();
 admm();
}

void edits()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k,l;
 int poly[]={240,200,240,300,635,300,635,200};
 int poly1[]={10,115,10,320,240,320,240,115};
 FILE *f1;
 char n[50],n1[50][50],ch,ch1,ch2;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(6);
 setbkcolor(1);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(270,5,"States");
 settextstyle(3,0,1);
 outtextxy(70,450,"Press Down to move, Enter to modify and Esc for back");
 f1=fopen("State","r");
 while(fread(&n,sizeof(n),1,f1)==1)
 {strcpy(n1[j],n);
  j++;
 }
 fclose(f1);
 a:
 setcolor(1);
 setfillstyle(1,1);
 fillpoly(4,poly);
 setcolor(14);
 settextstyle(4,0,5);
 outtextxy(250,200,n1[i]);
 b:
 if(i%9==0)
 {p=0;q=0;
  setcolor(1);
  setfillstyle(1,1);
  fillpoly(4,poly1);
  setcolor(14);
  settextstyle(7,0,1);
  for(k=i;k<i+9&&k<j;k++)
  {outtextxy(10,120+p,n1[k]);
   p+=20;
  }
 }
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==80)
  {i++;
   if(i==j)
   {
    i=0;
    goto a;
   }
   setcolor(1);
   setfillstyle(1,1);
   fillpoly(4,poly);
   setcolor(14);
   settextstyle(4,0,5);
   outtextxy(250,200,n1[i]);
   setcolor(9);
   settextstyle(7,0,1);
   outtextxy(10,120+q,n1[i-1]);
   q+=20;
   goto b;
  }
  else goto b;
 }
 else if(ch==13)
 {
  setcolor(14);
  settextstyle(8,0,1);
  outtextxy(100,360,"Do you really want to modify state(Y/N)?");
  ch2=getch();
  if(ch2=='Y'||ch2=='y')
  {
   closegraph();
   callmods();
  }
  else {closegraph();
	admm();
       }
 }
 else if(ch==27)
  {closegraph();
   admm();
  }
 else goto b;
}

void editut()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k,l;
 int poly[]={60,340,60,430,635,430,635,340};
 int poly1[]={10,115,10,320,340,320,340,115};
 FILE *f3;
 char n[50],n1[50][50],ch,ch1,ch2;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(1);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,6);
 outtextxy(150,5,"Union Territories");
 settextstyle(3,0,1);
 outtextxy(70,450,"Press Down to move, Enter to modify and Esc for back");
 f3=fopen("UT","r");
 while(fread(&n,sizeof(n),1,f3)==1)
 {strcpy(n1[j],n);
  j++;
 }
 fclose(f3);
 a:
 setcolor(1);
 setfillstyle(1,1);
 fillpoly(4,poly);
 setcolor(14);
 settextstyle(4,0,5);
 outtextxy(60,340,n1[i]);
 b:
 if(i%8==0)
 {p=0;q=0;
  setcolor(1);
  setfillstyle(1,1);
  fillpoly(4,poly1);
  setcolor(14);
  settextstyle(7,0,1);
  for(k=i;k<j&&k<i+8;k++)
  {outtextxy(10,120+p,n1[k]);
   p+=20;
  }
 }
 ch=getch();
 if(ch==0)
 {
  ch1=getch();
  if(ch1==80)
  {i++;
   if(i==j)
   {
    i=0;
    goto a;
   }
   setcolor(1);
   setfillstyle(1,1);
   fillpoly(4,poly);
   setcolor(14);
   settextstyle(4,0,5);
   outtextxy(60,340,n1[i]);
   setcolor(9);
   settextstyle(7,0,1);
   outtextxy(10,120+q,n1[i-1]);
   q+=20;
   goto b;
  }
  else goto b;
 }
 else if(ch==13)
 {setcolor(14);
  settextstyle(8,0,1);
  outtextxy(40,410,"Do you really want to modify union territory(Y/N)?");
  ch2=getch();
  if(ch2=='Y'||ch2=='y')
  {
   closegraph();
   callmodut();
  }
  else {closegraph();
	admm();
       }
 }
 else if(ch==27)
  {closegraph();
   admm();
  }
 else goto b;
}

void callmods()
{
 int gd=DETECT,gm,i=0,j,k,l=0;
 char n[50],n1[50][50],t[50],s[50];
 FILE *f1;
 f1=fopen("State","r");
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,5);
 outtextxy(270,10,"State");
 gotoxy(4,6);
 printf("Name : ");
 gotoxy(4,8);
 printf("Capital Name : ");
 gotoxy(4,10);
 printf("Governor : ");
 gotoxy(4,12);
 printf("Chief Minister : ");
 gotoxy(4,14);
 printf("Language : ");
 gotoxy(4,16);
 printf("Population : ");
 gotoxy(4,18);
 printf("Area : ");
 gotoxy(4,20);
 printf("No. of District : ");
 gotoxy(4,22);
 printf("Famous Places (only 2 places): ");
 gotoxy(4,24);
 printf("Famous Things (only 2 things): ");
 gotoxy(2,6);
 putchar(26);
 gotoxy(12,6);
 gets(z.n);
 gotoxy(2,8);
 putchar(26);
 gotoxy(20,8);
 gets(z.cn);
 gotoxy(2,10);
 putchar(26);
 gotoxy(16,10);
 gets(z.g);
 gotoxy(2,12);
 putchar(26);
 gotoxy(22,12);
 gets(z.cm);
 gotoxy(2,14);
 putchar(26);
 gotoxy(16,14);
 gets(z.lang);
 gotoxy(2,16);
 putchar(26);
 gotoxy(18,16);
 gets(z.pop);
 gotoxy(2,18);
 putchar(26);
 gotoxy(12,18);
 gets(z.area);
 gotoxy(2,20);
 putchar(26);
 gotoxy(23,20);
 gets(z.nod);
 gotoxy(2,22);
 putchar(26);
 gotoxy(36,22);
 gets(z.fs);
 rectangle(0,0,639,479);
 gotoxy(2,24);
 putchar(26);
 gotoxy(36,24);
 gets(z.ft);
 while(fread(&s,sizeof(s),1,f1)!=NULL)
  if(strcmp(s,z.n)==0)
   l++;
 fclose(f1);
 if(l==0)
 {f1=fopen("State","a");
   fwrite(&z.n,sizeof(z.n),1,f1);
  fclose(f1);
 }
 f1=fopen("State","r");
 while(fread(&n,sizeof(n),1,f1)!=NULL)
 {strcpy(n1[i],n);
  i++;
 }
 fclose(f1);
 for(j=0;j<i;j++)
  for(k=j;k<i;k++)
   if(strcmp(n1[j],n1[k])>0)
   {strcpy(t,n1[j]);
    strcpy(n1[j],n1[k]);
    strcpy(n1[k],t);
   }
 settextstyle(8,0,1);
 setcolor(14);
 f1=fopen("State","w");
 for(j=0;j<i;j++)
 {fwrite(&n1[j],sizeof(n1[j]),1,f1);
  fflush(stdin);
 }
 fclose(f1);
 f1=fopen(z.n,"w");
  fwrite(&z,sizeof(z),1,f1);
 fclose(f1);
 outtextxy(180,440,"State has been modified!!!");
 delay(700);
 closegraph();
 admm();
}

void callmodut()
{
 int gd=DETECT,gm,i=0,j,k,l=0;
 char n[50],n1[50][50],t[50],ch,s[50];
 FILE *f1;
 f1=fopen("UT","r");
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(14);
 rectangle(0,0,639,479);
 settextstyle(4,0,5);
 outtextxy(200,10,"Union Territories");
 gotoxy(4,6);
 printf("Name : ");
 gotoxy(4,8);
 printf("Capital Name : ");
 gotoxy(4,10);
 printf("Governor : ");
 gotoxy(4,12);
 printf("Chief Minister : ");
 gotoxy(4,14);
 printf("Language : ");
 gotoxy(4,16);
 printf("Population : ");
 gotoxy(4,18);
 printf("Area : ");
 gotoxy(4,20);
 printf("No. of District : ");
 gotoxy(4,22);
 printf("Famous Places (only 2 places): ");
 gotoxy(4,24);
 printf("Famous Things (only 2 things): ");
 gotoxy(2,6);
 putchar(26);
 gotoxy(12,6);
 gets(z.n);
 gotoxy(2,8);
 putchar(26);
 gotoxy(20,8);
 gets(z.cn);
 gotoxy(2,10);
 putchar(26);
 gotoxy(16,10);
 gets(z.g);
 gotoxy(2,12);
 putchar(26);
 gotoxy(22,12);
 gets(z.cm);
 gotoxy(2,14);
 putchar(26);
 gotoxy(16,14);
 gets(z.lang);
 gotoxy(2,16);
 putchar(26);
 gotoxy(18,16);
 gets(z.pop);
 gotoxy(2,18);
 putchar(26);
 gotoxy(12,18);
 gets(z.area);
 gotoxy(2,20);
 putchar(26);
 gotoxy(23,20);
 gets(z.nod);
 gotoxy(2,22);
 putchar(26);
 gotoxy(36,22);
 gets(z.fs);
 rectangle(0,0,639,479);
 gotoxy(2,24);
 putchar(26);
 gotoxy(36,24);
 gets(z.ft);
 while(fread(&s,sizeof(s),1,f1)!=NULL)
  if(strcmp(s,z.n)==0)
   l++;
 fclose(f1);
 if(l==0)
 {f1=fopen("UT","a");
   fwrite(&z.n,sizeof(z.n),1,f1);
  fclose(f1);
 }
 f1=fopen("UT","r");
 while(fread(&n,sizeof(n),1,f1)!=NULL)
 {strcpy(n1[i],n);
  i++;
 }
 fclose(f1);
 for(j=0;j<i;j++)
  for(k=j;k<i;k++)
   if(strcmp(n1[j],n1[k])>0)
   {strcpy(t,n1[j]);
    strcpy(n1[j],n1[k]);
    strcpy(n1[k],t);
   }
 settextstyle(8,0,1);
 setcolor(14);
 f1=fopen("UT","w");
 for(j=0;j<i;j++)
 {fwrite(&n1[j],sizeof(n1[j]),1,f1);
  fflush(stdin);
 }
 fclose(f1);
 f1=fopen(z.n,"w");
  fwrite(&z,sizeof(z),1,f1);
 fclose(f1);
 outtextxy(130,440,"Union Territory has been added!!!");
 delay(700);
 closegraph();
 admm();
}