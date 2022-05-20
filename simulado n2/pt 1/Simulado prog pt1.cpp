#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));

     struct imovel
     {
     	char cdgimv[20];
     	int cdg;
        char ti[10];
        int ano;
        int mes;
        float area;
        int estd;
        char status[10];
        float valorimv;   
	 }imv[125];
	 
	 printf ("Codigo\tTipo\tData\t  Area\t\tStatus\t\tEstado\t Valor\n");
	 
	 int i,tipi,cdg,sts;
	 
	 for (i=0; i<125; i++)
	 {
	 	cdg=(rand()%651)+1250;
	 	tipi=rand()%4;
	 	imv[i].ano=(rand()%6)+2015;
	 	imv[i].mes=(rand()%12)+1;
	 	imv[i].estd=rand()%3;
	 	sts=rand()%2;
	 	
	 	if (tipi==0)
	 	{
	 		strcpy (imv[i].cdgimv,"C");
	 	    strcpy (imv[i].ti,"Casa");
			imv[i].area=(rand()%151)+100;
			imv[i].valorimv=imv[i].area*10+500*imv[i].estd;
		}
		else if (tipi==1)
		{
			strcpy (imv[i].cdgimv,"A");
		    strcpy (imv[i].ti,"Apart");
			imv[i].area=(rand()%221)+30;
			imv[i].valorimv=imv[i].area*12+300*imv[i].estd;	
		}
		else if (tipi==2)
		{
			strcpy (imv[i].cdgimv,"S");
			strcpy (imv[i].ti,"Sala");
			imv[i].area=(rand()%231)+20;
			imv[i].valorimv=imv[i].area*20+300*imv[i].estd;
		}
		else
		{
			strcpy (imv[i].cdgimv,"L");
			strcpy (imv[i].ti,"Loja");
			imv[i].area=(rand()%231)+20;
			imv[i].valorimv=imv[i].area*20+300*imv[i].estd;
		}
		
		if (sts==0)
		{
			strcpy(imv[i].status,"Locado    ");
		}
		else
		{
			strcpy(imv[i].status,"N�o locado");
		}
		
		
		printf ("%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
	 }
	 
	 
}

