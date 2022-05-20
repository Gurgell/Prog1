#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	float num1,num2,soma;
	
	printf ("Digite dois números: ");
	scanf ("%f %f",&num1,&num2);
	
	soma=(num1+num2);
	
	if (soma>20)
	{
		soma=soma+8;
		printf ("%.1f\n\n",soma);
	}
	else
	{
		soma=soma-5;
		printf ("%.1f\n\n",soma);
	}
	

	
	system ("pause");
	return 0;
}
