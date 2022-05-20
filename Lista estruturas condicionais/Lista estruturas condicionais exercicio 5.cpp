	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	int main (){
	setlocale (LC_ALL,"Portuguese");	
	int num1;
	
	printf ("Digite um número: ");
	scanf ("%d",&num1);
	
	if (num1%3==0){
		printf ("O número %d é multiplo de 3.\n\n",num1);
	}
	if (num1%3!=0){
		printf ("O número %d não é múltiplo de 3.\n\n",num1);
	}
			
		system ("pause");
		return 0;
	}
