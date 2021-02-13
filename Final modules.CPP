
 /*
  *  TicTacToe 1.2
  *  Programmer: David Ewens
  *  This program is free.
  *  Compils on Boarland Turbo C++ 1.01.
  *  17/06/04 12:22
  */

#include <iostream.h>
#include <stdlib.h>
#include <time.h>
int k,k2,j,ch,b,i,g,r=2,max=8;
int i1,i2,i3,i4,i5,i6,i7,i8,i9;
int loop=0, win, lose, draw, temp;
void get_random();
void get_chkran();
void get_screen();
void get_checkv();
void start_game();
void level();
void chose();
void seechose();
void help();
void get_key();
void match();

main()
{
  seechose();
  chose();
}

void match(){
  loop=0; win=0; lose=0;
  cout << "Number of games in the match:";
  cin >> loop;
  while(loop!=0){
    start_game();
    // system("cls");
    cout << "\nMatch Status\n"
         << "Wins:" << win << "\n"
         << "Loses:" << lose << "\n"
         << "Draws:" << draw << "\n\n";

    if(loop==0){
      cout << "Match done!\n";
      if(win>lose){
        cout << "You Won!\n";
      }
      if(lose>win){
        cout << "You Lost!\n";
      }
      if(lose==win){
        cout << "It's a draw!";
      }
      exit(1);
    }
    cout << "Rounds to go:" << loop << "\n"
         << "\nContinue(y/n)?";
    char yn;
    cin >> yn;
    if(yn=='n' || yn=='N'){
      exit(1);
    }
    k=k2=j=ch=b=i=g=0;
    i1=i2=i3=i4=i5=i6=i7=i8=i9=0;
    max=8;
  }
}

void seechose()
{
  system("cls");
  cout << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n"
       << "³ TIC TAC TOE   ³\n"
       << "³ 1. Start      ³\n"
       << "³ 2. Help       ³\n"
       << "³ 3. Level      ³\n"
       << "³ 4. Match      ³\n"
       << "³ 5. Quit       ³\n"
       << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n"
       << "Command: ";
}

void chose() // Reads in your chose
{
  cin >> b;
  if(b==1){start_game();}
  if(b==2){help();}
  if(b==3){level(); seechose();}
  if(b==4){match();}
  if(b==5){exit(1);}
  if(b!=1 && b!=2){chose();}
}

void start_game() // Starts the game
{
     system("cls");
     temp=loop;
     while(1){
	   if(r==3 && i1==0 && i2==0 && i3==0 && i4==0 && // If level==hard
          i5==0 && i6==0 && i7==0 && i8==0 && i9==0){ // and first move
          i5=1;
       }
       else{ 
	     get_random();
       }
	   get_screen();
	   get_checkv();
	   if(temp==(loop+1)){
         return;
       }
	   get_key();
	   system("cls");
	  }
     exit(1);
}
void get_random() // Gets random number for J
{
	srand( (unsigned)time( NULL ) );
	j = rand() % max;
        if(r==2 || r==3){
          if(i2==2 && i5==2 && i8==0){j=7;}
          if(i1==2 && i4==2 && i7==0){j=6;}
          if(i3==2 && i6==2 && i9==0){j=8;}
          if(i5==2 && i8==2 && i2==0){j=1;}
          if(i4==2 && i7==2 && i1==0){j=0;}
          if(i6==2 && i9==2 && i3==0){j=2;}
          if(i1==2 && i5==2 && i9==0){j=8;}
          if(i5==2 && i9==2 && i1==0){j=0;}
          if(i3==2 && i5==2 && i7==0){j=6;}
          if(i7==2 && i5==2 && i3==0){j=2;}
          if(i1==2 && i2==2 && i3==0){j=2;}
          if(i3==2 && i2==2 && i1==0){j=0;}
          if(i4==2 && i5==2 && i6==0){j=5;}
          if(i6==2 && i5==2 && i4==0){j=3;}
          if(i7==2 && i8==2 && i9==0){j=8;}
          if(i9==2 && i8==2 && i7==0){j=6;}
          if(r==3){
            if(i1==2 && i3==2 && i2==0){j=1;}
            if(i7==2 && i9==2 && i8==0){j=7;}
            if(i1==2 && i7==2 && i4==0){j=3;}
            if(i3==2 && i9==2 && i6==0){j=5;}
          }
		}
	get_chkran();
}

void get_chkran() // Computer's Move...
{
	if(j==0){if(i1!=0){++j;}if(i1==0){i1=1;}}
	if(j==1){if(i2!=0){++j;}if(i2==0){i2=1;}}
	if(j==2){if(i3!=0){++j;}if(i3==0){i3=1;}}
	if(j==3){if(i4!=0){++j;}if(i4==0){i4=1;}}
	if(j==4){if(i5!=0){++j;}if(i5==0){i5=1;}}
	if(j==5){if(i6!=0){++j;}if(i6==0){i6=1;}}
	if(j==6){if(i7!=0){++j;}if(i7==0){i7=1;}}
	if(j==7){if(i8!=0){++j;}if(i8==0){i8=1;}}
	if(j==8){if(i9!=0){++j;}if(i9==0){i9=1;}}
	if(j==9){ j=0; get_chkran();}
}

