#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int a,b;
	
	printf ("Digite dois números: ");
	scanf ("%d %d",&a,&b);
	
	if (a%b==0){
		printf ("O número %d é divisível pelo número %d\n\n",a,b);
	}
	if (a%b!=0){
		printf ("O número %d não é divisível pelo número %d\n\n",a,b);
	}
	
	system ("pause");
	return 0;
}
