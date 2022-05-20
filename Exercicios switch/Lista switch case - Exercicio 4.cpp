#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int A;
	float C,T;

	printf ("Bem vindo a nossa loja!\nPor favor, digite o valor total de sua compra em R$: ");
	scanf ("%f",&C);
	
	system("cls");
	
	printf ("Para sua identificação, digite 1 caso seja cliente comum, 2 para funcionário e 3 para cliente vip: ");
	scanf ("%d",&A);
	
	system ("cls");
	
	switch(A){
		
		case 1: 
		printf ("O valor total a ser pago é de: R$%.2f",C);
		break;
		
		case 2: 
		T=(C-((10*C)/100));
		printf ("O valor total a ser pago é de: R$%.2f",T);
		break;
		
		case 3: 
		T=(C-((5*C)/100));
		printf ("O valor total a ser pago é de: R$%.2f",T);
		break;
		
		default:
			printf ("Você precisa inserir um valor de 1 a 3 para que possamos identifica-lo.");
			break;
			}
			
	return 0;
}
