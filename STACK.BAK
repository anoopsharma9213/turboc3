#include<stdio.h>
#include<conio.h>


void push();
int pop();
void traverse();


int top=-1,stack[5];


void main()
{
 int choice,x;
 do{
    clrscr();
    printf("\nEnter 1 : Push");
    printf("\nEnter 2 : Pop");
    printf("\nEnter 3 : Traverse");
    printf("\nEnter 4 : Exit\n");
    printf("\nEnter Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1: push();
	     break;
     case 2: x=pop();
	     if(x!=NULL)
	      printf("\nNumber Deleted : %d",x);
	     break;
     case 3: traverse();
	     break;
     case 4: printf("\nBYE :)");
	     break;
     default: printf("\nWrong Choice!!!");
    }
    getch();
   }while(choice!=4);
}



void push()
{
 int num;
 if(top==4)
  printf("\nStack Overflow!!!");
 else{
      printf("\nEnter number to be inserted: ");
      scanf("%d",&num);
      top++;
      stack[top]=num;
      printf("\nElement Inserted");
     }
}



int pop()
{
 int num;
 if(top==-1)
  printf("\nStack Underflow!!!");
 else{
      num=stack[top];
      top--;
      return num;
     }
 return NULL;
}



void traverse()
{
 int i;
 if(top==-1)
  printf("\nStack Underflow!!!");
 else{
      printf("\nElemnets: ");
      for(i=top;i>=0;i--)
       printf("%d ",stack[i]);
     }
}