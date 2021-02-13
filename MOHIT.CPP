




















 #include<iostream.h>
 #include<conio.h>
 void main()
 {clrscr();
  float tb1,tb2,t;
  cout<<"enter the previous and current metre reading";
 cin>> tb1 >>tb2;
  t=tb1-tb2;
   if(t<=100)
      cout<<"no bill";
   else if(t<=250)
      cout<<"your bill is"<<(t-100)*0.80;
   else if(t<=450)
      cout<<"your bill is"<<(t-250)*1+150*.80;
   else if(t>450)
      cout<<"your bill is"<<(t-450)*1.20+150*.80+200*1;
   getch();
   }
















