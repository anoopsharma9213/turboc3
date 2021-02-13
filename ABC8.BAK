#include<stdio.h>

struct india{
	     char pm[50],pr[50],nflwr[50],nani[50],nsport[50];
	     char nsong[50],nanth[50],pop[50],ncap[50];
	     char norel[50][50],nomc[50][50],olang[50],noppt[50][50];
	     char area[50],nbird[50],norivr[50][50],intrd[1000];
	     char nopp[5],norln[5],nos[5],nout[5],nomci[5],nor[5];
	    }g;



void main()
{
 char ch[10];
 int i;
 FILE *f1;
 clrscr();
 printf("Enter the file name: ");
 gets(ch);
 printf("Enter the P.m. name: ");
 gets(g.pm);
 printf("Enter the Pr name: ");
 gets(g.pr);
 printf("Enter the nflwr name: ");
 gets(g.nflwr);
 printf("Enter the nani. name: ");
 gets(g.nani);
 printf("Enter the nsport name: ");
 gets(g.nsport);
 printf("Enter the nsong name: ");
 gets(g.nsong);
 printf("Enter the nanth name: ");
 gets(g.nanth);
 printf("Enter the nbird name: ");
 gets(g.nbird);
 printf("Enter the Pop: ");
 gets(g.pop);
 printf("Enter the ncap name: ");
 gets(g.ncap);
 printf("Enter the olang name: ");
 gets(g.olang);
 printf("Enter the area: ");
 gets(g.area);
 for(i=0;i<6;i++)
 {
  printf("Enter city name: ");
  gets(g.nomc[i]);
 }
 for(i=0;i<6;i++)
 {
  printf("Enter party name: ");
  gets(g.noppt[i]);
 }
 for(i=0;i<9;i++)
 {
  printf("Enter river name: ");
  gets(g.norivr[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("Enter religion name:");
  gets(g.norel[i]);
 }
 printf("Enter the nopp : ");
 gets(g.nopp);
 printf("Enter the norln name: ");
 gets(g.norln);
 printf("Enter the nos name: ");
 gets(g.nos);
 printf("Enter the nout name: ");
 gets(g.nout);
 printf("Enter the nor name: ");
 gets(g.nor);
 printf("Enter the nomci name: ");
 gets(g.nomci);
 printf("Enter the intrd name: ");
 gets(g.intrd);

 f1=fopen(ch,"w");
  fwrite(&g,sizeof(g),1,f1);
  fflush(stdin);
 fclose(f1);
 getch();
}