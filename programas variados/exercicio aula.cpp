#include <stdio.h>
#include <stdlib.h>


int main ()
{

	char N[50];
	float A,P,IMC;
	
	printf (" Bom dia! Qual o seu nome? ");
	fgets(N,50,stdin);
	
	system("cls");
	
	printf (" Bem vindo, %s",N);
	
	printf ("\n Qual o seu peso? ");
	scanf ("%f",&P);
	
	printf ("\n Qual a sua altura? ");
	scanf ("%f",&A);
	
	IMC=P/(A*A);
	
		printf ("\n O seu IMC e de: %.1f\n\n",IMC);
		
	
	system ("\n\npause");
	

	
	return 0;
}
