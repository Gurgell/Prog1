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
		printf ("O seu IMC �: %.2f e voc� est� abaixo do peso.\n\n",imc);
	}
	
	if ((imc>=20)&&(imc<25))
	{
		printf ("O seu IMC �: %.2f e voc� est� com peso normal.\n\n",imc);
	}
	
	if ((imc>=25)&&(imc<30))
	{
		printf ("O seu IMC �: %.2f e voc� est� acima do peso.\n\n",imc);
	}
	
	if ((imc>=30)&&(imc<40))
	{
		printf ("O seu IMC �: %.2f e voc� est� obeso.\n\n",imc);
	}
	
	if (imc>40)
	{
		printf ("O seu IMC �: %.2f e voc� est� com obesidade m�rbida.\n\n",imc);
	}
	
	system ("pause");
	
	return 0;
	
}
