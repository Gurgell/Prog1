#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	
	int i, vetor[10], maiorvalor=0;
	float  media,total;
	
	for (i=0; i<10; i++)
	{
		vetor[i] = (rand()%101) + 50;
		printf ("%d\n", vetor[i]);
		total += vetor[i];
		media = total/10;
		
		if (vetor[i] > maiorvalor)
		{
			maiorvalor = vetor[i];
		}
	}
	printf ("\n\n%d   media = %f", maiorvalor,media);
}
