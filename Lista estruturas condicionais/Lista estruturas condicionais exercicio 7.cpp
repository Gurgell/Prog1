#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int a,b;
	
	printf ("Digite dois n�meros: ");
	scanf ("%d %d",&a,&b);
	
	if (a%b==0){
		printf ("O n�mero %d � divis�vel pelo n�mero %d\n\n",a,b);
	}
	if (a%b!=0){
		printf ("O n�mero %d n�o � divis�vel pelo n�mero %d\n\n",a,b);
	}
	
	system ("pause");
	return 0;
}
