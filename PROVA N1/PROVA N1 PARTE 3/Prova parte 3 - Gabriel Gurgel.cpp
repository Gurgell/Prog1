#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i,tiposervico,unidadeservico,nivelcomplex,quantidadehoras;
	float cald=0,usi=0,alta=0,medcald=0,medusi=0,contusi=0,contcald=0,valorservico=0,ncvs=0,caldmaca=0,usinamaca=0,caldsantos=0,usinasantos=0,percentcaldmacae=0,percentusimacae=0,percentcaldsantos=0,percentusisantos=0,percentac=0,ac=0,tothcald=0,tothusi=0;
	char us[10],nc[10],ts[10],os[20];
	
	printf ("Ordem S.\tU.serviço\tNível complex.\tTipo serv.\tNH\tValor serv.\n");
	for (i=101;i<=250;i++)
	{
		unidadeservico=(rand()%2)+1;
		nivelcomplex=(rand()%3)+1;
	    tiposervico=(rand()%2)+1;
	    quantidadehoras=(rand()%153)+8;
	    valorservico=1200+(ncvs*quantidadehoras);
	    
	    if (unidadeservico==1)
	    {
	    	strcpy(us,"Macaé ");
	    	if (tiposervico==1)
	    	{
	    		caldmaca++;
			}
			else if (tiposervico==2)
			{
				usinamaca++;
			}
		}
		else 
		{
			strcpy(us,"Santos");
			if (tiposervico==1)
	    	{
	    		caldsantos++;
			}
			else if (tiposervico==2)
			{
				usinasantos++;
			}
		}
		
		
		if (nivelcomplex==1)
		{
			strcpy(nc,"Baixa");
			ncvs=200;
		}
		else if (nivelcomplex==2)
		{
			strcpy(nc,"Média");
			ncvs=400;
		}	
		else
		{
			alta++;
			strcpy(nc,"Alta ");
			ncvs=600;
			if (quantidadehoras>100)
			{
			    ac++;	
			}
		}
		
		
		if (tiposervico==1)
		{
			cald++;
			strcpy(ts,"Caldeiraria");
			sprintf(os,"%dCAL%d",i,nivelcomplex);
			tothcald=tothcald+quantidadehoras;
			contcald++;
		}
		else
		{
			usi++;
			strcpy(ts,"Usinagem   ");
			sprintf(os,"%dUSI%d",i,nivelcomplex);
			tothusi=tothusi+quantidadehoras;
			contusi++;
		}
		
		
		
		printf ("%s\t\t%s\t\t%s\t\t%s\t%.3d\t%8.2f\n",os,us,nc,ts,quantidadehoras,valorservico);
		
	}
	
	
	percentcaldmacae=(caldmaca*100)/cald;
	percentusimacae=(usinamaca*100)/usi;
	percentcaldsantos=(caldsantos*100)/cald;
	percentusisantos=(usinasantos*100)/usi;
	
	printf ("\n===============================================================================================\n\n");
	
	printf ("O percentual de empresas de macaé que fornecem caldeiraria é de: %.2f%%\n",percentcaldmacae);
	printf ("O percentual de empresas de macaé que fornecem usinagem é de: %.2f%%\n",percentusimacae);
	printf ("O percentual de empresas de santos que fornecem caldeiraria é de: %.2f%%\n",percentcaldsantos);
	printf ("O percentual de empresas de santos que fornecem usinagem é de: %.2f%%\n\n",percentusisantos);
	
	percentac=(ac*100)/alta;
	printf ("===============================================================================================\n\n");
	printf ("O percentual de serviços de alta complexidade com duração maior de 100 horas é de: %.2f%%\n\n",percentac);
	
	medcald=tothcald/contcald;
	medusi=tothusi/contusi;
	printf ("===============================================================================================\n\n");
	printf ("A média de horas para os serviços de caldeiraria é de: %.2f\n",medcald);
	printf ("A média de horas para os serviços de usinagem é de: %.2f\n\n",medusi);
	return 0;
}
