#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
    setlocale(LC_ALL,"Portuguese");
    
    float saldom,valorcredito;
    
    printf ("Digite o valor do seu saldo médio anual: ");
    scanf("%f",&saldom);
    
    system("cls");
    
    if (saldom<=500)
    {
    	printf ("Seu saldo é de %.2f e você não tem direito a crédito.",saldom);
	}
	
	else if ((saldom>500)&&(saldom<=1000))
	{
		printf (" Seu saldo médio anual é de: %.2f.\n",saldom);
		saldom=(saldom+(0.02*saldom));
		valorcredito=((30*saldom)/100);
		printf (" O seu saldo com juros de 2%% é de: %.2f e você tem direito a um crédito no valor de: %.2f. ",saldom,valorcredito);
	}
	
	else if ((saldom>1000)&&(saldom<=3000))
	{
		printf (" Seu saldo médio anual é de: %.2f.\n",saldom);
	    saldom=(saldom+(0.02*saldom));
		valorcredito=((40*saldom)/100);
		printf (" O seu saldo com juros de 2%% é de: %.2f e você tem direito a um crédito no valor de: %.2f. ",saldom,valorcredito);	
	}
	
	else if (saldom>3000)
	{
		printf (" Seu saldo médio anual é de: %.2f.\n",saldom);
		saldom=(saldom+(0.02*saldom));
		valorcredito=((50*saldom)/100);
		printf (" O seu saldo com juros de 2%% é de: %.2f e você tem direito a um crédito no valor de: %.2f. ",saldom,valorcredito);
	}
	
	
	
    return 0;	
}

	

