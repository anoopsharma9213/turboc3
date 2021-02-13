#include<stdio.h>
#include<conio.h>

struct node{
	    int info;
	    struct node *link;
	   };

struct node* avail_node()
{
 struct node *p;
 p=(struct node*)malloc(sizeof(struct node));
 if(p==NULL)
 {printf("Memory not Available");
  getch();
  exit(0);
 }
 return p;
}

void insert()
{
 struct node *ptr,*ptr1;
 clrscr();

}