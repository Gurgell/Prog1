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
	    	printf ("  V�lei   \n");
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
	printf ("\n\nA idade m�dia dos jovens que preferem Basquete � de: %.2f\n",imb);
	
	imf=(idf/iff);
	printf ("A idade m�dia dos jovens que preferem Futebol � de: %.2f\n",imf);
	
	imv=(iv/ivv);
	printf ("A idade m�dia dos jovens que preferem V�lei � de: %.2f\n\n",imv);
	
	imfem=(im/imm);
	printf ("A idade m�dia das jovens do sexo Feminino � de: %.2f\n",imfem);
		
	immas=(ih/ihh);
	printf ("A idade m�dia dos jovens do sexo Masculino � de: %.2f\n\n",immas);
	
	
	percenthb=(qhb*0.75);
	percentmb=(qmb*0.75);
	
	percenthomemf=(quantidadehf*0.75);
	percentmulherf=(quantidademf*0.75);
	
	percenthv=(qhv*0.75);
	percentmv=(qmv*0.75);
	
	printf ("\nA porcentagem de homens que jogam Basquete � de: %.2f%%.\nA porcentagem de mulheres que jogam Basquete � de: %.2f%%.\n",percenthb,percentmb);
	
	printf ("\nA porcentagem de homens que jogam Futebol � de: %.2f%%.\nA porcentagem de mulheres que jogam Futebol � de: %.2f%%.\n",percenthomemf,percentmulherf);
	
	printf ("\nA porcentagem de homens que jogam V�lei � de: %.2f%%.\nA porcentagem de mulheres que jogam V�lei � de: %.2f%%\n.",percenthv,percentmv);
	
	return 0;
}
