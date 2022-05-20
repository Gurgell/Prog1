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
	 
	 int i,tipi,cdg,sts,contap=0,contcasa=0,contloja=0,contsala=0;
	 float percentimv,contimv2=0,contnl=0,conter=0,percentnl,salamaiorvalor=0,apmaiorvalor=0,casamaiorvalor=0,lojamaiorvalor=0,svalorap,svalorcasa=0,svalorsala=0,svalorloja,mediavcasa,mediavapart,mediavsala,mediavloja,sareacasa,sareapart,sarealoja,sareasala,mediaacasa,mediaaloja,mediaapart,mediaasala;
	 char smv[50],cmv[50],apmv[50],lmv[50];
	 
	 for (i=0; i<125; i++)
	 {
	 	cdg=(rand()%651)+1250;
	 	tipi=rand()%4;
	 	imv[i].ano=(rand()%6)+2015;
	 	imv[i].mes=(rand()%12)+1;
	 	imv[i].estd=rand()%3;
	 	sts=rand()%2;
	 	
	 	if (sts==0)
		{
			strcpy(imv[i].status,"Locado    ");
		}
		else
		{
			strcpy(imv[i].status,"Não locado");
			contnl++;
			
			if (imv[i].estd==0)
			{
				conter++;
			}
			
			if (imv[i].ano-2015>2)
			{
				contimv2++;
			}
		}
	 	if (tipi==0)
	 	{
	 		strcpy (imv[i].cdgimv,"C");
	 	    strcpy (imv[i].ti,"Casa");
			imv[i].area=(rand()%151)+100;
			imv[i].valorimv=imv[i].area*10+500*imv[i].estd;
			contcasa++;
			svalorcasa=svalorcasa+imv[i].valorimv;
			sareacasa=sareacasa+imv[i].area;
			
			if (imv[i].valorimv>casamaiorvalor)
			{
				casamaiorvalor=imv[i].valorimv;
				sprintf (cmv,"%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
			}	
		}
		else if (tipi==1)
		{
			strcpy (imv[i].cdgimv,"A");
		    strcpy (imv[i].ti,"Apart");
			imv[i].area=(rand()%221)+30;
			imv[i].valorimv=imv[i].area*12+300*imv[i].estd;	
			contap++;
			svalorap=svalorap+imv[i].valorimv;
			sareapart=sareapart+imv[i].area;
			
			if (imv[i].valorimv>apmaiorvalor)
			{
				apmaiorvalor=imv[i].valorimv;
				sprintf (apmv,"%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
			}	
		}
		else if (tipi==2)
		{
			strcpy (imv[i].cdgimv,"S");
			strcpy (imv[i].ti,"Sala");
			imv[i].area=(rand()%231)+20;
			imv[i].valorimv=imv[i].area*20+300*imv[i].estd;
			contsala++;
			svalorsala=imv[i].valorimv+svalorsala;
			sareasala=sareasala+imv[i].area;
			
			if (imv[i].valorimv>salamaiorvalor)
			{
				salamaiorvalor=imv[i].valorimv;
				sprintf(smv,"%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
			}
		}
		else
		{
			strcpy (imv[i].cdgimv,"L");
			strcpy (imv[i].ti,"Loja");
			imv[i].area=(rand()%231)+20;
			imv[i].valorimv=imv[i].area*20+300*imv[i].estd;
			contloja++;
			svalorloja=svalorloja+imv[i].valorimv;
			sarealoja=sarealoja+imv[i].area;
			
			if (imv[i].valorimv>lojamaiorvalor)
			{
				lojamaiorvalor=imv[i].valorimv;
				sprintf(lmv,"%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
			}
		}
		
		
		
		
		printf ("%d%s\t%s\t%.2d/%d\t%8.2f\t%s\t%d\t%8.2f\n",cdg,imv[i].cdgimv,imv[i].ti,imv[i].mes,imv[i].ano,imv[i].area,imv[i].status,imv[i].estd,imv[i].valorimv);
		 
	 }
	 
	mediavcasa=svalorcasa/contcasa;
    mediavapart=svalorap/contap;
	mediavsala=svalorsala/contsala;
	mediavloja=svalorloja/contloja;
	
	mediaacasa=sareacasa/contcasa;
	mediaapart=sareapart/contap;
	mediaasala=sareasala/contsala;
	mediaaloja=sarealoja/contloja;
	
	
	printf ("=========================================================================\n");
	
	printf ("A média dos valores das casas é de: %.2f\n",mediavcasa);
	printf ("A média dos valores dos apartamentos é de: %.2f\n",mediavapart);
	printf ("A média dos valores das salas é de: %.2f\n",mediavsala);
	printf ("A média dos valores das lojas é de: %.2f\n",mediavloja);
	printf ("=========================================================================\n");
	
	printf ("A média das áreas das casas é de: %.2f\n",mediaacasa);
	printf ("A média das áreas dos apartamentos é de: %.2f\n",mediaapart);
	printf ("A média das áreas das salas é de: %.2f\n",mediaasala);
	printf ("A média das áreas das lojas é de: %.2f\n",mediaaloja);
	printf ("=========================================================================\n");
	
	printf ("Os imóveis de cada tipo de maior valor com seus dados são: \n\n");
	printf (cmv);
	printf (apmv);
	printf (smv);
	printf (lmv);
	printf ("=========================================================================\n");
	
	percentnl=(conter*contnl)/100;
	printf ("O percentual de imóveis não locados com estado razoavel é de: %.2f%%\n",percentnl);
	printf ("=========================================================================\n");
	
	percentimv=(contimv2*contnl)/100;
	printf ("O percentual de imóveis não locados com mais de dois anos é de: %.2f%%\n",percentimv);
	
}

