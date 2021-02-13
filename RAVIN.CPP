#include<iostream.h>
#include<conio.h>
int a=6;
void calc(int x,int&y,int&z)
{a=x+y;y=x*z;z=a+x;x=3*y;
cout<<++x<<endl<<++y<<endl<<--z<<endl<<++a<<endl;
}
main()
{clrscr();
{int a=3,b=2;
calc(::a,a,b);
cout<<::a<<endl<<a<<endl<<b<<endl;
}
getch();
}