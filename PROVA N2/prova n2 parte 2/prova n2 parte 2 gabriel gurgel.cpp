#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	struct levantamento
	{
	    char codimv[20];
		char bairro[20];
		char tipo[15];
		int moradores;
		char interesse[7];
		char rede[8];
		float conmes;
		float conmor;
		
	}levant[127];
	
	int i,mat=199,bai,tp,inte,rd,conbot,conttalvez=0,contexist=0,contninte=0,contapntem=0,contap=0,contaptem=0;
	float maiorconsu=0,consugeral=0,medconsugeral=0,consutalvez=0,medconsutalvez=0,percentninte,percentapntem,percentaptem;
	char maiorconsumo[60];
	
    printf ("Código\tbairro\t\tTipo\t\tMoradores\tInteresse\tRede\t\tConMês\tConMo\n");
    
	for (i=0; i<127; i++)
	{
		mat++;
		bai=(rand()%3)+1;
		tp=rand()%2;
		levant[i].moradores=(rand()%7)+1;
		inte=rand()%3;
		rd=rand()%2;
		conbot=(rand()%19)+6;
		levant[i].conmes=(float)conbot/12;
		levant[i].conmor=levant[i].conmes/levant[i].moradores;
		
		consugeral=consugeral+levant[i].conmes;
		
		if (bai==1)
		{
		    strcpy (levant[i].bairro,"Visconde  ");
		    sprintf (levant[i].codimv,"%dVIS",mat);
		}
		else if (bai==2)
		{
			strcpy (levant[i].bairro,"Imboassica");
		    sprintf (levant[i].codimv,"%dIMB",mat);
		}
		else
		{
			strcpy (levant[i].bairro,"Aeroporto ");
		    sprintf (levant[i].codimv,"%dAER",mat);
		}
		
		if (tp==0)
		{
			strcpy (levant[i].tipo,"Casa       ");
		}
		else 
		{
			strcpy (levant[i].tipo,"Apartamento");
			contap++;
		}
		
		if (inte==0)
		{
			strcpy (levant[i].interesse,"Não   ");
			contninte++; 
		}
		else if (inte==1)
		{
			strcpy (levant[i].interesse,"Sim   ");
		}
		else
		{
			strcpy (levant[i].interesse,"Talvez");
			conttalvez++;
			consutalvez=consutalvez+levant[i].conmes;
		}
		
		if (rd==0)
		{
		    strcpy(levant[i].rede,"Existe    ");
			if (inte==0)
			{
				contexist++; 
			}
			if (tp==1)
			{
				contaptem++;
			}
		}
		else
		{
			strcpy(levant[i].rede,"Não existe");
			if (tp==1)
			{
				contapntem++;
			}
		}
		
		if (levant[i].conmes>maiorconsu)
		{
			maiorconsu=levant[i].conmes;
			sprintf (maiorconsumo,"%s\t%s\t%s\t%d\t\t%s\t\t%s\t%.2f\t%.2f",levant[i].codimv,levant[i].bairro,levant[i].tipo,levant[i].moradores,levant[i].interesse,levant[i].rede,levant[i].conmes,levant[i].conmor);
		}
		
		printf ("%s\t%s\t%s\t%d\t\t%s\t\t%s\t%.2f\t%.2f\n",levant[i].codimv,levant[i].bairro,levant[i].tipo,levant[i].moradores,levant[i].interesse,levant[i].rede,levant[i].conmes,levant[i].conmor);
	}
	printf ("\n=======================================================================================================\n");
	
	printf ("O pesquisado de maior consumo com seus dados: %.2f\n\n",maiorconsu);
	printf ("%s",maiorconsumo);
	
	printf ("\n=======================================================================================================\n\n");
	
	medconsugeral=consugeral/127;
	medconsutalvez=consutalvez/conttalvez;
	printf ("A média de consumo geral é de: %.2f\n",medconsugeral);
	printf ("A média de consumo com interesse talvez é de: %.2f",medconsutalvez);
	
	
	percentninte=(float)contexist*100/(float)contninte;
	
	printf ("\n====================================================================================\n\n");
	
	printf ("A porcentagem dos que não tem interesse e tem rede existente é de: %.2f%%",percentninte);
	
	printf ("\n====================================================================================\n\n");
	
	percentapntem=contapntem*100/(float)contap;
	percentaptem=contaptem*100/(float)contap;
	
	printf ("A porcentagem dos pesquisados de apartamento que não tem rede instalada é de: %.2f%%\n",percentapntem);
	printf ("A porcentagem dos pesquisados de apartamento que tem rede instalada é de: %.2f%%\n\n",percentaptem);
}
