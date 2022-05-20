#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	
	printf ("  Digite um número: ");
	scanf ("%d",&num1);
	
	if ((num1<90)&&(num1>20))
	{
		printf ("  O número digitado está compreendido entre 20 e 90.\n\n");
	}
	else 
	{
		printf ("  O número digitado não está compreendido entre 20 e 90.\n\n");
	}
	
	system ("pause");
	return 0;
}
