#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	float salario,prestacao,slrpercent;
	
	printf ("Digite o valor do seu salário bruto:\n ");
	scanf ("%f",&salario);
	
	system ("cls");
	
	printf ("Digite o valor da sua prestação:\n ");
	scanf ("%f",&prestacao);
	
    system ("cls");
	
	slrpercent=(30*salario/100);
	
	if (prestacao<=slrpercent){
		printf ("O seu empréstimo pode ser concedido.\n\n");
	}
	else{
		printf ("O seu empréstimo não poderá ser concedido.\n\n");
	}

	
	system ("pause");
	return 0;
}
