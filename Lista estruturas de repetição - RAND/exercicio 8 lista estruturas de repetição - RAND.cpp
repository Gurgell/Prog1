#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//    Um hospital est� fazendo um estudo referente um conjunto de 100 pacientes atendidos em sua
//    emerg�ncia, para isso fa�a um programa que gere aleatoriamente o tipo de atendimento(0� Clinica
//    Geral ou 1 � Ortopedia) a origem (0 � Particular ou 1 � Plano de Sa�de) e a idade dos pacientes(0- 90).
//    Calcule o percentual de atendimentos de cada tipo, a m�dia de idade dos pacientes de cada origem e o
//    percentual de pacientes da Cl�nica geral com idade superior a 60 ano. 

int main (){
	
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    
    int cont,tipoatend,origem,idade;
    float percentclig,totclig,percentortop,totortop,idadepart,idadeplano,totidadepart,totidadeplano,medidadepart,medidadeplano,totidadesup,percentidadesup;
    
    
    printf ("PACIENTE   TP.  ATENDIMENTO   ORIGEM            IDADE\n");
    printf ("--------------------------------------------------------\n");
    
    while (cont<100){
    	
    	cont++;
    	printf ("%.3d",cont);
    	
    	
    	tipoatend=rand()%2;
    	
    	if (tipoatend==0){
    		printf("        Cl�nica geral");
			totclig++;
				
			    if(idade>60){
				totidadesup++;
			    }
		}
		
		if (tipoatend==1){
			printf("        Ortopedia    ");
			totortop++;
		}
		
		
		origem=rand()%2;
		
		if(origem==0){
		    printf("      Particular    ");	
		    idadepart=idadepart+idade;
		    totidadepart++; 
		}
		if(origem==1){
			printf("      Plano de sa�de");
			idadeplano=idadeplano+idade;
			totidadeplano++;
		}
		
		
		idade=rand()%91;
		printf ("    %.2d\n",idade);
		
		
		
	}
	
	percentclig=(totclig*cont)/100;
	percentortop=(totortop*cont)/100;
	
	printf ("\n======================================================================================\n");
	printf ("\nO percentual de atendimentos para paciencias da clinica geral � de: %.1f%%.\n",percentclig);
	printf ("O percentual de atendimentos para paciencias da ortopedia � de: %.1f%%.\n",percentortop);
	
	printf ("\n======================================================================================\n");
	
	medidadepart=idadepart/totidadepart;
	medidadeplano=idadeplano/totidadeplano;
	
	printf ("\nA m�dia de idade dos paciencias de origem particular � de: %.2f.\n",medidadepart);
	printf ("A m�dia de idade dos paciencias originarios do plano de sa�de � de: %.2f.\n",medidadeplano);
	
	printf ("\n======================================================================================\n");
	
	percentidadesup=(totidadesup*totclig)/100;
	
	printf ("\nO percentual de pacientes da clinica geral com idade superior � 60 anos � de: %.2f%%.",percentidadesup);
	
	
	return 0;
}
