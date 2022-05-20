#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float peso,altura,imc;
	
	printf ("Digite o seu peso: ");
	scanf ("%f",&peso);
	
	system ("cls");
	
	printf ("Digite a sua altura: ");
	scanf ("%f",&altura);
	
	imc=(peso/(altura*altura));
	
	if (imc<20)
	{
		printf ("O seu IMC é: %.2f e você está abaixo do peso.\n\n",imc);
	}
	
	if ((imc>=20)&&(imc<25))
	{
		printf ("O seu IMC é: %.2f e você está com peso normal.\n\n",imc);
	}
	
	if ((imc>=25)&&(imc<30))
	{
		printf ("O seu IMC é: %.2f e você está acima do peso.\n\n",imc);
	}
	
	if ((imc>=30)&&(imc<40))
	{
		printf ("O seu IMC é: %.2f e você está obeso.\n\n",imc);
	}
	
	if (imc>40)
	{
		printf ("O seu IMC é: %.2f e você está com obesidade mórbida.\n\n",imc);
	}
	
	system ("pause");
	
	return 0;
	
}
