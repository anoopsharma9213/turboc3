#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 char str[50],str1[50],str2[50];
 clrscr();
/*  ofstream f3("New.txt");
 for(int i=0;i<2;i++)
 {gets(str);
  f3.write((char*)&str,sizeof(str));
 }*/
 ifstream f1("New.txt");
 ofstream f2("Copy.txt");
 while(f1.read((char*)&str,sizeof(str))!=NULL)
 {int k=0;
  for(int i=0;str[i]!='\0';i++)
  k++;
  int m=0,j=0;
   for(i=k-1;i>=0;i--)
   {
    if(i==0)
    {
     str1[j]=str[i];
     j++;
     str1[j]='\0';
     for(int l=j-1;l>=0;l--)
     {str2[m]=str1[l];
      m++;
     }
     j=0;
     str2[m]=' ';
     m++;
     str2[m]='\0';
    }
    if(str[i]!=' ')
    {str1[j]=str[i];
	  j++;
	 }
    else {
    str1[j]='\0';
     for(int l=j-1;l>=0;l--)
     {str2[m]=str1[l];
      m++;
     }
     j=0;
     str2[m]=' ';
     m++;
     str2[m]='\0';
    }
   }
  puts(str2);
 f2.write((char*)&str2,sizeof(str2));
 }
 getch();
}