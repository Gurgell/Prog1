#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int A,B,O,R;
	
	printf ("Digite dois valores: ");
	scanf ("%d %d",&A,&B);
	
	system("cls");
	
	printf ("Digite 1 para soma, 2 para subtra��o, 3 para divis�o e 4 para multiplica��o: ");
	scanf ("%d",&O);
	
	system ("cls");
	
	switch(O){
		
		case 1:
		R=(A+B);
		printf ("Voc� escolheu a soma entre %d e %d o resultado foi: %d",A,B,R);
		break;
		
		case 2:
		R=(A-B);
		printf ("Voc� escolheu a subtra��o entre %d e %d e o resultado foi: %d",A,B,R);
		break;
		
		case 3:
		R=(A/B);
		printf ("Voc� escolheu a divis�o entre %d e %d e o resultado foi: %d",A,B,R);
		break;
		
		case 4:
		R=(A*B);
		printf ("Voc� escolheu a multiplica��o entre %d e %d e o resultado foi: %d",A,B,R);
		break;	
		
		default:
			printf ("Voc� precisa inserir um n�mero de 1 a 4 para que possamos identificar a opera��o desejada!");
			break;
		
		
	}
	return 0;
}
