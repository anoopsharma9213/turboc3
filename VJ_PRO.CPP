#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>


//Total number of rows & column in the matrix
const int ROW=4,COL=4;
//Matrix class
class array2d
{           int valid;

	    //Function used in finding the inverse of the matrix
	    void add(int,int,float);
	    void mul(int,float);
	    float mat1[ROW][COL],mat2[ROW][COL];
  public :
	    //Function to read the matrix
	    void inputmatrix(int x);

	    //Function to display the matrix
	    void displaymatrix();
	    void displaymatrix1();

		    //Function to add two matrices
	    array2d addmatrix(array2d,array2d);

	    //Function to display two matrices
	    array2d submatrix(array2d,array2d);

	    //Function to find the transose of the matrix
	    array2d transpose(array2d);

	    //Function to multiply two matrix
	    array2d mulmatrix(array2d,array2d);

		    //function to find the maximum element in the matrix
	    int maximum();

	    //Function to find the minimum element in the matrix
	    int minimum();

	    };

     //This function reads the matrix having specific no. of rows & col
     void array2d::inputmatrix(int x)
     {   for(int i=0;i<ROW;i++)
	  {
	       for(int j=0;j<COL;j++)
	       {     gotoxy((1+2*j)*COL,2*i+x);
		      cout<<"?";
		      gotoxy((1+2*j)*COL,2*i+x);
		      cin>>mat1[i][j];
		      }
		}
	}

	//Function to display the resultant matrix
	void array2d::displaymatrix()
	{   int row=10;
	    int col=45;

	     for (int i=0;i<ROW;i++)
	     {    col = 45;

	     for (int j=0;j<COL;j++)
	     { gotoxy(col,row);
	      cout<<mat1[i][j];
	      col=col+8;
	      }
	       row=row+2;
	       }
	       cout<<endl;
	       }

	  void array2d::displaymatrix1()
	{

	     for (int i=0;i<4;i++)
	     {for (int j=0;j<4;j++)
	       cout<<mat1[i][j]<<" ";
	      cout<<endl;
	      }
	}

	  //This Function add two matrix by taking two class type prameter
	  //and also returning class type variable

       array2d array2d::addmatrix(array2d a,array2d b)
       {  array2d c;
	   for (int i=0;i<ROW;i++)
	    for (int j=0;j<COL;j++)
	      c.mat1[i][j]=a.mat1[i][j]+b.mat1[i][j];
	      return(c);
	      }
	 //This function subtract  two matrix by taking two class type prameter
	  //and also returning class type variable
       array2d array2d::submatrix(array2d a,array2d b)
	{    array2d c;
	     for (int i=0;i<ROW;i++)
	    for (int j=0;j<COL;j++)
	      c.mat1[i][j]=a.mat1[i][j]-b.mat1[i][j];
	      return(c);
	      }

   //This function finds the transpose of the matrix by taking one class type prameter
	  //and also returning class type variable
	array2d array2d::transpose(array2d a)
	{    array2d b;
	     for (int i=0;i<ROW;i++)
	    for (int j=0;j<COL;j++)
	      b.mat1[j][i]=a.mat1[i][j];
	      return(b);

	      }

	 //This function multiplies  two matrix by taking two class type prameter
	  //and also returning class type variable
	array2d array2d::mulmatrix(array2d a,array2d b)
	{    array2d c;
	     for (int i=0;i<ROW;i++)
	     {
		for (int j=0;j<COL;j++)
		{
		      c.mat1[i][j]=0;
		      }
		 }
	      for ( i=0;i<ROW;i++)
	     {
		for (int j=0;j<COL;j++)
		{
		     for (int k=0;k<ROW;k++)
		    {      c.mat1[i][j]+=a.mat1[i][k]*b.mat1[k][j];
		     }
		}
	      }
	      return(c);
	      }


	//Function to find the maximum element in the matrix

	int array2d::maximum()
	{
	   int m;
	   m=mat1[0][0];
	    for (int i=0;i<ROW;i++)
	    {    for (int j=0;j<COL;j++)
		   { if(mat1[i][j]>m)
		       m=mat1[i][j];
		       }
		  }
	       return(m);
	       }

	//Function to find the minimum element in the matrix

	int array2d::minimum()
	{
	     int m;
	     m=mat1[0][0];
	       for (int i=0;i<ROW;i++)
	    {    for (int j=0;j<COL;j++)
		   { if(mat1[i][j]<m)
		       m=mat1[i][j];
		       }
		  }
	       return(m);
	       }
	  void sum();
	  void diff();
	  void tran();
	  void prod();
	  void max();
	  void min();
	  void s();
	  void save(array2d mat1,array2d mat2,array2d s);
	  void save(array2d mat1,array2d mat2);
	  void save(array2d mat1,int max);
	  void save1();
	  void show(char ch[25]);
	  void show1(char ch[25]);
	  void show2(char ch[25]);

