#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{   clrscr();
    float e,m,p,c,comp,per,tot,roll;
    cout<<"Enter your roll number:";
    cin>>roll;
    cout<<endl;
    cout<<"Marks in English:";
    cin>>e;
    cout<<endl;
    cout<<"Marks in Maths:";
    cin>>m;
    cout<<endl;
    cout<<"Marks in Physics:";
    cin>>p;
    cout<<endl;
    cout<<"Marks in Chemistry:";
    cin>>c;
    cout<<endl;
    cout<<"Marks in Computer Science:";
    cin>>comp;
    cout<<endl;
    tot=e+m+p+c+comp;
    per=(tot/500)*100;
    cout<<"Total Marks Obtained="<<tot<<endl;
    cout<<"Percentage="<<per<<"%"<<endl;
    if(per>=90)
    cout<<"Grade=A"<<endl;
    if(per>=80&&per<=89)
    cout<<"Grade=B"<<endl;
    if(per>=70&&per<=79)
    cout<<"Grade=C"<<endl;
    if(per<=70)
    cout<<"Grade=D";
    getch();
}