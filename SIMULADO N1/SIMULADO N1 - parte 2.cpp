	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>
	#include <time.h>
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		srand(time(NULL));
		
		//Declaração de variaveis
		int i,tipoatend,origem,sexo,idade,peso,comorbidade;
		float altura,imc;
		
		//Cabeçalho
		printf ("Código   Origem    Tipo          Sex    Idade   Altura  Peso     Comorbidade                Obesidade   IMC\n");
		
		for (i=101 ; i<=280 ; i++)
		{
			//Contador
			printf ("%d",i);
			
			
			//Geração de dados para o programa
		    origem=rand()%2;
		    if (origem==0)
		    {
		    	printf ("      Macaé ");
			}
			else 
			{
				printf ("      Região");
			}
			
			
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
			
			
			sexo=rand()%2;
			if (sexo==0)
			{
			    printf ("    Fem");	
			} 
			else
			{
				printf ("    Mas");
			}
			
			
		    idade=(rand()%73)+18;
		    printf ("    %d",idade);
		    
		    
		    altura=(rand()%45)+150;
		    altura=altura/100;
		    printf ("      %.2f",altura);
		
		    
		    peso=(rand()%70)+51;
		    printf ("    %.3dKG",peso);
		    
		    
		    comorbidade=rand()%4;
		    if (comorbidade==0)
		    {
		    	printf ("    Nenhuma                ");
			}
			else if (comorbidade==1)
		    {
		    	printf ("    Cardíaco               ");
			}
			else if (comorbidade==2)
		    {
		    	printf ("    Respiratório           ");
			}
			else
		    {
		        printf ("    Cardíaco e respiratório");	
			}
			
			
			//Fórmula para calculo do IMC 
			imc=peso/(altura*altura);
			
			if (imc>=30)
		    {
		    	printf ("    Sim");
			}
			else 
			{
				printf ("    Não");
			}
			
			printf ("         %.2f\n",imc);
		}
		
		
		return 0;
	}
