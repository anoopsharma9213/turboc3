/* Q: create a file of donors containing the donor name age, sex,blood group,addressand
      telephone no
      give user the following choices:
  a) to display the list in alphabetical order.
  b) to input any blood group and display the donor of that group.
  c) to add a record.
*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class donor
{
char dname[25];
int age;
char sex[5];
char b[4];
char add[30];
long teleno;
public:
char *returnb()
{
 return b;
}
char *returndname()
{
 return dname;
}
 void input()
 {
  cout<<"enter the donors name"<<"\n";
   gets(dname);
   cout<<"enter the age"<<"\n";
   cin>>age;
   cout<<"enter the sex"<<"\n";
   gets(sex);
  cout<<"enter the blood group"<<"\n";
  gets(b);
  cout<<"enter the address"<<"\n";
  gets(add);
  cout<<"enter the telephone no"<<"\n";
  cin>>teleno;
 }
 void display()
 {
 cout<<"the name of donor is"<<dname<<"\n";
 cout<<"the age is "<<age<<"\n";
 cout<<"the sex is"<<sex<<"\n";
 cout<<"the blood group is"<<b<<"\n";
 cout<<"the address is "<<add<<"\n";
 cout<<"the telephone no is"<<teleno<<"\n";
 }
};
void main()
{
 clrscr();
 donor a;
 donor x[5];
 int n;
 /* ofstream f1("donor.dat",ios::binary);
 for(int i=0;i<5;i++)
 {
  a.input();
  f1.write((char *) &a,sizeof(a));
 }f1.close();*/
 home:
 {
 cout<<"menu"<<"\n";
 cout<<"1: albhabetical sort"<<"\n";
 cout<<"2: get info through donor group"<<"\n";
 cout<<"3: add more records"<<"\n";
 cout<<"4: exit"<<"\n";
 cin>>n;
 switch(n)
 {

 case 1:

 ifstream f2("donor.dat",ios::binary);
     int i=0;
     while (f2.read((char *) &x[i],sizeof(x[i])))
     i++ ;
     f2.close();
    int nu=i;

    for(i=0;i<=nu-2;i++)
     for(int j=i+1;j<=nu-1;j++)

      if(strcmp(x[i].returndname(),x[j].returndname()) >0 )

      {
	donor t=x[i];
	x[i]=x[j];
	x[j]=t;
      }

     ofstream f3("donor.dat", ios::binary);
      for(i=0;i<=nu-1;i++)
      f3.write((char *) &x[i],sizeof(x[i]));
     f3.close();

      ifstream f4("donor.dat",ios::binary);
      while(f4.read((char *) &a,sizeof(a)))
       a.display();
      f4.close();
      goto home;
      break;

      case 2:

	  clrscr();
	ifstream f5("donor.dat",ios::binary);
	char nn[65];
	cout<<"enter the blood group"<<"\n"<<"\t"<<"\t";
	gets(nn);
	 while(f5.read((char *) &a,sizeof(a)))
	 {
	  if(strcmp(a.returnb(),nn)==0)
	   a.display();
	 }f5.close();
	 getch();
	 clrscr();
	     goto home;
	 break;

	 case 3:


	  clrscr();
	 fstream f6("donor.dat",ios::binary|ios::app);
	  for(i=0;i<2;i++)
	  {
	   a.input();

	    f6.write((char *) &a,sizeof(a));

	  }f6.close();
	   getch();
	   clrscr();
	    goto home;
	   break;

     case 4:
     getch();

     }
    }
   }


/*output:

menu
1: albhabetical sort
2: get info through donor group
3: add more records
4: exit


menu
1: albhabetical sort
2: get info through donor group
3: add more records
4: exit

1

the name of donor isashish
the age is 23
the sex ism
the blood group iso
the address is bihar
the telephone no is99542
the name of donor isshreya
the age is 18
the sex isf
the blood group isa
the address is mahipalpur
the telephone no is99543
the name of donor issid
the age is 25
the sex ism
the blood group isb
the address is bihar
the telephone no is99544
the name of donor issujoy
the age is 35
the sex ism
the blood group iso
the address is delhi
the telephone no is99545
the name of donor isvineet
the age is 15
the sex ism
the blood group isab
the address is naraina
the telephone no is99541

menu
1: albhabetical sort
2: get info through donor group
3: add more records
4: exit

enter the blood group
		o
the name of donor isashish
the age is 23
the sex ism
the blood group iso
the address is bihar
the telephone no is99542
the name of donor issujoy
the age is 35
the sex ism
the blood group iso
the address is delhi
the telephone no is99545*/




















































































































