#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
//#include<iisdat.c>

struct state x;
struct cust c;
struct india g;

void cust();
void custm();
void india();
void states();
void ut();
void sug();
void call(char *,int);

/*void main()
{
 custm();
} */


void cust()
{
 int gd=DETECT,gm,i;
 int poly[]={230,310,230,340,400,340,400,310};
 int poly1[]={230,341,230,371,400,371,400,341};
 int poly2[]={230,372,230,402,400,402,400,372};
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,10);
 outtextxy(115,30,"INDIA");
 settextstyle(4,0,7);
 outtextxy(80,200,"Unity in Diversity");
 setfillstyle(1,4);
 fillpoly(4,poly);
 setfillstyle(1,15);
 fillpoly(4,poly1);
 setfillstyle(1,2);
 fillpoly(4,poly2);
 setcolor(4);
 rectangle(230,310,400,340);
 setcolor(15);
 rectangle(230,341,400,371);
 setcolor(2);
 rectangle(230,372,400,402);
 setcolor(1);
 setfillstyle(1,15);
 for(i=0;i<360;i=i+15)
 pieslice(315,356,i,i+15,14);
 circle(315,356,15);
 for(i=0;i<130;i++)
 {setcolor(15);
  rectangle(250,440,250+i,445);
  setcolor(14);
  line(250,442,250+i,442);
  line(250,443,250+i,443);
  delay(50);
 }
 closegraph();
 custm();
}

void custm()
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
 outtextxy(20,80,"About India");
 setcolor(14);
 settextstyle(4,0,2);
 outtextxy(20,160,"Indian States");
 outtextxy(20,230,"Indian Union Territories");
 outtextxy(20,300,"Suggestions");
 outtextxy(550,420,"Back");
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
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,150,"Indian States");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i++;
     goto a;
    }
    else if(i==1)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,220,"Indian Union Territories");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i++;
     goto a;
    }
    else if(i==2)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,290,"Suggestions");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(550,420,"Back");
     i++;
     goto a;
    }
    else if(i==3)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(550,410,"Back");
     i++;
     goto a;
    }
    else if(i==4)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,80,"About India");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i=0;
     goto a;
    }
   }
  if(ch1==72)
   {
    if(i==2)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,150,"Indian States");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i--;
     goto a;
    }
    else if(i==3)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,220,"Indian Union Territories");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i--;
     goto a;
    }
    else if(i==4)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,290,"Suggestions");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(550,420,"Back");
     i--;
     goto a;
    }
    else if(i==0)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,90,"About India");
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(550,410,"Back");
     i=4;
     goto a;
    }
    else if(i==1)
    {setcolor(6);
     setfillstyle(1,6);
     fillpoly(4,poly);
     setcolor(1);
     settextstyle(4,0,4);
     outtextxy(20,80,"About India");
     setcolor(14);
     settextstyle(4,0,2);
     outtextxy(20,160,"Indian States");
     outtextxy(20,230,"Indian Union Territories");
     outtextxy(20,300,"Suggestions");
     outtextxy(550,420,"Back");
     i--;
     goto a;
    }
   }
 }
 else if(ch==13)
      {
       if(i==0)
	{closegraph();
	 india();
	}
       else if(i==1)
	    {closegraph();
	     states();
	    }
       else if(i==2)
	    {closegraph();
	     ut();
	    }
       else if(i==3)
	    {closegraph();
	     sug();
	    }
       else closegraph();
      }
 else goto a;
}

