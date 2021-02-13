#include<stdio.h>

struct india{
	     char cap[25],larci[25],lan[25],lan2[25],ind[25],rep[25];
	     char pm[50],pr[50],spk[50],chju[50];
	     char area[20],water[10],pop[25],popd[20],cur[20];
	     char timez[20],drive[10],nant[50],nsong[50];
	    }x;
void main()
{
 FILE *f1;
 char ch;
 long int z=sizeof(x);
 clrscr();
 f1=fopen("India.txt","w");
 if(f1==NULL)
  printf("File Cannot be opened.");
 else
 {scanf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&x.cap,&x.larci,&x.lan,&x.lan2,&x.ind,&x.rep,&x.pm,&x.pr,&x.spk,&x.chju,&x.area,&x.water,&x.pop,&x.popd,&x.cur,&x.timez,&x.drive,&x.nant,&x.nsong);
  fwrite(&x,z,1,f1);
  fflush(stdin);
 }
 fclose(f1);
 getch();
}