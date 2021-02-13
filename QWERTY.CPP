#include<iostream.h>
#include<conio.h>

  void main()
{clrscr();
int a[5][5],i,j,s
   for(i=0;i<=4;i++)
  {
      for(j=0;j<=4;j++)
    {
      cout<<"      ";
      cin>>a[i][j];
		   }
      cout<<endl;
		    }
	cout<<"  \n\n\n\n\n\n\n\n\n ";
	    for(i=0;i<=4;i+=2)
	     {  s=0;
	       for(j=0;j<=4;j++)
		  s+=a[i][j];
		    cout<<s;
			     }
	 cout<,"\n\n\n\n\n\n\n\n\\n";

	 for(i=0;i<=4;i++)
      {
	  s=0;

	   for(j=0;j<=4;j++)
	    {  cin>>a[i][j];
	       s+=a[i][j];
	       s[i]=a[i][j];

	     }

		cout<<s<<"\n";
	     }

	   for(i=0;i<=4;i++)
	      cout<<s[i];

      // next

















      getch();
      }