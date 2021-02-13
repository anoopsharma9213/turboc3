//Consists all the declarations and header files
#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>

FILE *FP;



class graphics{
	       char ch[6];
	       int gd,gm,i,j,k,l,m,x,ch1;
	public: graphics();
		~graphics();
		void begin();
		void lock();
		void end();
		void select();
		void password();
		void credit();
	      }G;



class PRODUCT{
	      char NAME[20];
	      unsigned long int ID;
	      float UCP,FOC,_EOQ,_RPI,QHC,QOC,TQC,DEMAND,SS;
	      unsigned int HC,UNIT_SALES[24],QTR_SALES[8],LT,UNITS,CATAGORY;
       public:
	      void CREATE();
	      void DELETE();
	      void UPDATE();
	      void VIEW_RECORD();
	      void FORECAST();
	      void MA(PRODUCT *P);
	      void SI(PRODUCT *P);
	      void EOQ(PRODUCT *P);
	      void RPI(PRODUCT *P);
	     };

class NOTE{
	    char _NOTE[500];
     public:
	    void REMINDER();
	    void VIEW_REMINDER();
	    void CLEAR_REMINDER();
	  };

class BEGIN:public PRODUCT,public NOTE{
	    PRODUCT *P;
	    void WARE_MENU();
	    void RPI_MENU();
	    void EOQ_MENU();
     public:
	    friend void graphics::select();
	   };
