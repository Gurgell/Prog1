	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>
	
	int main (){
		
		setlocale(LC_ALL,"PORTUGUESE");
		
		int num1;
		
		printf (" Digite um n�mero e eu lhe direi se ele � divis�vel por 3 e por 7: ");
		scanf ("%d",&num1);
		
		if ((num1%3==0)&&(num1%7==0)){
			printf ("\n O n�mero %d � divis�vel por 3 e 7.\n\n",num1);
		}
		else{ 	
	    printf ("\n O n�mero %d n�o � divis�vel por 3 e 7.\n\n",num1);
	}
			system ("pause");
			return 0;	
	}
