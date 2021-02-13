#include<stdio.h>
#include<conio.h>

typedef struct node{
		    int info;
		    struct node* link;
		   }stack;

stack *top=NULL,*p;

void push();
int pop();
void traverse();

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
 p=(stack*)malloc(sizeof(stack));
 printf("\nEnter number to be inserted: ");
 scanf("%d",&num);
 p->info=num;
 p->link=top;
 top=p;
 printf("\nElement Inserted");
}


int pop()
{
 int num;
 if(top==NULL)
  printf("\nStack Underflow!!!");
 else{
      num=top->info;
      p=top;
      top=top->link;
      free (p);
      return num;
     }
 return NULL;
}



void traverse()
{
 if(top==NULL)
  printf("\nStack Underflow!!!");
 else{
      printf("\nElemnets: ");
      for(p=top;p!=NULL;p=p->link)
       printf("%d ",p->info);
     }
}