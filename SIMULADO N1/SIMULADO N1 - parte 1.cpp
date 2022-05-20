#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i,tipoatend,origem,sexo,idade;
	
	for (i=101 ; i<=280 ; i++)
	{
		//Contador
		printf ("%d",i);
		
		//Origem
	    origem=rand()%2;
	    if (origem==0)
	    {
	    	printf ("   Macaé ");
		}
		else 
		{
			printf ("   Região");
		}
		
		//Tipos de atendimento
		tipoatend=rand()%3;
		if (tipoatend==0)
		{
			printf ("    Particular");
		}
		else if (tipoatend==1)
		{
			printf ("    Plano     ");
		}
		else 
		{
			printf ("    SUS       ");
		}
		
		//Sexo
		sexo=rand()%2;
		if (sexo==0)
		{
		    printf ("    Fem");	
		} 
		else
		{
			printf ("    Mas");
		}
		
	    idade=rand()%73;
		printf ("   %d",idade);	
	
	}
	
	
	return 0;
}
