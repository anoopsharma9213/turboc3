#include<stdio.h>

void main()
{
 int bt[10],at[10],p[10],tt[10],wt[10],tbt[10],i,j,total=0,ref=0,n,min,maxp=0;
 float awt=0,att=0;
 clrscr();
 printf("Enter the number of Process: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter burst time for %d process: ",i+1);
  scanf("%d",&bt[i]);
  printf("Enter arrival time for %d process: ",i+1);
  scanf("%d",&at[i]);
  printf("Enter priority for %d process: ",i+1);
  scanf("%d",&p[i]);
  total+=bt[i];
  tbt[i]=bt[i];
  if(p[i]>maxp)
   maxp=p[i];
 }
 tt[0]=bt[0];
 ref=bt[0];
 tbt[0]=0;
 while(ref<total)
 {min=maxp;
  for(i=0;i<n;i++)
  {
   if(at[i]<=ref&&tbt[i]>0)
    if(p[i]<=min)
    {
     j=i;
     min=p[i];
    }
  }
   tt[j]=ref+bt[j];
   tbt[j]=0;
   ref+=bt[j];
 }
 for(i=0;i<n;i++)
 {
  tt[i]-=at[i];
  wt[i]=tt[i]-bt[i];
  att+=tt[i];
  awt+=wt[i];
 }
 clrscr();
 printf("Details of all Process: \n");
 printf("\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
 for(i=0;i<n;i++)
 {
  printf("\n%4d\t%7d\t%14d\t%16d\t%10d",i+1,bt[i],at[i],wt[i],tt[i]);
 }
 awt/=n;
 att/=n;
 printf("\n\n\tAverage Waiting Time: %.2f",awt);
 printf("\n\tAverage Turnaround Time: %.2f",att);
 getch();
}
