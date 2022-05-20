#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,c;
	
	printf ("Digite três valores e eu lhe direi se esses valores podem ser os lados de um triângulo: ");
	scanf ("%d %d %d",&a,&b,&c);
	
	if (((a<b+c)&&(b<a+c)&&(c<a+b)))
	{
		printf ("Os valores %d,%d e %d podem ser os lados de um triângulo.\n\n",a,b,c);
	}
	else{
		printf ("Não podem ser os lados de um triângulo.\n\n");
	}
	
	system ("pause");
	return 0;
}
