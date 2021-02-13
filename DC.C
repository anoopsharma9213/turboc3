#include<stdio.h>
#include<conio.h>

typedef struct node{
		    int info;
		    struct node *link;
		   }list;

void main()
{
 list *START=NULL,*ptr,*n;
 int num;
 char ch;
 clrscr();
 do{
    printf("\nEnter number : ");
    scanf("%d",&num);
    n=(list *)malloc(sizeof(list));
    if(START==NULL)
    {
     START=n;
     n->info=num;
     n->link=NULL;
     ptr=n;
    }
    else{
	 n->info=num;
	 n->link=NULL;
	 ptr->link=n;
	 ptr=n;
	}
    printf("Do you want to enter more element(y/n) :");
    ch=getch();
   }while(ch=='Y'||ch=='y');
 clrscr();
 printf("Elements :\n\n");
 ptr=START;
 while(ptr!=NULL)
 {
  printf("%d ",ptr->info);
  ptr=ptr->link;
 }
 getch();
}