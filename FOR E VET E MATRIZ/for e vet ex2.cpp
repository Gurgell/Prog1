#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i,vetor[10],media;
	
	for (i=0;i<10;i++)
	{
		vetor[i]=(rand()%101)+50;
		printf ("%d %d\n",i,vetor[i]);
		media=(vetor[i]+vetor[i])/10;
	}
	printf ("%d",media);
}
