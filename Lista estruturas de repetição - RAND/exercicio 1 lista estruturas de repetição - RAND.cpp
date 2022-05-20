#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	srand (time(NULL));
		
	int a,i,s=0,totf=0,totm=0;
	float idadem,idadef,medm,medf;
	
	printf ("Nº  IDADE  SEXO \n");
	while (a<20){
		++a;
		printf ("%.2d",a);
		
		i=(rand()%29)+17;
		printf ("  %.2d",i);
		
		s=(rand()%2);
		
		if (s==0){
			printf ("     FEMININO \n");
		    idadef=idadef+i;	
		    totf++;
		}
		if (s==1){
			printf ("     MASCULINO\n");
			idadem=idadem+i;
			totm++;
		}
	}
	
	medf=(idadef/totf);
	printf ("\nA média de idade do grupo feminino é de: %.2f.",medf);
	
	medm=(idadem/totm);
	printf ("\nA média de idade do grupo masculino é de: %.2f.",medm);
	
	return 0;
}
