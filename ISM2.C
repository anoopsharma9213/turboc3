void main()
{
 float b[40],s[40],a[40],i;
 clrscr();
 a[0]=100000;
 b[0]=300;
 s[0]=3000;
 for(i=1;i<40;i++)
 {
  b[i]=b[i-1]+a[i-1]/20-b[i-1]/6;
  s[i]=s[i-1]+b[i-1]/6-s[i-1]/10;
  a[i]=a[i-1]+s[i-1]/10-a[i-1]/50;
  printf("B = %.2f  S = %.2f  A = %.2f\n",b[i],s[i],a[i]);
 }
 getch();
}