#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,c;
	
	printf ("Digite tr�s valores e eu lhe direi se esses valores podem ser os lados de um tri�ngulo: ");
	scanf ("%d %d %d",&a,&b,&c);
	
	if (((a<b+c)&&(b<a+c)&&(c<a+b)))
	{
		printf ("Os valores %d,%d e %d podem ser os lados de um tri�ngulo e ele � um tri�ngulo ",a,b,c);

	if (((a!=b)&&(b!=c)&&(a!=c)))
	{
		printf ("Escaleno.\n\n");
	}
	if (((a==b)&&(a==c)&&(b==c)))
	{
		printf ("Equil�tero.\n\n");
	}
	if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
	{
		printf ("Is�sceles\n\n");
	}
	}
		else{
		printf ("N�o podem ser os lados de um tri�ngulo.\n\n");
	}

	
	system ("pause");
	return 0;
}
