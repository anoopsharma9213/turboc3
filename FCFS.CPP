#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char p_name[10][10];
float bt[10],wt[10],tt[10],at[10],att=0,awt=0;
int i,n,count=0;
printf("enter the no. of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the process name:");
scanf("%s",p_name[i]);
printf("\n enter bt:");
scanf("%f",&bt[i]);
printf("\n enter at:");
scanf("%f",&at[i]);
if(i==0)
{
tt[i]=bt[i];
wt[i]=tt[i]-bt[i];
}
else
{
count=count+bt[i-1];
tt[i]=count+bt[i]-at[i];
wt[i]=tt[i]-bt[i];
}
att=att+tt[i];
awt=awt+wt[i];
}
awt=awt/n;
att=att/n;
printf("\n p.no.\t p.name\tbt\tt\twt\tat\n");
for(i=0;i<n;i++)
{
printf("%d\t %s\t %f\t %f\t %f\t %f\n",i+1,p_name,bt[i],tt[i],wt[i],at[i]);
}
printf("average waiting time:%f\n average turn around time %f\n",att,awt);
getch();
}

