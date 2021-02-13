# include<iostream.h>
# include<conio.h>
# include<fstream.h>
# include<ctype.h>
# include<string.h>
void main()
{
	clrscr();
	fstream file;
	char a,b[255];//="1T!4T!1T2b1T!1T1b11T!1T2b1T!2T1b1T!1T2b1T\0";
	int sum=0,i=0,t,k;
  /*	file.open("abc.txt",ios::out);

cout<<"1T!4T!1T2b1T!1T1b11T!1T2b1T!2T1b1T!1T2b1T\0";
file.close();    */

	file.open("abc.txt",ios::in);
	while(file)
	{
		file>>a;
		b[i]=a;
		i++;
	}file.close();
	b[i+1]='\0';
	for(i=0;b[i]!='\0';i++)
	{
		sum=0;
		while(b[i]<=57&&b[i]>=48)
		       {sum+=b[i]-48;
		       i++;
		       }

		       if(b[i]=='!')

			cout<<"\n";


		if((b[i]>=65&&b[i]<=92)||(b[i]>=97&&b[i]<=122))
		{
			if(b[i]=='b')
			{for(k=0;k<sum;k++)
				cout<<' ';}
		       else
			for(k=0;k<sum;k++)
			{
			cout<<b[i];
			}
		}
	       //	cout<<endl;
	}

	getch();
}