void india()
{
 FILE *f1;
 int gd=DETECT,gm,i,j,k;
 char t[100];
 clrscr();
 f1=fopen("India","r");
 initgraph(&gd,&gm,"");
 setbkcolor(0);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(7,0,6);
 setcolor(14);
 outtextxy(85,50,"India In Brief...");
 fread(&g,sizeof(g),1,f1);
 k=0;
 for(i=0,j=0;g.intrd[i]!='\0';i++,j++)
  if(g.intrd[i]!='.')
   t[j]=g.intrd[i];
  else {
	t[j]=g.intrd[i];
	t[j+1]='\0';
	j=-1;
	gotoxy(2,10+k);
	printf(t);
	k++;
       }
 settextstyle(8,0,2);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(11);
 outtextxy(30,350,"Population :");
 fclose(f1);
 setcolor(14);
 outtextxy(180,350,g.pop);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"India Symbols");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"National Animal :");
 outtextxy(30,140,"National Bird :");
 outtextxy(30,180,"National Song :");
 outtextxy(30,220,"National Anthem :");
 outtextxy(30,260,"National Flower:");
 outtextxy(30,300,"National Sport :");
 outtextxy(30,340,"National Capital :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(280,100,g.nani);
 outtextxy(280,140,g.nbird);
 outtextxy(280,180,g.nsong);
 outtextxy(280,220,g.nanth);
 outtextxy(280,260,g.nflwr);
 outtextxy(280,300,g.nsport);
 outtextxy(280,340,g.ncap);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"India Politics");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Prime Minister :");
 outtextxy(30,140,"President :");
 outtextxy(30,180,"Official Language :");
 outtextxy(30,220,"Number of States:");
 outtextxy(30,260,"Number of U.T. :");
 outtextxy(30,300,"Major Political Parties :");
 outtextxy(30,340,"Major Metro Cities :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(280,100,g.pm);
 outtextxy(280,140,g.pr);
 outtextxy(280,180,g.olang);
 outtextxy(280,220,g.nos);
 outtextxy(280,260,g.nout);
 outtextxy(350,300,g.nopp);
 outtextxy(300,340,g.nomci);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"India Politics");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Major Metro Cities :");
 outtextxy(30,180,"City 1:");
 outtextxy(30,220,"City 2:");
 outtextxy(30,260,"City 3:");
 outtextxy(30,300,"City 4:");
 outtextxy(30,340,"City 5:");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(300,100,g.nomci);
 outtextxy(200,180,g.nomc[0]);
 outtextxy(200,220,g.nomc[1]);
 outtextxy(200,260,g.nomc[2]);
 outtextxy(200,300,g.nomc[3]);
 outtextxy(200,340,g.nomc[4]);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"India Politics");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Major Political Parties :");
 outtextxy(30,140,"Party 1 :");
 outtextxy(30,180,"Party 2 :");
 outtextxy(30,220,"Party 3:");
 outtextxy(30,260,"Party 4 :");
 outtextxy(30,300,"Party 5 :");
 outtextxy(30,340,"Party 6 :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(350,100,g.nopp);
 outtextxy(200,140,g.noppt[0]);
 outtextxy(200,180,g.noppt[1]);
 outtextxy(200,220,g.noppt[2]);
 outtextxy(200,260,g.noppt[3]);
 outtextxy(200,300,g.noppt[4]);
 outtextxy(200,340,g.noppt[5]);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"Indian Religion");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Major Religions :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(270,100,g.norln);
 outtextxy(100,140,g.norel[0]);
 outtextxy(100,180,g.norel[1]);
 outtextxy(100,220,g.norel[2]);
 outtextxy(100,260,g.norel[3]);
 outtextxy(100,300,g.norel[4]);
 outtextxy(100,340,g.norel[5]);
 outtextxy(100,360,"But above all of them, its 'HUMANITY'");
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(1);
 setcolor(4);
 rectangle(0,0,639,479);
 settextstyle(4,0,6);
 setcolor(14);
 outtextxy(150,20,"India Geography");
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Area :");
 outtextxy(30,140,"Major Rivers :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(170,100,g.area);
 outtextxy(230,140,g.nor);
 outtextxy(100,180,g.norivr[0]);
 outtextxy(100,220,g.norivr[1]);
 outtextxy(100,260,g.norivr[2]);
 outtextxy(100,300,g.norivr[3]);
 outtextxy(100,340,g.norivr[4]);
 outtextxy(400,180,g.norivr[5]);
 outtextxy(400,220,g.norivr[6]);
 outtextxy(400,260,g.norivr[7]);
 outtextxy(400,300,g.norivr[8]);
 outtextxy(200,410,"Press any key for back");
 getch();
 closegraph();
 custm();
}

