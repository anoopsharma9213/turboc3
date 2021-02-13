#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  clrscr();
  char country[10][20],city[10][20],x[10];
  int i;
  cout<<"Enter the country and city"<<endl;
  for(i=0;i<2;i++)
  {gets(country[i]);
  gets(city[i]);
  }
  cout<<"Enter the country"<<endl;
  gets(x);
  for(i=0;i<2;i++)
  {if( strcmp(x,country[i])==0)

  puts(city[i]);
  }
  getch();
  }