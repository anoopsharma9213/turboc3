#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{   clrscr();
    int m[5][5],s=0;
    for(int i=0;i<5;i++)
     for(int j=0;j<5;j++)
       {cin>>m[i][j];
	if(i==j || i+j==4)
	 s=s+m[i][j];
	 }
     for( i=0;i<5;i++)
      {
       for(int j=0;j<5;j++)
       cout<<m[i][j]<<'\t';
       cout<<endl;
       }


       cout<<s;

       }