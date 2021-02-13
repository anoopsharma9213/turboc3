#include<stdio.h>


typedef struct freelist{
		int data;
		struct freelist *next;
	       }node;

node *START = NULL,*p,*n;

void create()
{
 int i;
 n = (node *)malloc(sizeof(node));
 START = n;
 p = n;
 START->next = NULL;
 for(i=0;i<100;i++)
 {
  n = (node *)malloc(sizeof(node));
  n->next = NULL;
  p->next = n;
  p=n;
 }
 printf("\nFree List have 100 nodes!!!");
}

node* use()
{
 node *t = START;
 START = START->next;
 printf("\nMemory Allocated");
 return(t);
}

void clear(node *t)
{
 p->next=t;
 t->next = NULL;
 p=t;
 printf("\nMemory Deleted");
}

void deletel()
{
 while(START!=NULL)
 {
  n=START;
  START = START->next;
  p =START;
  free(n);
 }
 printf("\nFree list deleted!!!");
}

void main()
{
 node *a,*b;
 clrscr();
 create();
 a = use();
 b = use();
 a->data = 564;
 b->data = 178;
 printf("\nSum %d and %d is %d",a->data,b->data,a->data+b->data);
 clear(a);
 free(a);
 clear(b);
 free(b);
 deletel();
 getch();
}