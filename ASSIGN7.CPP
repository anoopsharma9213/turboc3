#include<iostream.h>
#include<conio.h>
#include<assert.h>


int main()
{
 clrscr();
 for(int i=1;i<4;i++)
  for(int j=1;j<4;j++)
   if(i<j)
   {cout<<j;assert(i!=j);
    }
 getch();
 return 0;
}