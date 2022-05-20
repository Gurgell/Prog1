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
	float valorservico=0,ncvs=0,caldmaca=0,usinamaca=0,caldsantos=0,usinasantos=0,percentcaldmacae=0,percentusimacae=0,percentcaldsantos=0,percentusisantos=0;
	char us[10],nc[10],ts[10],os[20];
	
	printf ("Ordem S.  U. serviço  Nível complex.  Tipo serv.   NH   Valor serv.\n");
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
			strcpy(nc,"Alta ");
			ncvs=600;
		}
		
		
		if (tiposervico==1)
		{
			strcpy(ts,"Caldeiraria");
			sprintf(os,"%dCAL%d",i,nivelcomplex);
		}
		else
		{
			strcpy(ts,"Usinagem   ");
			sprintf(os,"%dUSI%d",i,nivelcomplex);
		}
		
		
		
		printf ("%s   %s      %s           %s  %.3d  %.0f\n",os,us,nc,ts,quantidadehoras,valorservico);
		
	}
	
	
	percentcaldmacae=(caldmaca*100)/150;
	percentusimacae=(usinamaca*100)/150;
	percentcaldsantos=(caldsantos*100)/150;
	percentusisantos=(usinasantos*100)/150;
	
	printf ("=========================================================================\n");
	
	printf ("O percentual de empresas de macaé que fornecem caldeiraria é de: %.2f%%\n",percentcaldmacae);
	printf ("O percentual de empresas de macaé que fornecem usinagem é de: %.2f%%\n",percentusimacae);
	printf ("O percentual de empresas de santos que fornecem caldeiraria é de: %.2f%%\n",percentcaldsantos);
	printf ("O percentual de empresas de santos que fornecem usinagem é de: %.2f%%",percentusisantos);
	
	return 0;
}
