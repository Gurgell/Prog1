#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int j,s,i,ep;
	float ibb,ib,imb,iff,idf,imf,ivv,iv,imv,ih,im,ihh,imm,imfem,immas;
	
	printf ("Jovem   Sexo       Idade   Esporte preferido\n");
	
	while (j<75){
		
		j++;
		printf ("%.2d",j);
		
	
	    s=rand()%2;
	    
	    if (s==0){
	    	printf ("      Feminino ");
	    	im=im+i;
	    	imm++;
	    	
		}
		if (s==1){
			printf ("      Masculino");
			ih=ih+i;
			ihh++;
		}
		
		
		i=(rand()%6)+12;
		printf ("  %d",i);
	
	
	    ep=(rand()%3)+1;
	    if (ep==1){
	    	printf ("      Basquete\n");
	    	ib=ib+i;
	    	ibb++;
		}
		if (ep==2){
	    	printf ("      Futebol \n");
	    	idf=idf+i;
	    	iff++;
		}
		if (ep==3){
	    	printf ("      V�lei   \n");
	    	iv=iv+i;
	    	ivv++;
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
	
	
	return 0;
}
