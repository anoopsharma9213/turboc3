void main()
{
 float p[20],s[20],i;
 clrscr();
 p[0]=10;
 s[0]=0;

 for(i=1;i<20;i++)
 {
  printf("S = %f  P = %f\n",s[i-1],p[i-1]);
  s[i] = 5*(p[i-1]-1)/9;
  p[i] = (17.91/(s[i]+4.66))*(17.91/(s[i]+4.66));
 }

 getch();
}