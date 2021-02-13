/*Input name and marks of 5 students and do the following:
1)   Print them in merit order along with the average and rank.
2)   Display records in ascending order of name.
3)   Display any record by inputting name.*/




#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int temp,temp2,maxname,maxavg,mar[10][5],sum[10],avg[10];
char name[10];
for(int i=0;i<10;i++)
sum[i]=0 ;
cout<<"Enter the names of students"<<endl;
getchar(name[i]);
cout<<"Enter the marks of the student in five subjects";
for(int j=0;j<5;j++)
{
cin>>mar[j];
sum[i]=mar[i][j]+sum[i];
 avg[i]=sum[i]/5;
 maxavg=avg[i];
   }

   for(i=0;i<10;i++)
{  for(int j=(i+1);j<10;j++)
if(maxavg<avg[i])
{temp=avg[i];
avg[i]=maxavg;
maxavg=temp;
temp2=name[i];
name[i]=maxname;
maxname=temp2;
}

for(i=0;i<10;i++)
cout<<"name is"<<name[i]<<"avg is"<<avg[i]<<"position is"<<i+1;
getch();
}













