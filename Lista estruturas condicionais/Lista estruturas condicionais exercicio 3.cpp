#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int N;
	
	printf ("Digite um valor para N: ");
	scanf ("%d",&N);
	
	if (N>0){
		printf ("POSITIVO\n\n");
	}
	else if (N<0) {
		printf ("NEGATIVO\n\n");
	}		
	else {
		printf ("NULO\n\n");
	}
	

	
	system ("pause");
	
	return 0;
}
