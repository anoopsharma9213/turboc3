#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct user{
	    char n[25],pass[12];
	   }x;

void main()
{
int j,i;
 FILE *f1;
  gets(x.n);
  gets(x.pass);
 f1=fopen("Main","w");
  for(i=0;x.pass[i]!='\0';i++)
  { x.pass[i]+=15;
  }


 fwrite(&x,sizeof(x),1,f1);
 fclose(f1);

/* ofstream f1("Password.txt");
 for(i=0;i<5;i++)
 {
  if(i==0||i==1)
  {j=0;
   f1<<j;
  }
  else if(i==2)
  {j=1;
   f1<<j;
  }
  else{ j=2;
   f1<<j;
  }

  f1<<'\n';
 }
 for( i=0;i<5;i++)
 {if(i==0||i==4)
  {j=1;
   f1<<j;
  }
  else{j=2;
       f1<<j;
      }
  f1<<'\n';
 }
 f1.close();*/
 getch();
}