#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<string.h>

struct user{
	    char n[25],pass[12];
	   }x;


void main()
{
 FILE *f1;
 strcpy(x.n,"Sharda");
 strcpy(x.pass,"Sharda");
 for(int i=0;x.pass[i]!='\0';i++)
  x.pass[i]+=15;
 f1=fopen("Main","w");
 fwrite(&x,sizeof(x),1,f1);
 fclose(f1);
}