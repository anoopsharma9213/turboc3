#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int pen=35,p=10,era=2,pen1,p2,era3,tot;
    float dis,pay;
    cout<<"Number of pens bought:";
    cin>>pen1;
    cout<<endl;
    //if(pen*pen1+p*p2+era*era3>=500)
    cout<<"Number of pencils bought:";
    cin>>p2;
    cout<<endl;
    cout<<"Number of erasers bought:";
    cin>>era3;
    cout<<endl;
    tot=(pen*pen1)+(p*p2)+(era*era3);
    cout<<"Your total purchase:"<<tot<<endl;
    if(tot>=500)
    {cout<<"A discount of 10% on your purchase is given:"<<endl;
    dis=(10.0/100)*tot;
    cout<<"Discount=Rs."<<dis<<endl;
    pay=tot-dis;
    cout<<"Money to be given:"<<pay<<endl;}
    if(tot<500)
    {cout<<"A discount of 5% on your purchase is given:"<<endl;
    dis=(5.0/100)*tot;
    cout<<"Discount=Rs."<<dis<<endl;
    pay=tot-dis;
    cout<<"Money to be given:"<<pay<<endl;}
    getch();
}

