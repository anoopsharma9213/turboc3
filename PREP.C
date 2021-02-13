#include<stdio.h>

int main()
{
 int i=3;
 switch(i)
 {
  case 1:
	 i=4;
	 case 2:
	 i=5;
	 case 3:
	 continue;
	 default:
	 printf("BYE");
 }
 return 0;
}