#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

        //Dado o exercício 6 calcule a média de dias de atraso para as OS’s de cada tipo quando houver e o
        //percentual de OS’s independente do tipo entregues antes do prazo.


int main (){
	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	int OS=0,diasprev,diasg,tpser,at,mt=0,osmt;
	float manu,repar,manu1,repar1,percentmanufp,percentreparfp;  
	
	printf("OS     DIAS PREVISTOS   DIAS GASTOS   TIPO DE SERVIÇO\n");
	
	while (OS<250){
		OS++;
		printf ("%d",OS+1353);
		
		
	diasprev=(rand()%11);
	printf ("   %.2d",diasprev);  //e o número da OS com maior atraso	

	
	diasg=(rand()%16);
	printf ("               %.2d",diasg);
	
	
	tpser=(rand()%2)+1;
	if(tpser==1){
		printf ("            Manutenção\n");
		manu1++;
	}
	
	if(tpser==2){
		printf ("            Reparo    \n");
		repar1++;
	}
	
	
	if ((tpser==1)&&(diasg>diasprev)){
		manu++;
	}
	
	if ((tpser==2)&&(diasg>diasprev)){
		repar++;
    } 
	
    at=diasg-diasprev;
    if (at>mt){
	  	mt=at;
	  	osmt=OS+1353;
	  }
	
	}	
	

	
	percentmanufp=(manu*manu1)/100;
	percentreparfp=(repar*repar1)/100;
	
	printf ("\n\nO percentual de serviços de manutenção entregues fora do prazo foram de: %.1f%%.\n",percentmanufp);
	printf ("A quantidade de serviços de reparo atrasados foram de: %.1f%%.",percentreparfp);
	
	printf ("\nA OS de maior atraso foi a %d e o atraso foi de: %d",osmt,mt);
	
	
	return 0;
}
