#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	
	int i,j;
	float vetor[10][4]={0};
	
	for (i=0; i<10; i++)
	{
	    for (j=0; j<4; j++)
		{
			
			printf ("%d\t", vetor[i][j]);
		}
	printf ("\n\n");
			
	}
}
