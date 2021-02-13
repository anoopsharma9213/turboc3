#include<iostream.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

//using namespace std;

FILE *FP;              // Global File Pointer

//  FILES USED :
//   INV.DAT
//   BINV.DAT3
//   NOTES.DAT

// Function Prototypes

//FORCAST() will check
//the PRODUCT.CATAGORY() to process through either MA() or SI() who will then
//return values to FORECAST().
//The FORECAST()ed value will be used as DEMAND in EOQ() and RPI()


//void FORECAST();  //FORCASTING FOR NEXT QUARTER

//void EOQ();
//void RPI();


//void BACKUP();
//void CREATE();
//void DELETE();
//void UPDATE();
//void VIEW_RECORD();


//void REMINDER();
//void VIEW_REMINDER();
//void CLEAR_REMINDER();


typedef struct PRODUCT
{
	char NAME[20];         //Product NAME
	unsigned long int ID;  //Product ID

	float UCP;             //Unit Cost Price ($)
	unsigned int HC;       //Holding Cost (%) -> Holding cost per unit as a fraction of product cost.
	float FOC;             //Fix Order Cost ($) -> The product order cost. This is the flat fee charged for making any order and is independent of Q.
	float DEMAND;          //EOQ attribute -> Annual Demand of product in quantity per unit time (monthly).
			       //This can also be known as a rate.
	unsigned int LT;       //Lead Time (DAYS) -> Time (in days) it takes for an order to arrive when an order is placed
	float SS;              //Safety Stock - The quantity of inventory kept on hand incase there is a unpredictable event like delays in lead time or unexpected demand.
	//For RPI Daily Usage = DEMAND/30 - Quantity of inventory used or sold each day

	unsigned int UNIT_SALES[24]; //
	unsigned int QTR_SALES[8];

	float _EOQ,_RPI;       //for EOQ and RPI outputs

	//EOQ= the EOQ order quantity. This is the variable we want to optimize.
	//All the other variables are fixed quantities.


	// FINAL PREDICTION QUANTITIES

	float QHC;             //Qtr Holding Cost
	float QOC;             //Qtr Order Cost
	float TQC;             //Total Qtr Cost ($)

	unsigned int UNITS;    //Current Number of Items in Warehouse//Ave. Demand (Qtr 1) /This Has to be Monthly or quartertly

	unsigned int CATAGORY; //CATAGORY = MOVING AVERAGE<1> | SEASONAL INDEX<2>
};
PRODUCT *P;

struct NOTE
{
	char _NOTE[500];
};


void MA(PRODUCT*);        //MOVING AVERAGE
void SI(PRODUCT*);        //SEASONAL INDEX

/************************************************* FUNCTIONS / MODULES **************************************************/



void CREATE()
{

struct PRODUCT S;
FP = fopen("INV.DAT","ab");
gets(S.NAME);
cout<<"\n\tENTER PRODUCT NAME: ";
gets(S.NAME);
cout<<"\n\tENTER PRODUCT ID: ";
fscanf(stdin,"%ld",&S.ID);
cout<<"\n\tENTER UNIT COST PRICE: ";
fscanf(stdin,"%f",&S.UCP);
cout<<"\n\tENTER HOLDING COST (IN PERCENTAGE): ";
fscanf(stdin,"%ld",&S.HC);
cout<<"\n\tENTER FIX ORDER COST: ";
fscanf(stdin,"%f",&S.FOC);
cout<<"\n\tENTER LEAD TIME (IN DAYS): ";
fscanf(stdin,"%ld",&S.LT);
cout<<"\n\tENTER MINIMUM SAFETY STOCK PERCENTAGE: ";
fscanf(stdin,"%f",&S.SS);
cout<<"\n\tENTER CATAGORY (MOVING AVERAGE<1> | SEASONAL INDEX<2>) : ";
fscanf(stdin,"%ld",&S.CATAGORY);
cout<<"\n\tENTER PREVIOUS SALES (LAST 24 MONTHS) : ";
for(int i=0; i<24; i++)
{
	cout<<"\t";
	fscanf(stdin,"%ld",&S.UNIT_SALES[i]);
	S.QTR_SALES[i/3]=S.QTR_SALES[i/3]+S.UNIT_SALES[i];
}
fwrite(&S, sizeof(S), 1, FP);
fclose(FP);

}



