#include<stdio.h>

struct india{
	     char pm[50],pr[50],nflwr[50],nani[50],nsport[50];
	     char nsong[50],nanth[50],pop[50],ncap[50],nemb[50];
	     char norel[20][50],nomc[20][50],olang[50];
	     char area[50],nbird[50],norivr[20][50],intrd[1000];
	     int nopp,norln,nos,nout,nomci,nor;
	    }g;
void main()
{
 FILE *f1;
 char s[20];
 int i=0,ch;
 clrscr();
 printf("Enter File name: ");
 gets(s);
 f1=fopen(s,"w");
 if(f1==NULL)
  printf("File could not be opened");
 else
 {
  printf("PM/pr/fl/ani/sp/b/sng/ant/emb/cap/pop/ol/ar/nopp/norel/nos/nout: ");
  printf("\nnomc/nor/norel/nomc/nori/intr");
  gets(g.pm);
  gets(g.pr);
  gets(g.nflwr);
  gets(g.nani);
  gets(g.nsport);
  gets(g.nsong);
  gets(g.nanth);
  gets(g.nemb);
  gets(g.ncap);
  gets(g.pop);
  gets(g.olang);
  gets(g.area);
  scanf("%d%d%d%d%d",&g.nopp,&g.norln,&g.nos,&g.nout,&g.nomci,&g.nor);
  a:
  gets(g.norel[i]);gets(g.nomc[i]);gets(g.norivr[i]);
  printf("Enter ch:");
  ch=getch();
  if(ch!=13)
  {i++;
   goto a;
  }
  gets(g.intrd);
  fflush(stdin);
 }
 fclose(f1);
 getch();
}