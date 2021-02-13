#include<iostream.h>
#include<conio.h>
#include<process.h>
int sumeven(int x[5][5])
{int i,j,s=0;
  for(i=0;i<5;i++)
  for(j=0;j<5;j++)
  {if(i%2==0)
  s=s+x[i][j];}
    return s;
    }


  void change(int x[5][5])
  {int i,j,k,t;
  cout<<"Enter i and j"<<'\n';
  cin>>i>>j;
  for(k=0;k<5;k++)
  {t=x[i][k];
  x[i][k]=x[j][k];
  x[j][k]=t;}}


void main()
{clrscr();
  int a[5][5],i,j,ch,sum,sr[5],sc[5];
  char ch1;
  cout<<"Please enter a 5X5 double dimension array"<<'\n';
  for(i=0;i<5;i++)
  for(j=0;j<5;j++)
  cin>>a[i][j];
  clrscr();
  do
  {cout<<"Your array:"<<endl;
  for(i=0;i<5; i++)
  {for(j=0;j<5;j++)
  cout<<a[i][j]<<"   ";
  cout<<endl;}
  cout<<'\t'<<"Please enter your choice"<<endl;
  cout<<'\t'<<"1. Sum of all elements with even subscripts"<<'\n';
  cout<<'\t'<<"2. Interchangethe elements of the ith row and jth row"<<'\n';
  cout<<'\t'<<"3. Print the array in tabular form with column and row totals"<<'\n';
  cout<<'\t'<<"4. Exit"<<'\n';

  cin>>ch;
  clrscr();
  if(ch==4)
  exit(0);
  else if(ch==1)
  {sum=sumeven(a);
   cout<<sum;
    getch(); }
  else if(ch==2)
  {change(a);
   for(i=0;i<5;i++)
   {for(j=0;j<5;j++)
    cout<<a[i][j]<<"   ";
    cout<<endl;}
     getch(); }
     else if(ch==3)
     {clrscr();
     for (i=0;i<5;i++)
      {sr[i]=0;
      sc[i]=0;
      for(j=0;j<5;j++)
      {sr[i]=sr[i]+a[i][j];
      sc[i]=sc[i]+a[j][i];
      cout<<a[i][j]<<"   ";

      } cout<<sr[i]<<endl;
      }
      for(i=0;i<5;i++)
      cout<<sc[i]<<"   ";
      getch();}
      clrscr();
      cout<<"Do you want to continue???";
      cin>>ch1;}
      while(ch1=='Y'||ch1=='y');
      if(ch1=='n'||ch1=='N')
      exit(0);
      getch();}