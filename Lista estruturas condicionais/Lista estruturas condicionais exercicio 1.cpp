#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num;
	
	printf ("  Digite um número: ");
	scanf ("%f",&num);
	
	if (num>20){
		printf ("\n  %.1f\n\n\n",num);
	}
	
	system ("pause");
	

	return 0;
}
