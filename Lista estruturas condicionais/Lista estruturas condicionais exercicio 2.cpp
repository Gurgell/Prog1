#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int a,b,soma;
	
	printf ("Digite dois valores: ");
	scanf ("%d %d",&a,&b);
	
	soma=(a+b);
	
	if (soma>10){
		printf ("%d\n\n",soma);	
    }
	
	system ("pause");
	
	
	return 0;
}
