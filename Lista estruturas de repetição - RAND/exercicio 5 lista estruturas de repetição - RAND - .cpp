#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int j,s,i,ep;
	float ibb,ib,imb,iff,idf,imf,ivv,iv,imv,ih,im,ihh,imm,imfem,immas,qhv=0,quantidadehf=0,quantidademf=0,qmv=0,qhb=0,qmb=0,percenthb,percentmb,percenthv,percentmv,percenthomemf,percentmulherf;
	
	while (j<75){
		
		j++;
		printf ("%.2d",j);
		
	
	    s=rand()%2;
	    
	    if (s==0){
	    	printf ("  Feminino ");
	    	im=im+i;
	    	imm++;
	    	
		}
		if (s==1){
			printf ("  Masculino");
			ih=ih+i;
			ihh++;
		}
		
		
		i=(rand()%6)+12;
		printf ("  %d",i);
	
	
	    ep=(rand()%3)+1;
	    if (ep==1){
	    	printf ("  Basquete\n");
	    	ib=ib+i;
	    	ibb++;
		}
		if (ep==2){
	    	printf ("  Futebol \n");
	    	idf=idf+i;
	    	iff++;
		}
		if (ep==3){
	    	printf ("  Vôlei   \n");
	    	iv=iv+i;
	    	ivv++;
	    }
	    
	    
	    if ((s==0)&&(ep==1)){
	    	qmb++;
		}	
		if ((s==1)&&(ep==1)){
	    	qhb++;
		}	
		
	    if ((s==0)&&(ep==2)){
	    	quantidadehf++;
		}
		if ((s==1)&&(ep==2)){
	    	quantidademf++;
		}
			
		
		if ((s==0)&&(ep==3)){
	    	qmv++;
		}	
		if ((s==1)&&(ep==3)){
	    	qhv++;
		}	
		
		
		
	}
	
	imb=(ib/ibb);
	printf ("\n\nA idade média dos jovens que preferem Basquete é de: %.2f\n",imb);
	
	imf=(idf/iff);
	printf ("A idade média dos jovens que preferem Futebol é de: %.2f\n",imf);
	
	imv=(iv/ivv);
	printf ("A idade média dos jovens que preferem Vôlei é de: %.2f\n\n",imv);
	
	imfem=(im/imm);
	printf ("A idade média das jovens do sexo Feminino é de: %.2f\n",imfem);
		
	immas=(ih/ihh);
	printf ("A idade média dos jovens do sexo Masculino é de: %.2f\n\n",immas);
	
	
	percenthb=(qhb*0.75);
	percentmb=(qmb*0.75);
	
	percenthomemf=(quantidadehf*0.75);
	percentmulherf=(quantidademf*0.75);
	
	percenthv=(qhv*0.75);
	percentmv=(qmv*0.75);
	
	printf ("\nA porcentagem de homens que jogam Basquete é de: %.2f%%.\nA porcentagem de mulheres que jogam Basquete é de: %.2f%%.\n",percenthb,percentmb);
	
	printf ("\nA porcentagem de homens que jogam Futebol é de: %.2f%%.\nA porcentagem de mulheres que jogam Futebol é de: %.2f%%.\n",percenthomemf,percentmulherf);
	
	printf ("\nA porcentagem de homens que jogam Vôlei é de: %.2f%%.\nA porcentagem de mulheres que jogam Vôlei é de: %.2f%%\n.",percenthv,percentmv);
	
	return 0;
}
