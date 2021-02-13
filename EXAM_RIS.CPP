// print the column totals
//print the smallest no in array
//print table after preplacing all the no by their squares

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<graphics.h>


void main()
{clrscr();
{int a[3][4],i,j,small=0,s=0,ch=0,p=1;
     for(i=0;i<3;i++)
     for(j=0;j<4;j++)
     cin>>a[i][j];
     clrscr();
     textbackground(BLUE);
      for(i=0;i<3;i++)
     { for(j=0;j<4;j++)
      cout<<a[i][j]<<"\t";
      cout<<endl<<endl<<endl;}
     cout<<"\t\t\t\t\t Menu \t\t\t\t"<<endl<<endl;
     cout<<"\ press 1 to print the table with column totals"<<endl<<endl;
     cout<<"\ to print the smallest no in array"<<endl<<endl;
     cout<<"\ to print table after preplacing all the no by their squares"<<endl<<endl;
     cin>>ch;
     clrscr();
     if(ch==1);
      { for(i=0;i<3;i++)
      { for(j=0;j<4;j++)
	 s=s+a[i][j];
	  cout<<"*the column total="<<s<<endl;
	cout<<endl<<endl<<endl;
	}    }

    if (ch==2);
    { for(i=0;i<3;i++)
    { for(j=0;j<4;j++)
     if(small>a[i][j]);
     small=a[i][j];}
     cout<<"*the smallest no in array is="<<small<<endl;
     cout<<endl<<endl<<endl;
      }

     if (ch==3);
     for(i=0;i<3;i++)
    { for(j=0;j<4;j++)
      cout<<a[i][j]*a[i][j]<<"\t";
      cout<<endl<<endl<<endl;
      }
      getch();}

      }


