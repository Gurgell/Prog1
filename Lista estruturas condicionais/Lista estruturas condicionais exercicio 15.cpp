#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	float n1,n2,FR,NF;
	
	printf ("  Digite a nota da sua N1, por favor: ");
	scanf ("%f",&n1);
	
	system ("cls");
	
	printf ("  Digite a nota da sua N2, por favor: ");
	scanf ("%f",&n2);
	
	system ("cls");
	
	printf ("  Digite a sua frequência, por favor: ");
	scanf ("%f",&FR);
	
	system ("cls");
	
	if (((n1+n2)/2>=7)&&((FR>=70))){
		printf ("  Aprovado\n\n");
	}
	
	    if ((n1+n2)/2<7){
		printf ("  Reprovado\n");
	    }
	    
	    if (FR<70){
	    	printf ("  Reprovado por falta");
	    }
	    
	    else if (((n1+n2)/2>4)&&((n1+n2)/2<7)&&(FR>70))
	    {
	    	printf ("  prova final\n");
	    	
	    	printf ("\n  Digite a sua nota da prova final: ");
			scanf ("%f",&NF);
		}
	    
		
			
			if (NF>=7)
			{
				printf ("  Aprovado na prova final");
			}
			if ((NF<7)&&(NF>0))
			{
				printf ("  Reprovado na prova final");
			}
			
	
	
	
    return 0;
	             
}
