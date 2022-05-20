#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int A;
	
	printf ("Digite um numero de 1 a 7: ");
	scanf ("%d",&A);
	
	switch(A){
		
		
		case 1:
		printf ("Domingo");
		break;
		
		case 2:
		printf ("Segunda");
		break;
		
		case 3:
		printf("Terça");
		break;
		
		case 4:
		printf("Quarta");
		break;
		
		case 5:
		printf ("Quinta");
		break;
		
		case 6:
		printf ("Sexta");
		break;
		
		case 7:
		printf ("Sabado");
		break;	
		
		default:
			printf ("Voce precisa inserir um valor de 1 a 7");
			break;
		
		
	}
	return 0;
}
