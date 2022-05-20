#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int A,B,O,R;
	
	printf ("Digite dois valores: ");
	scanf ("%d %d",&A,&B);
	
	system("cls");
	
	printf ("Digite 1 para soma, 2 para subtração, 3 para divisão e 4 para multiplicação: ");
	scanf ("%d",&O);
	
	system ("cls");
	
	switch(O){
		
		case 1:
		R=(A+B);
		printf ("Você escolheu a soma entre %d e %d o resultado foi: %d",A,B,R);
		break;
		
		case 2:
		R=(A-B);
		printf ("Você escolheu a subtração entre %d e %d e o resultado foi: %d",A,B,R);
		break;
		
		case 3:
		R=(A/B);
		printf ("Você escolheu a divisão entre %d e %d e o resultado foi: %d",A,B,R);
		break;
		
		case 4:
		R=(A*B);
		printf ("Você escolheu a multiplicação entre %d e %d e o resultado foi: %d",A,B,R);
		break;	
		
		default:
			printf ("Você precisa inserir um número de 1 a 4 para que possamos identificar a operação desejada!");
			break;
		
		
	}
	return 0;
}
