#include<stdio.h>
//#include<conio.h>

void main()
{
 int n,bt[10],at[10],i,pt=0;
 float wt[10],tt[10],awt=0,att=0;
 clrscr();
 printf("Enter the no. of Processes: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter Burst Time for %d Process: ",i+1);
  scanf("%d",&bt[i]);
  printf("Enter Arrival Time for %d Process: ",i+1);
  scanf("%d",&at[i]);
  if(i==0)
  {
   tt[i]=bt[i];
   wt[i]=tt[i]-bt[i];
  }
  else {
	pt+=bt[i-1];
	tt[i]=pt+bt[i]-at[i];
	wt[i]=tt[i]-bt[i];
       }
 }
 clrscr();
 printf("Details of all Process: \n");
 printf("\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
 for(i=0;i<n;i++)
 {
  printf("\n%4d\t%7d\t%14d\t%16.2f\t%10.2f",i+1,bt[i],at[i],wt[i],tt[i]);
  awt+=wt[i];
  att+=tt[i];
 }
 awt/=n;
 att/=n;
 printf("\n\n\tAverage Waiting Time: %.2f",awt);
 printf("\n\tAverage Turnaround Time: %.2f",att);
 getch();
}