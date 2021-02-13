#include<iostream.h>
#include<conio.h>

class HugeInteger{
		  int a[40],n;
	   public:
		  void input();

		  void output();

		  void add(HugeInteger A,HugeInteger B);

		  void sub(HugeInteger A,HugeInteger B);

		  int greater(HugeInteger A,HugeInteger B);

		 };

int main()
{
 HugeInteger A,B,C;
 clrscr();
 cout<<"\nA : ";
 A.input();
 cout<<"\nA : ";
 A.output();
 cout<<"\nB : ";
 B.input();
 cout<<"\nB : ";
 B.output();
 C.add(A,B);
 C.sub(A,B);
 if(C.greater(A,B)==1)
  cout<<"\n\nA is greater.";
 else if(C.greater(A,B)==-1)
  cout<<"\n\nB is Greater.";
 else cout<<"\n\nA=B";
 getch();
 return 0;
}

void HugeInteger::output()
		  {
		   for(int i=0;i<n;i++)
		    cout<<a[i];
}

 void HugeInteger::input()
		  {
		   int ch,i=0;
		   cout<<"Enter number : ";
		   ch=getch();
		   while(ch!=13)
		   {a[i]=ch-48;
		    cout<<a[i];
		    ch=getch();
		    i++;
		   }
		   n=i;
		  }

 void HugeInteger::add(HugeInteger A,HugeInteger B)
		  {
		   int x=0,i,j;
		   if(A.n==B.n)
		   {for(i=A.n-1;i>=0;i--)
		    {
		     a[i]=x+A.a[i]+B.a[i];
		     x=a[i]/10;
		     a[i]=a[i]%10;
		    }
		    if(x==0)
		     n=A.n;
		    else {
			  for(i=n-1;i>=0;i--)
			   a[i+1]=a[i];
			  a[0]=x;
			  n=A.n+1;
			 }
		   }
		   else if(A.n>B.n)
		   {for(i=A.n-1,j=B.n-1;i>=0;i--,j--)
		    {
		     if(j>=0)
		      a[i]=x+A.a[i]+B.a[j];
		     else a[i]=x+A.a[i];
		     x=a[i]/10;
		     a[i]=a[i]%10;
		    }
		    if(x==0)
		     n=A.n;
		    else {
			  for(i=n-1;i>=0;i--)
			   a[i+1]=a[i];
			  a[0]=x;
			  n=A.n+1;
			 }

		   }
		   else if(A.n<B.n)
		   {for(i=B.n-1,j=A.n-1;i>=0;i--,j--)
		    {
		     if(j>=0)
		      a[i]=x+B.a[i]+A.a[j];
		     else a[i]=x+B.a[i];
		     x=a[i]/10;
		     a[i]=a[i]%10;
		    }
		    if(x==0)
		     n=B.n;
		    else {
			  for(i=n-1;i>=0;i--)
			   a[i+1]=a[i];
			  a[0]=x;
			  n=B.n+1;
			 }

		   }
		   cout<<"\n\nAdd (A+B)= ";
		   for(i=0;i<n;i++)
		    cout<<a[i];
		  }
		  void HugeInteger::sub(HugeInteger A,HugeInteger B)
		  {int i,x=0,j;
		   if(greater(A,B)==1||greater(A,B)==0)
		   {for(i=A.n-1,j=B.n-1;i>=0;i--,j--)
		    {if(j>=0)
		      a[i]=(A.a[i]-x)-B.a[j];
		     else a[i]=(A.a[i]-x);
		     if(a[i]<0)
		     {a[i]=a[i]+10;
		      x=1;
		     }
		     else x=0;
		    }
		    n=A.n;
		    cout<<"\n\nDifference (A-B): ";
		   for(i=0;i<n;i++)
		    cout<<a[i];
		   }
		   else if(greater(A,B)==-1)
		   {for(i=B.n-1,j=A.n-1;i>=0;i--,j--)
		    {if(j>=0)
		      a[i]=(B.a[i]-x)-A.a[j];
		     else a[i]=(B.a[i]-x);
		     if(a[i]<0)
		     {a[i]=a[i]+10;
		      x=1;
		     }
		     else x=0;
		    }
		    n=B.n;
		  cout<<"\n\nDifference (A-B): -";
		   for(i=0;i<n;i++)
		    cout<<a[i];
		   }
		  }
		  int HugeInteger::greater(HugeInteger A,HugeInteger B)
		  {
		   if(A.n>B.n)
		    return 1;
		   else if(A.n<B.n)
			 return -1;
		   else if(A.n==B.n)
			{
			 for(int i=0;i<A.n;i++)
			 {if(A.a[i]>B.a[i])
			   return 1;
			  else if(A.a[i]<B.a[i])
			       return -1;
			 }
			 return 0;
			}
		   return 0;
		  }