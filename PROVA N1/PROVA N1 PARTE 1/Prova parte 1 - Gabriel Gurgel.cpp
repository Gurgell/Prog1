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
	char us[10],nc[10],ts[10],os[20];
	
	printf ("Ordem S.  U. serviço  Nível complex.  Tipo serv.   Horas gastas\n");
	for (i=101;i<=250;i++)
	{
		unidadeservico=(rand()%2)+1;
		nivelcomplex=(rand()%3)+1;
	    tiposervico=(rand()%2)+1;
	    quantidadehoras=(rand()%153)+8;
	    
	    if (unidadeservico==1)
	    {
	    	strcpy(us,"Macaé ");
		}
		else 
		{
			strcpy(us,"Santos");
		}
		
		
		if (nivelcomplex==1)
		{
			strcpy(nc,"Baixa");
		}
		else if (nivelcomplex==2)
		{
			strcpy(nc,"Média");
		}	
		else
		{
			strcpy(nc,"Alta ");
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
		
		printf ("%s   %s      %s           %s  %.3d\n",os,us,nc,ts,quantidadehoras);
		
	}
	
	return 0;
}
