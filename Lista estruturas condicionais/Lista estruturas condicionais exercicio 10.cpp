#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	float salario,prestacao,slrpercent;
	
	printf ("Digite o valor do seu sal�rio bruto:\n ");
	scanf ("%f",&salario);
	
	system ("cls");
	
	printf ("Digite o valor da sua presta��o:\n ");
	scanf ("%f",&prestacao);
	
    system ("cls");
	
	slrpercent=(30*salario/100);
	
	if (prestacao<=slrpercent){
		printf ("O seu empr�stimo pode ser concedido.\n\n");
	}
	else{
		printf ("O seu empr�stimo n�o poder� ser concedido.\n\n");
	}

	
	system ("pause");
	return 0;
}
