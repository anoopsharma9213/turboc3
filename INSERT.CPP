#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>

void main()
{
 int pr[10]={0,1,2};
 int pc[10]={0,1,2};
   ofstream f1("Password.txt");
  for(int i=0;i<3;i++)
  {f1<<pr[i];
   f1<<'\n';
  }
  for(i=0;i<3;i++)
  {f1<<pc[i];
   f1<<'\n';
  }
  f1.close();
}