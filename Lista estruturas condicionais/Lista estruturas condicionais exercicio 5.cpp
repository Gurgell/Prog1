	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	int main (){
	setlocale (LC_ALL,"Portuguese");	
	int num1;
	
	printf ("Digite um n�mero: ");
	scanf ("%d",&num1);
	
	if (num1%3==0){
		printf ("O n�mero %d � multiplo de 3.\n\n",num1);
	}
	if (num1%3!=0){
		printf ("O n�mero %d n�o � m�ltiplo de 3.\n\n",num1);
	}
			
		system ("pause");
		return 0;
	}
