#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//200 mat
int main (void)
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	struct levantamento
	{
	    char codimv[20];
		char bairro[10];
		char tipo[15];
		int moradores;
		char interesse[7];
		char rede[8];
		
	}levant[127];
	
	int i,mat=199,bai,tp,inte,rd;
	
	for (i=0; i<127; i++)
	{
		mat++;
		bai=(rand()%3)+1;
		tp=rand()%2;
		levant[i].moradores=(rand()%7)+1;
		inte=rand()%3;
		rd=rand()%2;
		
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
		else if (tp==1)
		{
			strcpy (levant[i].tipo,"Apartamento");
		}
		
		printf ("%s\t%s\n",levant[i].codimv,levant[i].bairro,levant[i].tipo);
	}
	
	printf ("==================================================================\n");
}