void DELETE()
{

unsigned long int ID;
int i=-1;
struct PRODUCT S;
printf("\t\t   ENTER ID NUMBER: ");
fscanf(stdin,"%ld",&ID);
FP=fopen("INV.DAT","r+b");
rewind(FP);
while(feof(FP)==NULL)
{
fread(&S, sizeof(S), 1, FP);
i++;
if(S.ID==ID)
{
S.ID=0;
fseek(FP, i*sizeof(S), SEEK_SET);
fwrite(&S, sizeof(S), 1, FP);
cout<<"\n\n\t\t YOU DELETED RECORD OF: %s"<<S.NAME;
break;
}
}
if(feof(FP)){cout<<"\n\n\t\t SORRY ID NUMBER NOT FOUND\n\n";}
fclose(FP);

}



void UPDATE()
{

unsigned long int ID;
int i=-1;
struct PRODUCT S;
printf("\t\t   ENTER ID NUMBER: ");
fscanf(stdin,"%ld",&ID);
FP=fopen("INV.DAT","r+b");
rewind(FP);
while(feof(FP)==NULL)
{
fread(&S, sizeof(S), 1, FP);
i++;
if(S.ID==ID)
{
cout<<"\n\n\t\t   ENTER NEW ENTRIES\n\n";
gets(S.NAME);
cout<<"\n\tENTER PRODUCT NAME: ";
gets(S.NAME);
cout<<"\n\tENTER PRODUCT ID: ";
fscanf(stdin,"%ld",&S.ID);
cout<<"\n\tENTER UNIT COST PRICE: ";
fscanf(stdin,"%f",&S.UCP);
cout<<"\n\tENTER HOLDING COST (IN PERCENTAGE): ";
fscanf(stdin,"%ld",&S.HC);
cout<<"\n\tENTER FIX ORDER COST: ";
fscanf(stdin,"%f",&S.FOC);
cout<<"\n\tENTER LEAD TIME (IN DAYS): ";
fscanf(stdin,"%ld",&S.LT);
cout<<"\n\tENTER MINIMUM SAFETY STOCK PERCENTAGE: ";
fscanf(stdin,"%f",&S.SS);
cout<<"\n\tENTER CATAGORY (MOVING AVERAGE<1> | SEASONAL INDEX<2>) : ";
fscanf(stdin,"%ld",&S.CATAGORY);
cout<<"\n\tENTER PREVIOUS SALES (LAST 24 MONTHS) : ";
for(int j=0; j<24; j++)
{
	cout<<"\t";
	fscanf(stdin,"%ld",&S.UNIT_SALES[j]);
	S.QTR_SALES[j/3]=S.QTR_SALES[j/3]+S.UNIT_SALES[j];
}
fseek(FP, i*sizeof(S), SEEK_SET);
fwrite(&S, sizeof(S), 1, FP);
cout<<"\n\n\t\t YOU UPDATED RECORD OF: "<<S.NAME;
break;
}
}
if(feof(FP)){cout<<"\n\n\t\t SORRY ID NUMBER NOT FOUND\n\n";}
fclose(FP);

}


void VIEW_RECORD()
{

unsigned long int ID;
cout<<"\t\t   ENTER ID NUMBER: ";
fscanf(stdin,"%ld",&ID);
struct PRODUCT S;
FP=fopen("INV.DAT","rb");
rewind(FP);
while(feof(FP)==NULL)
{
fread(&S, sizeof(S), 1, FP);
if(S.ID==ID)
{
cout<<"\n\tPRODUCT NAME: "<<S.NAME<<"\n\tPRODUCT ID: "<<S.ID<<"\n\tUNIT COST PRICE: "<<S.UCP<<"\n\tHOLDING COST (IN PERCENTAGE): "<<S.HC<<"\n\tFIX ORDER COST: "<<S.FOC<<"\n\tLEAD TIME (IN DAYS): "<<S.LT<<"\n\tMINIMUM SAFETY STOCK: "<<S.SS<<"\n\tCATAGORY (MOVING AVERAGE<1> | SEASONAL INDEX<2>) : "<<S.CATAGORY;
break;
}
}
if(feof(FP)){printf("\n\n\t\t SORRY PRODUCT ID NOT FOUND\n\n");}
fclose(FP);

}




