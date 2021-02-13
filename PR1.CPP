//WAP to input a 5*5 array of integers. Give the user the choice to:
//a.exchange the elements of the 2nd row with those of the 4th row.
//b.initialize the diagonal elements to -5.
//c.print the table with row totals.
#include<iostream.h>
#include<conio.h>
main()
{clrscr();
int a[5][5],b[5][5],i,j;
char ch,ch1;
cout<<"Input the array"<<endl;
	 for(i=0;i<5;i++)
	 {for(j=0;j<5;j++)
	 cin>>a[i][j];
	 }
	 for(i=0;i<5;i++)
	 {for(j=0;j<5;j++)
	 b[i][j]=a[i][j];
	 }
	 do
	 {
	 cout<<"Input"<<endl<<" a-exchanging 2nd row elements with 4th row elements"<<endl<<
			      " b-initializing the diagonal elements to -5 "<<endl<<
			      " c-print the table with row totals "<<endl;
	 cin>>ch;

	 if(ch=='a'||ch=='A')
	 {for(j=0;j<5;j++)
	 {a[1][j]=a[3][j];
	  a[3][j]=b[1][j];
	 }
	 for(i=0;i<5;i++)
	 {for(j=0;j<5;j++)
	  cout<<a[i][j]<<" ";
	  cout<<endl;
	 }
	 }

	 if(ch=='b'||ch=='B')
	 {for(i=0;i<5;i++)
	 for(j=0;j<5;j++)
	 if(i==j)
	 {a[i][j]=-5;
	 }
	 for(i=0;i<5;i++)
	 {for(j=0;j<5;j++)
	 cout<<a[i][j]<<" ";
	 cout<<endl;
	 }
	 }


	 if(ch=='c'||ch=='C')
	 for(i=0;i<5;i++)
	 {
	 int s=0;
	 for (j=0;j<5;j++)
	 {s=s+a[i][j];
	 cout<<a[i][j]<<" ";
	 }
	 cout<<"-"<<s;
	 cout<<endl;
	 }
	 cout<<"Do you want to continue ?"<<endl;
	 cin>>ch1;
	 }while(ch1=='y'||ch1=='Y');

	 getch();
	 }