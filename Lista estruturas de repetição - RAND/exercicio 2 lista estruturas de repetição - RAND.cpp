	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <time.h>
	
	int main (){
		srand(time(NULL));
		setlocale(LC_ALL,"Portuguese");
		
		int no;
		float spg,p,lp,mpg,lp1,lp2,lp1tot,lp2tot,mlp1,mlp2;
		
		printf ("OP  PRODU��O  L. DE PRODU��O \n"); 
		
		while (no<=49){
			no++;
			printf ("%.2d",no);
			
		p=(rand()%231)+120;
		printf ("  %.0f",p);
		
		lp=(rand()%2)+1;
		printf ("       %.0f\n",lp);
		
		spg=spg+p;
		
		
		if (lp==1){
		    lp1=lp1+1;
		    lp1tot=lp1tot+p;	
		}
		if(lp==2){
			lp2=lp2+1;
			lp2tot=lp2tot+p;
		}
		}
		
		
		
		mpg=spg/50;
		printf ("\nA m�dia da produ��o geral � de: %.2f.\n",mpg);
		
		mlp1=lp1tot/lp1;
		mlp2=lp2tot/lp2;
		
		printf ("\nA m�dia da linha de produ��o 1 � de: %.2f.\n",mlp1);
		printf ("A m�dia da linha de produ��o 2 � de: %.2f.",mlp2);
		
		
		
		
		
		return 0;
	}
