	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>
	
	int main (){
		
		setlocale(LC_ALL,"PORTUGUESE");
		
		int num1;
		
		printf (" Digite um número e eu lhe direi se ele é divisível por 3 e por 7: ");
		scanf ("%d",&num1);
		
		if ((num1%3==0)&&(num1%7==0)){
			printf ("\n O número %d é divisível por 3 e 7.\n\n",num1);
		}
		else{ 	
	    printf ("\n O número %d não é divisível por 3 e 7.\n\n",num1);
	}
			system ("pause");
			return 0;	
	}
