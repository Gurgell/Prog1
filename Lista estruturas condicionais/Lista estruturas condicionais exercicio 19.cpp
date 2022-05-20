#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf ("  Digite a sua idade e lhe informarei a sua classe eleitoral: ");
	scanf ("%d",&idade);
	
	if (idade<16)
	{
		printf ("  Não eleitor.\n\n");
	}
	
	if (((idade>=16)&&(idade<18))||(idade>64))
	{
		printf ("  Eleitor facultativo.\n\n");
	}
	
	if ((idade>=18)&&(idade<65))
	{
		printf ("  Eleitor obrigatório.\n\n");
	}
	
	system ("pause");
	
	return 0;
}
