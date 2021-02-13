#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

//using namespace std;

FILE *FP;              // Global File Pointer

//  FILES USED :
//   INV.DAT
//   BINV.DAT
//   NOTES.DAT

// Function Prototypes

//void MENU();
//void PASSCHECK();

//INIT()ialise a Product and send for FORCAST()ing then FORCAST() will check
//the PRODUCT.CATAGORY() to process through either MA() or SI() who will then
//return values to FORECAST().
//The FORECAST()ed value will be used as DEMAND in EOQ() and RPI()

//void INIT();

//void FORECAST();  //FORCASTING FOR NEXT QUARTER
float MA();        //MOVING AVERAGE
float SI();        //SEASONAL INDEX

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

	float OO[8];              //Optimal orders (n*)
	float QHC[8];             //Qtr Holding Cost
	float QOC[8];             //Qtr Order Cost
	float TQC[8];             //Total Qtr Cost ($)

	unsigned int UNITS;    //Current Number of Items in Warehouse//Ave. Demand (Qtr 1) /This Has to be Monthly or quartertly

	unsigned int CATAGORY; //CATAGORY = MOVING AVERAGE<1> | SEASONAL INDEX<2>
};

struct NOTE
{
	char _NOTE[500];
};



/************************************************* FUNCTIONS / MODULES **************************************************/



void CREATE()
{

struct PRODUCT S;
FP = fopen("INV.DAT","ab");
gets(S.NAME);
printf("\n\tENTER PRODUCT NAME: ");
gets(S.NAME);
printf("\n\tENTER PRODUCT ID: ");
fscanf(stdin,"%ld",&S.ID);
printf("\n\tENTER UNIT COST PRICE: ");
fscanf(stdin,"%f",&S.UCP);
printf("\n\tENTER HOLDING COST (IN PERCENTAGE): ");
fscanf(stdin,"%ld",&S.HC);
printf("\n\tENTER FIX ORDER COST: ");
fscanf(stdin,"%f",&S.FOC);
printf("\n\tENTER LEAD TIME (IN DAYS): ");
fscanf(stdin,"%ld",&S.LT);
printf("\n\tENTER MINIMUM SAFETY STOCK PERCENTAGE: ");
fscanf(stdin,"%f",&S.SS);
printf("\n\tENTER CATAGORY (MOVING AVERAGE<1> | SEASONAL INDEX<2>) : ");
fscanf(stdin,"%ld",&S.CATAGORY);
printf("\n\tENTER PREVIOUS SALES (LAST 24 MONTHS) : ");
for(int i=0; i<24; i++){fscanf(stdin,"%ld",&S.UNIT_SALES[i]);}
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
printf("\n\n\t\t   ENTER NEW ENTRIES\n\n");
gets(S.NAME);
printf("\n\tENTER PRODUCT NAME: ");
gets(S.NAME);
printf("\n\tENTER PRODUCT ID: ");
fscanf(stdin,"%ld",&S.ID);
printf("\n\tENTER UNIT COST PRICE: ");
fscanf(stdin,"%f",&S.UCP);
printf("\n\tENTER HOLDING COST (IN PERCENTAGE): ");
fscanf(stdin,"%ld",&S.HC);
printf("\n\tENTER FIX ORDER COST: ");
fscanf(stdin,"%f",&S.FOC);
printf("\n\tENTER LEAD TIME (IN DAYS): ");
fscanf(stdin,"%ld",&S.LT);
printf("\n\tENTER MINIMUM SAFETY STOCK: ");
fscanf(stdin,"%f",&S.SS);
printf("\n\tENTER CATAGORY (MOVING AVERAGE<1> | SEASONAL INDEX<2>) : ");
fscanf(stdin,"%d",&S.CATAGORY);

fseek(FP, i*sizeof(S), SEEK_SET);
fwrite(&S, sizeof(S), 1, FP);
cout<<"\n\n\t\t YOU UPDATED RECORD OF: "<<S.NAME;
break;
}
}
if(feof(FP)){cout<<"\n\n\t\t SORRY ROLL NUMBER NOT FOUND\n\n";}
fclose(FP);

}


void VIEW_RECORD()
{

unsigned long int ID;
printf("\t\t   ENTER ID NUMBER: ");
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




void INIT()
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CODE HERE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}

float FORECAST(int x)
{
	float _DEMAND;
	if(x==1){
		_DEMAND=MA();}
	else{
		_DEMAND=SI();}
	return(_DEMAND);
}

float MA(){return 0;}

float SI(){return 0;}

void EOQ(PRODUCT *P)
{
    cout << "Initializing EOQ" << endl;
	P->_EOQ=sqrt(2*P->DEMAND*P->FOC/(P->HC*P->UCP));
	cout << "EOQ is :" << P->_EOQ << endl;
}
void RPI(PRODUCT *P)
{
    cout << "initializing RPI" << endl;
	P->_RPI = ( ( (P->DEMAND/30) * P->LT ) + ( ( (P->SS) / 100 ) * (P->DEMAND) ));
	cout << "RPI is :" << P->_RPI << endl ;
} /*Reorder Point= [Daily usage*Lead time (in days)] + safety stock*/



/********************************REMINDER/NOTES************************************/



void REMINDER()
{

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
else        2
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


/****************************************MAIN FUNCTION********************************************/


int main()
{
	//~~~~~~~~~~~~~~~~~~REPLACE CODE BELOW WITH YOUR USE INTERFACE CODES~~~~~~~~~~~~~~~~~

	cout <<"\n\t\t  WELCOME TO INVENTORY MANAGEMENT SYSTEM\n\n\t\t\t\tMAIN MENU \n\n\n\n";
	INIT();
	struct PRODUCT *P;

	CREATE();
	UPDATE();
	VIEW_RECORD();
	EOQ(P);
	RPI(P);

	cin.get();
	return 0;
}



/**************************************MENU FUNCTIONS******************************************/


void MENU()
{
	//~~~~~~~~~~~~~~~~~~~~~YOUR UI CODE GOES IN HERE~~~~~~~~~~~~~~~~~~~~~~~
}



/***********************************END OF CODE***************************************/