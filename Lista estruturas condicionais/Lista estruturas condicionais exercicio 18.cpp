#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf ("  Por favor digite a sua idade: ");
	scanf ("%d",&idade);
	
	if (idade<18)
	{
		printf ("  Menor de idade.\n\n");
	}
	
	if ((idade>=18)&&(idade<65))
	{
		printf ("  Maior de idade.\n\n");
	}
	
	if (idade>=65)
	{
		printf ("  Idoso.\n\n");
	}
	
	system ("pause");
	
	return 0;
}
