#include<iostream.h>
#include<conio.h>

int fact(int a);

void main(){
clrscr();
int a;

cout<<"enter any number:";
cin>>a;
cout<<"its factorial is"<<fact(a);
getch();
}
int fact(int a){
int b=1;
for(int i=1;i<=a;i++)
b*=i;
}
return b
}

