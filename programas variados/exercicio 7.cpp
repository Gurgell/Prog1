#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int AN,P,I,AT;
	char N[50];
	float A,IMC;
	
	printf (" Digite o seu nome: ");
	fgets(N,50,stdin);
	
	system("cls");
	
	printf (" Bem vindo, %s",N);
	printf ("\n Digite o seu ano de nascimento: ");
	scanf ("%d",&AN);
	
	printf ("\n Digite o seu peso: ");
	scanf ("%i",&P);
	
	printf ("\n Digite a sua altura ");
	scanf ("%f",&A);
	
	AT=2021;
	I=AT-AN;
	IMC=P/(A*A);
	
	
	printf ("\n Voce tem %d anos de idade e seu IMC e de: %.2f\n\n",I,IMC);
	
	system ("\n\npause");
	

	
	return 0;
}