struct s3{char n[25],cat[25];
	 };
struct s1{array2d mat1,mat2,s;
	 };
struct s2{array2d mat1,trans;
	 };
struct s4{array2d mat1; int n;
	 };

    //MAIN PROGRAM

    void main()
    {
     clrscr();
     /*	      textbackground(BLUE);
       textcolor(BLACK);
       clrscr();
       gotoxy(12,11);
       cout<<"C      O      M      P      U      T       E      R";
      gotoxy(11,13);
       cout<<"*****************************************************";
       gotoxy(16,18);
       cout<<" P     R     O     J     E     C     T";
      gotoxy(15,20);
       cout<<" ***************************************";
       textbackground(GREEN);
       textcolor(BLACK);
       gotoxy(12,40);
       cout<<"M  A  D  E         B  Y    :->>>" ;
       gotoxy(11,42);
       cout<<"************************";
       gotoxy(22,45);
       cout<<"S  H  I  K  H  A    N     V  I  J  E  T  A";
       gotoxy(21,47);
       cout<<"******************************************";
       getch();
      */ a:
       clrscr();

	  int ch;
	gotoxy(20,2);
	textbackground(GREEN);
       textcolor(BLACK);

	cout<<"WELCOME TO MATRIX MANIPULATIONS";
	gotoxy(19,3);
	cout<<"----------------------------------";
	gotoxy(25,10);
	cout<<"1 : ADDITION";
	gotoxy(25,14);
	cout<<"2 : SUBTRACTION";
	gotoxy(25,18);
	cout<<"3 : TRANSPOSE";
	gotoxy(25,22);
	cout<<"4 : MULTIPLICATION";
	gotoxy(25,26);
	cout<<"5 : MAXIMUM";
	gotoxy(25,30);
	cout<<"6 : MINIMUM";
	gotoxy(25,34);
	cout<<"7 : OPEN SAVED FILE";
	gotoxy(25,38);
	cout<<"8 : QUIT";
	gotoxy(12,45);
	     cout<<"Enter ur choice ";
	cin>>ch;

	clrscr();
	switch(ch)
	{  case 1:  sum();
		    break;
	   case 2:  diff();
		    break;
	   case 3:  tran();
		    break;
	   case 4:  prod();
		    break;
	   case 5:  max();
		    break;
	   case 6:  min();
		    break;
	   case 7: save1();
		     break;
	   case 8: exit(0);
		    break;
	      }
	  goto a;


	  }

       void save1()
       {char ch[25];
       int i=0;
	cout<<"Enter the file name";
	gets(ch);
	s3 x;
	ifstream f1("file.dat",ios::binary);
	while(f1.read((char*)&x,sizeof(x)))
	{if((strcmpi(ch,x.n)==0)&&(strcmpi(x.cat,"CALC")==0))
	 {  show(ch);
	  i++;
	 }
	 else if((strcmpi(ch,x.n)==0)&&(strcmpi(x.cat,"TRANS")==0))
	 {  show1(ch);
	  i++;
	 }
	 else if((strcmpi(ch,x.n)==0)&&(strcmpi(x.cat,"MM")==0))
	 {show2(ch);
	  i++;
	 }
	}
	if(i==0)
	cout<<"File not present\n";
	getch();
	return;
       }
       void show2(char ch[25])
       {s3 z;
	strcpy(z.n,ch);
	ifstream f1(z.n,ios::binary);
	s4 x;
	while(f1.read((char*)&x,sizeof(x)))
	{cout<<"Array 1\n";
	 x.mat1.displaymatrix1();
	 cout<<"\nProcessed Data \n";
	 cout<<x.n<<'\n';
	 getch();
	}
       }

       void show1(char ch[25])
       {s3 z;
	strcpy(z.n,ch);
	ifstream f1(z.n,ios::binary);
	s2 x;
	while(f1.read((char*)&x,sizeof(x)))
	{cout<<"Array 1\n";
	 x.mat1.displaymatrix1();
	 cout<<"\nProcessed Array \n";
	 x.trans.displaymatrix1();
	 getch();
	}
       }
       void show(char ch[25])
       {s3 z;
	strcpy(z.n,ch);
	ifstream f1(z.n,ios::binary);
	s1 x;
	while(f1.read((char*)&x,sizeof(x)))
	{cout<<"Array 1\n";
	 x.mat1.displaymatrix1();
	 cout<<"\nArray 2\n";
	 x.mat2.displaymatrix1();
	 getch();
	 cout<<"Processed matrix\n";
	 x.s.displaymatrix1();
	 getch();
	}
       }
	     //Function to call the function for reading & calculating the addition
       //of the matrix function from class

       void save(array2d mat1,array2d mat2,array2d s)
       {a:
	char ch[25],x[25];
	int i=0;
	cout<<"Enter the file name";
	gets(ch);
	s3 D;
	s1 A;
	A.mat1=mat1;
	A.mat2=mat2;
	A.s=s;
	ifstream f3("file.dat",ios::binary);
	while(f3.read((char*)&D,sizeof(D)))
	 if(strcmpi(D.n,ch)==0)
	 i++;
	 f3.close();
	if(i==0)
	{strcpy(D.n,ch);
	 strcpy(D.cat,"CALC");
	 ofstream f1(D.n,ios::binary);
	f1.write((char*)&A,sizeof(A));
	f1.close();
	fstream f2("file.dat",ios::binary|ios::in|ios::out|ios::app);
	f2.write((char*)&D,sizeof(D));
	f2.close();
	}
	else {cout<<"Suggest another file name:\n";
	     goto a;
	     }
	return;

       }
       void save(array2d mat1,array2d mat2)
       {a:
	char ch[25],x[25];
	int i=0;
	cout<<"Enter the file name";
	gets(ch);
	s3 D;
	s2 A;
	A.mat1=mat1;
	A.trans=mat2;
	ifstream f3("file.dat",ios::binary);
	while(f3.read((char*)&D,sizeof(D)))
	 if(strcmpi(D.n,ch)==0)
	 i++;
	 f3.close();
	if(i==0)
	{strcpy(D.n,ch);
	 strcpy(D.cat,"TRANS");
	 ofstream f1(D.n,ios::binary);
	f1.write((char*)&A,sizeof(A));
	f1.close();
	fstream f2("file.dat",ios::binary|ios::in|ios::out|ios::app);
	f2.write((char*)&D,sizeof(D));
	f2.close();
	}
	else {cout<<"Suggest another file name:\n";
	     goto a;
	     }
	return;
       }
       void save(array2d mat1,int max)
       {a:
	char ch[25],x[25];
	int i=0;
	cout<<"Enter the file name";
	gets(ch);
	s3 D;
	s4 A;
	A.mat1=mat1;
	A.n=max;
	ifstream f3("file.dat",ios::binary);
	while(f3.read((char*)&D,sizeof(D)))
	 if(strcmpi(D.n,ch)==0)
	 i++;
	 f3.close();
	if(i==0)
	{strcpy(D.n,ch);
	 strcpy(D.cat,"MM");
	 ofstream f1(D.n,ios::binary);
	f1.write((char*)&A,sizeof(A));
	f1.close();
	fstream f2("file.dat",ios::binary|ios::in|ios::out|ios::app);
	f2.write((char*)&D,sizeof(D));
	f2.close();
	}
	else {cout<<"Suggest another file name:\n";
	     goto a;
	     }
	return;
       }


       void sum()
       {textbackground(MAGENTA);
	textcolor(BLACK);
	 array2d s;char choice;
	  array2d mat1,mat2;
	  gotoxy(30,1);
	  cout<<"Addition Operation";
	  gotoxy(29,2);
	  cout<<"--------------------";

	  gotoxy(6,3);
	  cout<<"INPUT FIRST MATRIX ?";
	  gotoxy(5,4);
	  cout<<"---------------------";
	     mat1.inputmatrix(5);

	      gotoxy(6,15);
	  cout<<"INPUT SECOND MATRIX ?";
	  gotoxy(5,16);
	  cout<<"---------------------";
	     mat2.inputmatrix(17);


	 //function to calculate the sum of the co-ordinate values
	   s=mat1.addmatrix(mat1,mat2);
	   gotoxy(48,8);
	   cout<<"SUM OF THE MATRICES";

	   gotoxy(47,9);
	   cout<<"--------------------";

	   s.displaymatrix();
	   gotoxy(28,24);
	   save(mat1,mat2,s);
	   cout<<"Press enter to continue";
	     getch();
	    return;

			   }



       //Function to call the function for reading & calculating the subtraction
       //of the matrix function from class

       void diff()
       {textbackground(MAGENTA);
	textcolor(BLACK); array2d d;
	 array2d mat1,mat2;

	 gotoxy(30,1);
	 cout<<"Subtraction Operation";

	 gotoxy(29,2);
	 cout<<"--------------------";

	  gotoxy(6,3);
	  cout<<"INPUT FIRST MATRIX ?";
	  gotoxy(5,4);
	  cout<<"---------------------";
	     mat1.inputmatrix(5);

	      gotoxy(6,15);
	  cout<<"INPUT SECOND MATRIX ?";
	  gotoxy(5,16);
	  cout<<"---------------------";
	     mat2.inputmatrix(17);

	 //function to find the difference of matrix
	   d=mat1.submatrix(mat1,mat2);
	   gotoxy(48,8);
	   cout<<"DIFFERENCE OF THE MATRICES";

	   gotoxy(47,9);
	   cout<<"--------------------------";
	    d.displaymatrix();
	   gotoxy(28,24);
	    save(mat1,mat2,d);
	  cout<<"Press enter to continue";
	    getch();
	   return;
	   }
	 //Function to call the function for reading & calculating the multiplication
       //of the matrix function from class

       void prod()
       {textbackground(MAGENTA);
	textcolor(BLACK);    array2d p;
	 array2d mat1,mat2;

	 gotoxy(30,1);
	 cout<<"Multiplication Operation";

	 gotoxy(29,2);
	 cout<<"-------------------------";

	  gotoxy(6,3);
	  cout<<"INPUT FIRST MATRIX ?";
	  gotoxy(5,4);
	  cout<<"---------------------";
	     mat1.inputmatrix(5);

	      gotoxy(6,15);
	  cout<<"INPUT SECOND MATRIX ?";
	  gotoxy(5,16);
	  cout<<"----------------------";
	     mat2.inputmatrix(17);

	 //function to calculate the product of matrix
	   p=mat1.mulmatrix(mat1,mat2);
	   gotoxy(48,8);
	   cout<<"PRODUCT OF THE MATRICES";

	   gotoxy(47,9);
	   cout<<"------------------------";
	    p.displaymatrix();
	   gotoxy(28,23);
	    save(mat1,mat2,p);
	   cout<<"Press enter to continue";
	   getch();
	   return;
	   }

    //Function to call the function for reading & calculating the transpose
       //of the matrix function from class

       void tran()
       {textbackground(MAGENTA);
	textcolor(BLACK);    array2d trans;
	 array2d mat1;

	 gotoxy(30,1);
	 cout<<"Transpose Operation";

	 gotoxy(29,2);
	 cout<<"--------------------";

	  gotoxy(6,8);
	  cout<<"INPUT MATRIX ?";
	  gotoxy(5,9);
	  cout<<"---------------";
	     mat1.inputmatrix(10);

	 //function to transpose the matrix
	   trans=mat1.transpose(mat1);
	   gotoxy(48,8);
	   cout<<"TRANSPOSE OF THE MATRIX";

	   gotoxy(47,9);
	   cout<<"-----------------------";
	    trans.displaymatrix();
	   gotoxy(28,24);
	   save(mat1,trans);
	   cout<<"Press enter to continue";
	   getch();
	   return;
	   }


 //Function to call the function for reading & calculating the maximum element
	//of the matrix function from class

       void max()
       {textbackground(MAGENTA);
	textcolor(BLACK);
	 array2d mat;
	 int max_e;

	 gotoxy(30,1);
	 cout<<"Maximum Operation";

	 gotoxy(29,2);
	   cout<<"--------------------";

	  gotoxy(6,6);
	  cout<<"INPUT MATRIX ?";
	  gotoxy(5,7);
	  cout<<"---------------------";
	     mat.inputmatrix(8);

	 //function to find the maximum value
	  max_e=mat.maximum();
	   gotoxy(6,22);
	   cout<<" THE MAXIMUM ELEMENT IS:"<<max_e;
	    gotoxy(28,29);
	    save(mat,max_e);
	   cout<<"Press enter to continue";
	   getch();
	   return;
	   }

     //Function to call the function for reading & calculating the minimum element
	//of the matrix function from class

       void min()
       {textbackground(MAGENTA);
	textcolor(BLACK);
	 array2d mat;
	 int min_e;

	 gotoxy(30,1);
	 cout<<"Minimum Operation";

	 gotoxy(29,2);
	   cout<<"--------------------";

	  gotoxy(6,6);
	  cout<<"INPUT MATRIX ?";
	  gotoxy(5,7);
	  cout<<"---------------------";
	     mat.inputmatrix(8);

	 //function to find the minimum value
	  min_e=mat.minimum();
	   gotoxy(6,22);
	   cout<<" THE MINIMUM ELEMENT IS:"<<min_e;
		    gotoxy(28,29);
	    save(mat,min_e);

	   cout<<"Press enter to continue";
	   getch();
	   return;
	   }