void get_screen() // Prints the screen
{
 cout << " Ä Ä Ä\n";
 if(i1==0){cout << "³ ";}
 if(i1==1){cout << "³X";}
 if(i1==2){cout << "³O";}
 if(i2==0){cout << "³ ³";}
 if(i2==1){cout << "³X³";}
 if(i2==2){cout << "³O³";}
 if(i3==0){cout << " ³";}
 if(i3==1){cout << "X³";}
 if(i3==2){cout << "O³";}
 cout << "\n Ä Ä Ä\n";
 if(i4==0){cout << "³ ";}
 if(i4==1){cout << "³X";}
 if(i4==2){cout << "³O";}
 if(i5==0){cout << "³ ³";}
 if(i5==1){cout << "³X³";}
 if(i5==2){cout << "³O³";}
 if(i6==0){cout << " ³";}
 if(i6==1){cout << "X³";}
 if(i6==2){cout << "O³";}
 cout << "\n Ä Ä Ä\n";
 if(i7==0){cout << "³ ";}
 if(i7==1){cout << "³X";}
 if(i7==2){cout << "³O";}
 if(i8==0){cout << "³ ³";}
 if(i8==1){cout << "³X³";}
 if(i8==2){cout << "³O³";}
 if(i9==0){cout << " ³";}
 if(i9==1){cout << "X³";}
 if(i9==2){cout << "O³";}
 cout << "\n Ä Ä Ä\n";
}

void get_key() // Reads your chose
{
  cin >> ch;
  if(ch==0){exit(1);}
  if(ch==1){if(i1==0){i1=2;}}
  if(ch==2){if(i2==0){i2=2;}}
  if(ch==3){if(i3==0){i3=2;}}
  if(ch==4){if(i4==0){i4=2;}}
  if(ch==5){if(i5==0){i5=2;}}
  if(ch==6){if(i6==0){i6=2;}}
  if(ch==7){if(i7==0){i7=2;}}
  if(ch==8){if(i8==0){i8=2;}}
  if(ch==9){if(i9==0){i9=2;}}
}

void get_checkv() // Checks if anybody have won
{
 if(i1==1 && i2==1 && i3==1){++i;}
 if(i4==1 && i5==1 && i6==1){++i;}
 if(i7==1 && i8==1 && i9==1){++i;}
 if(i1==1 && i4==1 && i7==1){++i;}
 if(i2==1 && i5==1 && i8==1){++i;}
 if(i3==1 && i6==1 && i9==1){++i;}
 if(i3==1 && i5==1 && i7==1){++i;}
 if(i1==1 && i5==1 && i9==1){++i;}

 if(i1==2 && i2==2 && i3==2){++g;}
 if(i4==2 && i5==2 && i6==2){++g;}
 if(i7==2 && i8==2 && i9==2){++g;}
 if(i1==2 && i4==2 && i7==2){++g;}
 if(i2==2 && i5==2 && i8==2){++g;}
 if(i3==2 && i6==2 && i9==2){++g;}
 if(i3==2 && i5==2 && i7==2){++g;}
 if(i1==2 && i5==2 && i9==2){++g;}

 if(g==1){
  system("cls");
  get_screen();
  cout << "\nYou won!\n";
  ++win;
  if(loop==0){
    exit(1);
  }
  
  else{--loop; return;}
 }
 if(i==1){
  system("cls");
  get_screen();
  cout << "\nThe Computer Won!\n";
  ++lose;
  if(loop==0){
    exit(1);
  } 
  else{--loop; return;}
 }
 if(i1!=0 && i2!=0 && i3!=0 && i4!=0 && i5!=0 && i6!=0 && i7!=0 && i8!=0 && i9!=0)
 {
  system("cls");
  get_screen();
  cout << "\nDraw!\n";
  ++draw;
  if(loop==0){
    exit(1);
  } 
  else{--loop; return;}
 }
}

void help() // Shows help
{
 system("cls");
 cout << "Tic Tac Toe - By: David Ewens\n"
      << "-----------------------------\n"
      << "The tabel looks like this.\n\n"
      << "123\n"
      << "456\n"
      << "789\n\n"
      << "You use 1-9 to sett your circles. 0 to quit.\n\n"
      << "1. Start\n"
      << "2. Help\n"
      << "3. Level\n"
      << "4. Match\n"
      << "5. Quit\n";
 chose();
}

void level()
{
  system("cls");
  cout << "Difeclty level\n"
       << "1. Easy\n"
       << "2. Normal\n"
       << "3. Hard\n";
  cin >> r;
}





