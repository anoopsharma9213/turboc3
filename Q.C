#include<stdio.h>
#include<conio.h>


void insertion();
int deletion();
void traverse();


int f=-1,r=-1,q[5];


void main()
{
 int choice,x;
 do{
    clrscr();
    printf("\nEnter 1 : Insertion");
    printf("\nEnter 2 : Deletion");
    printf("\nEnter 3 : Traverse");
    printf("\nEnter 4 : Exit\n");
    printf("\nEnter Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1: insertion();
	     break;
     case 2: x=deletion();
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


void insertion()
{
 int num;
 if(r==4)
  printf("\nQueue Full!!!");
 else{
      printf("\nEnter number to be inserted: ");
      scanf("%d",&num);
      if(f==-1)
       f=r=0;
      else r++;
      q[r]=num;
      printf("\nElement Inserted");
     }

}

int deletion()
{
 int num;
 if(f==-1)
  printf("\nQueue Empty!!!");
 else{
      num=q[f];
      if(f==r)
       f=r=-1;
      else f++;
      return num;
     }
 return NULL;

}

void traverse()
{
 int i;
 if(f==-1)
  printf("\nQueue Empty!!!");
 else{
      printf("\nElemnets: ");
      for(i=f;i<=r;i++)
       printf("%d ",q[i]);
     }
}