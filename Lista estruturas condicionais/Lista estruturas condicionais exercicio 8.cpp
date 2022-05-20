#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b;
	
	printf (" Digite um valor para A e um valor para B, respectivamente: \n ");
	scanf ("%d %d",&a,&b);
	
	if (a==b){
		printf ("\n Os valores são iguais.");
	}
	if (a>b){
		printf ("\n O valor %d é maior que o valor %d\n\n",a,b);
	}
	if (b>a){
		printf ("\n O valor %d é maior que o valor %d\n\n",b,a);
	}
	
	
	
	
	system ("pause");
	return 0;

    }