void FORECAST()
{
	unsigned long int ID;
	int i=-1;
	struct PRODUCT S;
	printf("\t\t   ENTER ID NUMBER: ");
	fscanf(stdin,"%ld",&ID);
	FP=fopen("INV.DAT","r+b");
	rewind(FP);
	while(feof(FP)==NULL)
	{
		fread(&S, sizeof(S), 1, FP);
		i++;
		if(S.ID==ID)
		{
			if(S.CATAGORY==1){
				MA(&S);}
			else{
				SI(&S);}
		}
		fseek(FP, i*sizeof(S), SEEK_SET);
		fwrite(&S, sizeof(S), 1, FP);
		break;
	}
	if(feof(FP)){cout<<"\n\n\t\t SORRY ID NUMBER NOT FOUND\n\n";}
	fclose(FP);
}

void MA(PRODUCT *P)
{
	unsigned int MEAN[8]={0,0,0,0,0,0,0,0}, DEVIATION[8]={0,0,0,0,0,0,0,0} ;
	int i,j,k,N;
	for(i=0; i<8; i++)
	{

		for(j=i; j<8; j++)
		{
			for(k=0; k<=i; k++)
			{
				MEAN[j] = (MEAN[j] + P->QTR_SALES[j-k]) ;
			}
			MEAN[j]=MEAN[j]/(i+1);
		}
		for(k=i+1;k<7;k++)
		{
			DEVIATION[k] = MEAN[k]-(P->QTR_SALES[k+1]);
		}
		for(k=i+1;k<7;k++)
		{
			N=N+DEVIATION[k];
		}
		DEVIATION[i+1]=N/(8-(i+1));
	}
	for(i=1; i<7; i++)
	{
			if(DEVIATION[0]<=DEVIATION[i])
			{
				DEVIATION[0]=DEVIATION[i];
				N=i+1;
			}
	}
	for(i=8-N;i<=N;i++)
	{
		P->DEMAND=P->DEMAND + P->QTR_SALES[i-1];
	}
	P->DEMAND=P->DEMAND/N;

}



void SI(PRODUCT *P)
{

	P->DEMAND=P->QTR_SALES[3];

}

void EOQ(PRODUCT *P)
{
	cout << "Initializing EOQ" << endl;
	P->_EOQ=sqrt(2*P->DEMAND*P->FOC/(P->HC*P->UCP));
	cout << "EOQ is :" << P->_EOQ << endl;
	float QHC;             //Qtr Holding Cost
	float QOC;             //Qtr Order Cost
	float TQC;             //Total Qtr Cost
	P->QHC= P->_EOQ*P->HC;
	P->QOC= P->_EOQ*P->FOC;
	P->TQC= P->QHC + P->QOC;
	cout<<"Quarter Holding Cost : "<<P->QHC<<endl;
	cout<<"Quarter Order Cost   : "<<P->QOC<<endl;
	cout<<"Total Quarter Cost   : "<<P->TQC<<endl;
}

void RPI(PRODUCT *P)
{
    cout << "initializing RPI" << endl;
	P->_RPI = ( ( (P->DEMAND/90) * P->LT ) + ( ( (P->SS) / 100 ) * (P->DEMAND) ));
	cout << 	"RPI is :" << P->_RPI << endl ;
} /*Reorder Point= [Daily usage*Lead time (in days)] + safety stock*/


/********************************REMINDER/NOTES************************************/



void REMINDER()
{
fflush(stdin);
FP = fopen("NOTES.DAT","a");
struct NOTE N;
cout<<"\tENTER NOTE OR REMINDER :\n\n\t";
gets(N._NOTE);
fprintf(FP, "%s\n", N._NOTE);
cout<<"\n\n\tNOTES HAVE BEEN SAVED\n";
fclose(FP);

}

