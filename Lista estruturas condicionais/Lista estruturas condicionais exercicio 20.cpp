#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf ("  Digite a sua idade: ");
	scanf ("%d",&idade);
	
	system ("cls");
	
	    printf ("\n  Categoria    Idade\n");
	if ((idade>=5)&&(idade<=7))
	{
	    printf ("  Infantil A   %d\n\n",idade);	
	}
	
	if ((idade>=8)&&(idade<=10))
	{
	    printf ("  Infantil B   %d\n\n",idade);	
	}
	
	if ((idade>=11)&&(idade<=13))
	{
	    printf ("  Juvenil A    %d\n\n",idade);
	}
	
	if ((idade>=14)&&(idade<=17))
	{
	    printf ("  Juvenil B    %d\n\n",idade);	
	}
	
	if (idade>=18)
	{
		printf ("  Sênior       %d\n\n",idade);
	}
	
	system ("pause");
	return 0;
}
