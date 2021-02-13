#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 struct employee{
		 char n[25];
		 int age;
		 float salary;
		};
 struct employee e1={"Sanjay",30,5500.50};
 struct employee e2,e3;
 clrscr();
 strcpy(e2.n,e1.n);
 e2.age=e1.age;
 e2.salary=e1.salary;
 e3=e2;
 printf("\tInputted Data:\n");
 printf("\n%s  %d  %f",e1.n,e1.age,e1.salary);
 printf("\n%s  %d  %f",e2.n,e2.age,e2.salary);
 printf("\n%s  %d  %f",e3.n,e3.age,e3.salary);
 getch();
}