#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	
	printf ("  Digite um n�mero: ");
	scanf ("%d",&num1);
	
	if ((num1<90)&&(num1>20))
	{
		printf ("  O n�mero digitado est� compreendido entre 20 e 90.\n\n");
	}
	else 
	{
		printf ("  O n�mero digitado n�o est� compreendido entre 20 e 90.\n\n");
	}
	
	system ("pause");
	return 0;
}
