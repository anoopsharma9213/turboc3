#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 int a[100],n,x,start,end,mid;
 cout<<"Enter No. of Elements : ";
 cin>>n;
 cout<<"Enter Elements : ";
 for(int i=0;i<n;i++)
  cin>>a[i];
 for(i=0;i<n;i++)
  for(int j=i;j<n;j++)
   if(a[i]>a[j])
   {
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
   }
 clrscr();
 cout<<"Sorted Elements : ";
 for(i=0;i<n;i++)
  cout<<a[i]<<" ";
 cout<<"\n\nEnter the Element to be searched : ";
 cin>>x;
 start=0;
 end=n-1;
 mid=(start+end)/2;
 int k=0;
 while(start<=end)
 {
  if(a[mid]==x)
  {cout<<"\nX is at "<<mid+1<<" position. ";
   k++;
   break;
  }
  else if(a[mid]>x)
       {
	end=mid-1;
	mid=(start+end)/2;
       }
  else {
	start=mid+1;
	mid=(start+end)/2;
       }
 }
 if(k==0)
 cout<<"Element not found";
 getch();
 return 0;
}