#include <stdio.h>
#include <stdlib.h>

 int main()
{
	char nome[35];
	float altura,peso;
	
	
	printf (" \n Bem vindo ao parque aquatico, meu nome e Carlos e eu sou o fiscal desse toboga.\n");
	printf (" Qual o seu nome? ");
	fgets(nome,35,stdin);
	
	system("cls");
	
	printf ("\n E um prazer lhe conhecer, %s\n",nome);
	
    printf (" Preciso que responda as perguntas a seguir para a sua propria seguranca no brinquedo:\n");
	
	printf ("\n Qual a sua altura? ");
	scanf ("%f",&altura);
	
	printf (" Qual o seu peso? ");
	scanf ("%f",&peso);
	
	
	
	if (peso > 120  or  altura < 1.40){
		printf("\n Desculpe, %s. Infelizmente voce nao pode descer nesse toboga para a sua propria segurança.\n\n\n\n",nome);
	}
	else{
		printf("\n Voce atende aos requisitos para descer nesse toboga. Se divirta!!\n\n\n\n");
	}
	
	system("pause");
	
return 0;
	}	

