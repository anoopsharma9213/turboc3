		 /*       C++    PROJECT


		  NAME  :  VINEET MISHRA
		  CLASS :  XII (F)
		  ROLLNO:  45
		  SCHOOL : ARMY PUBLIC SCHOOL DHAULAKUAN


	    PROJECT   QUESTION  :

	    Q: CREATE  A  CLASS  TELEPHONE  CONTAINING  THE  NAMES ,  ADDRESS
	       AND  TELEPHONE NO.S  .  CREATE  A  FILE  "DIECTORY.DAT"
	       CONTAINING  THE  INFORMATION  OF  CUSTOMERS  .  GIVE  THE
	       USER  THE  FOLLOWING  CHOICES  :

	      a).  TO  DISPLAY  THE  DIRERCTORY  IN  ALPHABETICAL  ORDER.
	      b).  TO  ADD  MORE  RECORDS  TO THE  FILE.
	      c).  TO  DELETE  A  RECORD  OF  A  PARTICULAR  CUSTOMER.
	      d).  TO  ACCESS  THE  INFORMATION  OF  A  CUSTOMER  THROUGH
		   HIS  NAME.
	      e).  TO  ACCESS  THE  INFORMATION  OF  A  CUSTOMER  THROUGH
		   HIS  TELEPHONE NO.
	      f).  TO  MODIFY  THE  ADDRESS  OF  A  PARTICULAR  CUSTOMER.
	      g).  TO  MODIFY  THE  TELEPHONE NO  OF  A  PARTICULAR  CUSTOMER.
	      h).  TO  DISPLAY  ALL  THE  RECORDS.
	      i).  TO  DISPLAY THE CUSTOMER HAVING HIGHEST SALARY.
------------------X------------------X-------------------------X----------------X */

 #include<fstream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<string.h>

 class telephone
 {
  char name[45];
 long teleno;
  char addr[80];
  float sal;

 public:

  void input()

  {
   cout<<"ENTER THE  NAME "<<"\n"<<"\t";
   gets(name);
   cout<<"ENTER THE ADDRESS"<<"\n"<<"\t";
   gets(addr);
   cout<<"ENTER THE TELEPHONE NO"<<"\n"<<"\t";
   cin>>teleno;
    cout<<"ENTER THE SALARY"<<"\n"<<"\t";
   cin>>sal;
  }
   void display()
   {

    cout<<"\n"<<"name :"<<"\t"<<"\t"<<name<<"\n"<<"address :"<<"\t"<<"\t"<<addr<<"\n"<<"tele no :"<<"\t"<<"\t"<<teleno<<"\n"<<"salary :"<<"\t"<<"\t"<<sal<<"\n";

   }
   void changeadd()
   {
    char a[80];
    cout<<"ENTER THE NEW ADDRESS"<<"\n"<<"\t";
     gets(a);
    strcpy(addr,a);

   }

   void changeno()
   {
   long f;
    cout<<"ENTER THE NEW NO"<<"\n"<<"\t";
    cin>>f;
    teleno=f;

   }

 char * returnadd()
 {
  return addr;
 }
  char * returnname()
  {
   return name;
  }
long returntele()
 {
  return teleno;
 }
 float returnsal()
 {
  return sal;
 }

};

 void main()

 {
 clrscr();
  telephone t;
  telephone x[5];
  telephone a;
  int no;

   /*ofstream f1("directory.dat",ios::binary);
  for( int i=0;i<5;i++)
  {
    t.input();
    f1.write((char *) &t,sizeof(t));
  }f1.close();*/

  cout<<endl;
  int n;
home:
{
 cout<<"************************************************************************"<<endl;
 cout<<"************************** TELEPHONE  DIRECTORY*************************"<<endl;
 cout<<"************************************************************************"<<endl;
  cout<<" 1: DISPLAY RECORDS IN  ALPHABETICAL  ORDER"<<"\n";
  cout<<" 2: ADD  MORE  RECORDS"<<"\n";
  cout<<" 3: DELETE A RECORD "<<"\n";
  cout<<" 4: ACCESS INFORMATION OF A CUSTOMER THROUGH NAME"<<"\n";
  cout<<" 5: ACCESS INFORMATION OF A CUSTOMER THROUGH TELEPHONE NO"<<"\n";
  cout<<" 6: MODIFY ADRESS OF A CUSTOMER"<<"\n";
  cout<<" 7: MODIFY TELEPHONE NO OF A CUSTOMER"<<"\n";
  cout<<" 8: DISPLAY ALL RECORDS"<<"\n";
  cout<<" 9: DISPLAY THE CUSTOMER HAVING HIGHEST SALARY"<<"\n";
  cout<<" 10:EXIT"<<"\n";

  cin>>n;
  switch(n)

  {

    case 1:
     clrscr();
     ifstream f2("directory.dat",ios::binary);
     int i=0;
     while (f2.read((char *) &x[i],sizeof(x[i])))
     i++ ;
     f2.close();
    int nu=i;

    for(i=0;i<=nu-2;i++)
     for(int j=i+1;j<=nu-1;j++)

      if(strcmp(x[i].returnname(),x[j].returnname()) >0 )

      {
	telephone t=x[i];
	x[i]=x[j];
	x[j]=t;
      }

     ofstream f3("directory.dat", ios::binary);
      for(i=0;i<=nu-1;i++)
      f3.write((char *) &x[i],sizeof(x[i]));
     f3.close();

      ifstream f4("directory.dat",ios::binary);
      while(f4.read((char *) &a,sizeof(a)))
       a.display();
      f4.close();
       getch();
       clrscr();
	goto home;

	break;




    case 2:

	  clrscr();
	 fstream f5("directory.dat",ios::binary|ios::app);
	  for(i=0;i<2;i++)
	  {
	   t.input();

	    f5.write((char *) &t,sizeof(t));

	  }f5.close();
	   getch();
	   clrscr();
	    goto home;
	   break;

     case 3:

	    clrscr();
     fstream f6("directory.dat",ios::binary|ios::in);
     fstream f7("temp.dat",ios::binary|ios::out);
       char b[26];
	cout<<"ENTER THE NAME OF THE CUSTOMER WHOSE RECORD IS TO BE DELETED"<<"\n"<<"\t"<<"\t";
	gets(b);
	  while (f6.read ((char *) &t,sizeof(t)))
	  if(strcmp(t.returnname(),b)!=0)
	  f7.write((char *) &t,sizeof(t));
	f6.close();
	 f7.close();
	 remove("directory.dat");
	 rename("temp.dat","directory.dat");
       getch();
       clrscr();
	goto home;
	break;


     case 4:

	  clrscr();
	ifstream f8("directory.dat",ios::binary);
	char nn[65];
	cout<<"ENTER THE NAME OF WHICH YOU WANT TO RETRIEVE INFORMATION"<<"\n"<<"\t"<<"\t";
	    gets(nn);
	 while(f8.read((char *) &t,sizeof(t)))
	 {
	  if(strcmp(t.returnname(),nn)==0)
	   t.display();
	 }f8.close();
	 getch();
	 clrscr();
	     goto home;
	 break;


      case 5:

	   clrscr();
     ifstream f9("directory.dat",ios::binary);
    long  x;
	cout<<"ENTER THE TELEPHONE NO FROM  WHICH YOU WANT TO RETRIEVE INFORMATION"<<"\n"<<"\t"<<"\t";
	cin>>x;
	   while(f9.read((char *) &t,sizeof(t)))

	 {
	   if(t.returntele()==x)
	    t.display();

	  } f9.close();

       getch();
       clrscr();
	     goto home;
	  break;


      case 6:

	   clrscr();
	fstream f10("directory.dat",ios::binary|ios::in|ios::out);
	 char s[50];
	 int c=0;
	cout<<"ENTER THE NAME OF THE CUSTOMER WHOSE ADDRESS IS TO BE MODIFIED"<<"\n"<<"\t"<<"\t";
	gets(s);
	 while(f10.read((char *) &t,sizeof(t)))

	 {

	  if(strcmp(t.returnname(),s)==0)
	  {
	   t.changeadd();
	    f10.seekg(c*sizeof(t));
	 f10.write((char *) &t,sizeof(t));
	  }
	c++;
       }f10.close();
	 getch();
	 clrscr();
	  goto home;
	break;


   case 7:
	    clrscr();
   fstream f11("directory.dat",ios::binary|ios::in|ios::out);
	 char u[50];
	  c=0;
	cout<<"ENTER THE NAME OF THE CUSTOMER WHOSE TELEPHONE NO IS TO BE MODIFIED"<<"\n"<<"\t"<<"\t";
	gets(u);
	 while(f11.read((char *) &t,sizeof(t)))

	 {

	  if(strcmp(t.returnname(),u)==0)
	  {
	     t.changeno();
	    f11.seekg(c*sizeof(t));
	   f11.write((char *) &t,sizeof(t));
	  }
	  c++;

	} f11.close();
	getch();
	clrscr();
	  goto home;
	break;


    case 8:
	    clrscr();
      ifstream f12("directory.dat",ios::binary);
      cout<<"THE RECORDS ARE"<<"\n"<<"\t"<<"\t";
      while(f12.read((char *) &t,sizeof(t)))
	t.display();
       f12.close();

	 getch();
	 clrscr();
	 goto home;
	break;

     case 9:
	   clrscr();
      ifstream f13("directory.dat",ios::binary);
     int high=0;
      telephone max;
	while(f13.read((char *) &t,sizeof(t)))
	{
	 if(high<t.returnsal())
	 {
	   high=t.returnsal();
	   max=t;
	 }

       }
	max.display();
       f13.close();

	 getch();
	 clrscr();
	  goto home;
	    break;


    case 10:
	   getch();
}
    getch();

   }
 }


