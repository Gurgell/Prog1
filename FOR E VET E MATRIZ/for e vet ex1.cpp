#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

int i,vetor[10],maiorValor=0,maiorIndice;

    for (i=0;i<10;i++)
    {
    	vetor[i]=rand()%50;
    	printf ("%d\n",vetor[i]);
    	
    	if (vetor[i]>maiorValor)
    	{
    	maiorValor=vetor[i];
    	maiorIndice=i;
        }
	}
	printf ("\níndice: %d // Maior valor: %d",maiorIndice,maiorValor);

	
}
