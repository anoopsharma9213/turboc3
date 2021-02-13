# include<iostream.h>
# include<conio.h>
# include<graphics.h>
# include<dos.h>
void game3()
{char c,o;
int gd,gm;

gd=DETECT;
initgraph(&gd,&gm,"");

setcolor(1);
for(int i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

//lines
setcolor(4);
settextstyle(14,0,1);
outtextxy(10,40,"___________________________________________________________________________");
settextstyle(14,0,1);
outtextxy(0,100,"_____________________________________________");
outtextxy(0,140,"__________________");

//text
setcolor(2);
settextstyle(10,0,2);
outtextxy(10,0,"WELCOME TO THE ASTRONOMY QUIZ.");
settextstyle(7,0,2);
outtextxy(0,80,"CHOOSE ANY OF THE FOLLOWING ");
outtextxy(0,120,"CATEGORIES:-");
settextstyle(8,0,1);
outtextxy(0,180,"*-->PRESS 'P' FOR PLAYING QUIZ.");
outtextxy(0,220,"*-->PRESS 'X' TO EXIT.");

c=getch();

if(c=='p'||c=='P')
{
closegraph();
initgraph(&gd,&gm,"");

setcolor(1);
for(int i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

//lines
setcolor(4);
settextstyle(8,0,1);
outtextxy(0,20,"________________________________________");

//text
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,0,"YOU CHOOSED TO PLAY QUIZ:-");
//ques.1

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
outtextxy(0,180,"'PLANET' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"'COMET' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"'ASTEROID' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'DWARF PLANET' IS CORRECT ANSWER ");
delay(2000);
closegraph();}    //ques.1 ends


//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"'VENUS' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"'MERCURY' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"'EARTH' IS A WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'MARS' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends


//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='D'||o=='d')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'BLACK HOLE' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'CHARON' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends


//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'EIGHT' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'EAST TO WEST' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='D'||o=='d')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'GANYMEDE' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
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
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'6000' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.9>PLANET HAVING RELATIVE LARGE CORE?");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>PLUTO");
outtextxy(0,220,"B.>JUPITOR");
outtextxy(0,260,"C.>VENUS");
outtextxy(0,300,"D.>SATURN");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'PLUTO' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends


       //ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(8,0,1);

outtextxy(0,80,"QUES.10>PLANET FOUND IN KEUPER BELT?");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>2006-UB-313");
outtextxy(0,220,"B.>PLUTO");
outtextxy(0,260,"C.>2003-UB-313");
outtextxy(0,300,"D.>NONE OF THE ABOVE");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'2003-UB-313' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends


//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.11>WHAT TYPE OF RADIO WAVES DOES ");
outtextxy(0,100,"NEUTRON STAR EMITS?");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>PULSAR");
outtextxy(0,220,"B.>GAMMA RAYS");
outtextxy(0,260,"C.>QUASARS");
outtextxy(0,300,"D.>NONE OF THE ABOVE");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='A'||o=='a')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'PULSAR' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends


//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(8,0,1);

outtextxy(0,80,"QUES.12>WHAT HAPPENS TO THE STAR HAVING");
outtextxy(0,100,"MASS GREATER THAN 'CHANDRE SHEKHAR LIMIT'");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>NEUTRON STAR");
outtextxy(0,220,"B.>BLACK HOLE");
outtextxy(0,260,"C.>WHITE DWARF");
outtextxy(0,300,"D.>NONE OF THE ABOVE");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'BLACK HOLE' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(10,0,2);
outtextxy(0,80,"QUES.13>NEAREST GALAXY TO OUR GALAXY?");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>RHEA GALAXY");
outtextxy(0,220,"B.>OBERON-1978-091");
outtextxy(0,260,"C.>ANDROMEDA GALAXY");
outtextxy(0,300,"D.>JANUS GALAXY");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='b'||o=='B')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='C'||o=='c')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'ANDROMEDA' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

//ques.2
initgraph(&gd,&gm,"");

setcolor(1);
for(i=1;i<450;i++)
{circle(300,250,i);
delay(20);}

setcolor(2);
settextstyle(8,0,1);
outtextxy(0,80,"QUES.14>WHO WAS THE 1ST HUMAN SATTELITE?");


outtextxy(0,140,"OPTIONS ARE:-");
outtextxy(0,180,"A.>RESNICK HALLIDAY");
outtextxy(0,220,"B.>MEC CANDLESS");
outtextxy(0,260,"C.>RAKESH SHARMA");
outtextxy(0,300,"D.>NEIL ARMSTRONG");
outtextxy(0,400,"TO SKIP THE QUESTION PRESS ANY OTHER KEY");

o=getch();

if(o=='d'||o=='D')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='c'||o=='C')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='a'||o=='A')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(4);
settextstyle(10,0,1);
outtextxy(0,180,"WRONG ANSWER");
delay(2000);
closegraph();}

else if(o=='B'||o=='b')
{closegraph();
initgraph(&gd,&gm,"");
setcolor(2);
settextstyle(10,0,1);
outtextxy(0,180,"'ANDROMEDA' IS CORRECT ANSWER ");
delay(2000);
closegraph();}  //ques.2 ends

}




else if(c=='x'||c=='X')
{closegraph();
initgraph(&gd,&gm,"");

setcolor(4);
settextstyle(10,0,1);
outtextxy(120,120,"YOU CHOOSED TO QUIT.");
settextstyle(11,0,1);
outtextxy(120,160,"_________________________________________");
}

else
{setcolor(4);
settextstyle(7,0,1);
outtextxy(30,300,"YOUR CHOICE IS INVALID.");
outtextxy(30,340,"ENTER CORRECT CHOICE.");
outtextxy(30,380,"TRY NEXT TIME.");}


getch();}
