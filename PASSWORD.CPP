#include<fstream.h>

void main()
{
 int i[14]={0,0,0,1,2,0,1,2,2,2},j;
 ofstream f1("Password.txt");
 for(j=0;j<5;j++)
 {f1<<i[j];
  f1<<'\n';
 }
 for(;j<10;j++)
 {
  f1<<i[j];
  f1<<'\n';
 }
 f1.close();

}