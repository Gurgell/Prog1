	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>
	int main(){
		setlocale (LC_ALL,"Portuguese");
		int num1;
		
		printf ("Digite um n�mero: ");
		scanf ("%d",&num1);
		
		if (num1%5==0){
			printf ("O n�mero %d � divis�vel por 5\n\n",num1);
		}
		if (num1%5!=0){
			printf ("O n�mero %d n�o � divis�vel por 5\n\n",num1);
		}
		
		
		system ("pause");
		return 0;
	}
