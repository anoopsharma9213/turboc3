




















 #include<iostream.h>
 #include<conio.h>
 void main()
 {clrscr();
   float tb1,tb2,t;
  cout<<"enter the previous and current metre reading";
 cin>> tb1 >>tb2;
  t=tb2-tb1;
  cout<<"ELECTRICITY CONSUMED IN THIS MONTH="<<t<<"units"<<endl;
    if(t<=100)
      cout<<"AMOUNT TO BE PAID=RS."<<1*100;
    else if(t<=200)
      cout<<"AMOUNT TO BE PAID=RS."<<1*100+1.25*100;
   else if(t<=300)
      cout<<"AMOUNT TO BE PAID=RS."<<1*100+1.25*100+1.50*100;
   else if(t>300)
      cout<<"AMOUNT TO BE PAID=RS."<<1*100+1.25*100+1.50*100+(t-300)*2;
   getch();
   }
















