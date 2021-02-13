/*write a program in c++ to create a file containing roll no ,name and
marks of students .read the file and
    1.print the data with average marks and grade
    2.search for the name of the student &print the data.*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
class student {
		 int roll;
		 char name[35];
		 int m1,m2,m3;
	 public:void display();
		void input();
		void calc()
		{
		 float avg;
		 avg=(m1+m2+m3)/3;
		 cout<<"the average marks obtained by the student is:-"<<avg<<endl;

		 if(avg>90)
		  cout<<"grade:-A"<<endl;
		  else if(avg>80&&avg<90)
		  cout<<"grade:-B"<<endl;
		  else if(avg>70&&avg<80)
		   cout<<"grade:-C"<<endl;
		   else
		     cout<<"abysmal performance"<<endl;
		 }
		char* rets()
		 {
		  return name;
		 }
	       };
void main()
 {
    clrscr();
    ofstream f1("student",ios::binary);
    student x;
    int i;
    int avg;
    cout<<"enter any three entries"<<endl;
    for(i=0;i<3;i++)
     {
       x.input();
       f1.write((char*)&x,sizeof(x));
     }
    f1.close();
   ifstream f2("student",ios::binary);
   while(f2.read((char*)&x,sizeof(x)))
    {
      x.display();
      x.calc();
      cout<<"****************************************"<<endl;

    }
    f2.close();
    char nam[35];
    cout<<"enter the name of the student you want to search:-"<<endl;
    gets(nam);
    cout<<"**************************************************"<<endl;
    ifstream f3("student",ios::binary);
    while(f3.read((char*)&x,sizeof(x)))
     {
       if(strcmp(nam,x.rets())==0)
	{
	 x.display();
	 x.calc();
	 }
     }
    f3.close();
    getch();
  }
  void student::input()
   {
     cout<<"name of the student:-"<<endl;
     gets(name);
     cout<<"roll no of the student:-"<<endl;
     cin>>roll;
     cout<<"marks in first subject:-"<<endl;
     cin>>m1;
     cout<<"marks in second subject:-"<<endl;
     cin>>m2;
     cout<<"marks in third subject:-"<<endl;
     cin>>m3;
     cout<<"***********************************"<<endl;
   }
  void student::display()
   {
    cout<<"name of the student:-"<<name<<endl;
    cout<<"roll no of the student:-"<<roll<<endl;
    cout<<"marks in the subject:-"<<m1<<endl;
    cout<<"marks in first subject:-"<<m2<<endl;
    cout<<"marks in second subject:-"<<m3<<endl;
   }



                                           output


enter any three entries
name of the student:-
shriya
roll no of the student:-
12
marks in first subject:-
100
marks in second subject:-
98
marks in third subject:-
97
***********************************
name of the student:-
shruti
roll no of the student:-
23
marks in first subject:-
67
marks in second subject:-
56
marks in third subject:-
45
***********************************
name of the student:-
ram
roll no of the student:-
14
marks in first subject:-
89
marks in second subject:-
56
marks in third subject:-
89
97
***********************************
name of the student:-
shruti
roll no of the student:-
23
marks in first subject:-
67
marks in second subject:-
56
marks in third subject:-
45
***********************************
name of the student:-
ram
roll no of the student:-
14
marks in first subject:-
89
marks in second subject:-
56
marks in third subject:-
89
***********************************
name of the student:-shriya
roll no of the student:-12
marks in the subject:-100
marks in first subject:-98
marks in second subject:-97
the average marks obtained by the student is:-98
grade:-A
****************************************
name of the student:-shruti
roll no of the student:-23
marks in the subject:-67
marks in first subject:-56
marks in second subject:-45
the average marks obtained by the student is:-56
abysmal performance
****************************************
name of the student:-ram
roll no of the student:-14
marks in the subject:-89
marks in first subject:-56
marks in second subject:-89
the average marks obtained by the student is:-78
grade:-C
****************************************
enter the name of the student you want to search:-
ram
**************************************************
name of the student:-ram
roll no of the student:-14
marks in the subject:-89
marks in first subject:-56
marks in second subject:-89
the average marks obtained by the student is:-78
grade:-C
























































