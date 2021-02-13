void main()
{
 int m;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&m);
 for(int i=1;i<=20;i++)
 {
  printf("%d*%d=%d\n",m,i,m*i);
 }
 getch();
}