void states()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k;
 int poly[]={240,200,240,300,635,300,635,200};
 int poly1[]={10,115,10,320,240,320,240,115};
 FILE *f1;
 char n[50],n1[50][50],ch,ch1;
 clrscr();
 initgraph(&gd,&gm,"");
 setcolor(4);
 setbkcolor(1);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,7);
 outtextxy(270,5,"States");
 settextstyle(3,0,1);
 outtextxy(70,450,"Press Down to move, Enter to select and Esc for back");
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
 {closegraph();
  call(n1[i],150);
  states();
 }
 else if(ch==27)
  {closegraph();
   custm();
  }
 else goto b;
}

void ut()
{
 int gd=DETECT,gm,p,q,j=0,i=0,k;
 int poly[]={60,340,60,430,635,430,635,340};
 int poly1[]={10,115,10,320,340,320,340,115};
 FILE *f2;
 char n[50],n1[50][50],ch,ch1;
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
 f2=fopen("UT","r");
 while(fread(&n,sizeof(n),1,f2)==1)
 {strcpy(n1[j],n);
  j++;
 }
 fclose(f2);
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
 {closegraph();
  call(n1[i],150);
  ut();
 }
 else if(ch==27)
  {closegraph();
   custm();
  }
 else goto b;
}

void sug()
{
 FILE *f1;
 f1=fopen("Customer","a");
 clrscr();
 textcolor(14);
 gotoxy(20,5);
 cprintf("Please Enter Your Suggestions/Complaints");
 gotoxy(5,9);
 cprintf("Comment : ");
 gotoxy(8,10);
 textcolor(15);
 gets(c.com);
 gotoxy(5,18);
 textcolor(14);
 cprintf("Name : ");
 gotoxy(8,19);
 gets(c.n);
 textcolor(15);
 gotoxy(23,24);
 cprintf("Thanks for your valuable comment!!!");
  fwrite(&c,sizeof(c),1,f1);
 fflush(stdin);
 fclose(f1);
 getch();
 custm();
}

void call(char *a,int p)
{
 FILE *f1;
 int gd=DETECT,gm;
 clrscr();
 f1=fopen(a,"r");
 initgraph(&gd,&gm,"");
 setbkcolor(6);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Capital :");
 outtextxy(30,140,"Chief Minister :");
 outtextxy(30,180,"Governor :");
 outtextxy(30,220,"Language :");
 outtextxy(30,260,"Population :");
 outtextxy(30,300,"Area :");
 outtextxy(30,340,"No. of District :");
 setcolor(14);
 fread(&x,sizeof(x),1,f1);
 fclose(f1);
 settextstyle(4,0,5);
 outtextxy(p,20,x.n);
 settextstyle(8,0,2);
 outtextxy(150,100,x.cn);
 outtextxy(250,140,x.cm);
 outtextxy(180,180,x.g);
 outtextxy(180,220,x.lang);
 outtextxy(210,260,x.pop);
 outtextxy(130,300,x.area);
 outtextxy(260,340,x.nod);
 outtextxy(200,410,"Press enter for more...");
 getch();
 closegraph();
 clrscr();
 initgraph(&gd,&gm,"");
 setbkcolor(6);
 setcolor(4);
 rectangle(0,0,639,479);
 setcolor(14);
 settextstyle(4,0,5);
 outtextxy(p,20,x.n);
 setcolor(11);
 settextstyle(7,0,3);
 outtextxy(30,100,"Famous Places :");
 outtextxy(30,200,"Famous Things :");
 setcolor(14);
 settextstyle(8,0,2);
 outtextxy(40,130,x.fs);
 outtextxy(40,230,x.ft);
 outtextxy(200,410,"Press any key...");
 getch();
 closegraph();
}