void VIEW_REMINDER()
{

char CH='0';
FP = fopen("NOTES.DAT","r");
struct NOTE N;
fflush(stdin);
cout<<"\tNOTES OR REMINDERS :\n\n";
while((feof(FP) == 0)&&(CH=='0'))
{
fgets(N._NOTE, 500, FP);
fprintf(stdout,"\t\t%s",N._NOTE);
cout<<"\n\n\tPRESS 0 TO READ THE NEXT NOTE OR 1 TO EXIT\n\n";
CH=getch();
}
if(feof(FP)){cout<<"\t\t  SORRY NO NOTES OR REMINDERS\n\n";}
fclose(FP);

}

void CLEAR_REMINDER()
{

cout<<"\t\t\t      ARE YOU SURE ?\n\n\t\t    PRESS 'Y' TO CONFIRM / 'N' TO CANCEL\n\n\n";
char C = getch();
if(C=='Y'||C=='y')
{
FP = fopen("NOTES.DAT","w");
fclose(FP);
cout<<"\t\t\t.......RECORD CLEARED\n";
}
else
{
cout<<"\t\t\t.......ACTION CANCELLED\n";
}

}


/****************************************BACKUP FUNCTION******************************************/


void BACKUP()
{

FILE *FPB;
FPB = fopen("BINV.DAT","wb");
FP = fopen("INV.DAT","rb");
struct PRODUCT P;
while(feof(FP)==NULL)
{
fread(&P, sizeof(P), 1, FP);
fwrite(&P, sizeof(P), 1, FPB);
cout<<".";
}

fclose(FP);
fclose(FPB);
cout<<"\n\n\t\t\t\tBACKUP COMPLETE\n\n";

}



/**************************************MENU FUNCTIONS******************************************/

void WARE_MENU()
{
	clrscr();
	printf("\n\t\t\t\tWARE HOUSE\n\n\n\t\tPRESS THE OPTION NUMBER AS PER REQUIREMENT \n\n\t\t 1 : TO VIEW PRODUCT DETAILS \n\n\t\t 2 : TO LIST NEW PRODUCT\n\n\t\t 3 : TO UPDATE A PRODUCT DETAILS\n\n\t\t 4 : TO DELETE A PRODUCT LISTING\n\n\t\t 5 : TO CREATE REMINDER OR NOTE\n\n\t\t 6 : TO VIEW REMINDERS OR NOTES\n\n\t\t 7 : TO DELETE ALL REMINDERS AND NOTES\n\n\t\t  0 : TO RETURN TO MAIN MENU\n\n\n ");
	char CH = getch();

switch(CH)
{
case '1':
VIEW_RECORD();
getch();
WARE_MENU();
break;

case '2':
CREATE();
getch();
WARE_MENU();
break;

case '3':
UPDATE();
getch();
WARE_MENU();
break;

case '4':
DELETE();
getch();
WARE_MENU();
break;


case '5':
REMINDER();
getch();
WARE_MENU();
break;

case '6':
VIEW_REMINDER();
getch();
WARE_MENU();
break;

case '7':
CLEAR_REMINDER();
getch();
WARE_MENU();
break;

case '0': getch();
break;

default:
WARE_MENU();

}

}
void EOQ_MENU()
{
FORECAST();
EOQ(P);

}
void RPI_MENU()
{
FORECAST();
RPI(P);

}


/****************************************MAIN FUNCTION********************************************/


int main()
{
	//~~~~~~~~~~~~~~~~~~REPLACE CODE BELOW WITH YOUR USER INTERFACE CODES~~~~~~~~~~~~~~~~~

	cout <<"\n\t\t  WELCOME TO INVENTORY MANAGEMENT SYSTEM\n\n\t\t\t\tMAIN MENU \n\n\n\n";

	WARE_MENU();
	EOQ_MENU();
	RPI_MENU();
	BACKUP();

	cin.get();
	return 0;
}


/***********************************END OF CODE***************************************/