#include <string.h>
#include <math.h>

char T[20],P[20];

void main()
{
 int n,m,h,p,t[20],i,s,flag,d=10;
 clrscr();
 printf("Enter text : \n");
 gets(T);
 printf("Enter pattern : \n");
 gets(P);
 n = strlen(T);
 m = strlen(P);
 h = (int)pow(d,m-1)%11;
 p=0;
 t[0]=0;
 for(i=0;i<m;i++)
 {
  p=(d*p+(P[i]-48))%11;
  t[0]=(d*t[0]+(T[i]-48))%11;
 }
 for(s=0;s<=n-m;s++)
 {
  if(p==t[s])
  {
   flag=0;
   for(i=0;i<m;i++)
    if(P[i]!=T[s+i])
    {
     flag++;
     break;
    }
   if(flag==0)
    printf("Valid shift at %d.\n",s);
  }
  if(s<n-m)
   t[s+1]=(d*(t[s]-(T[s]-48)*h)+(T[s+m]-48))%11;
  if(t[s+1]<0)
   t[s+1]+=11;
 }
 getch();
}