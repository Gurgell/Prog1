#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int an,at,idade;
	char nome[41];
	
	at=2020;
	
	
	printf ("Digite o seu nome: ");
	fgets (nome,41,stdin);
	
	printf ("\nDigite o seu ano de nascimento: ");
	scanf ("%d",&an);
	
	idade=at-an;
	
	printf ("\nMinha idade em %d e de: %d\n\n",at,idade);
	
	system ("pause");
	
	return 0;
}
