#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	int a,b,c;
	
	printf ("Digite três valores e eu os apresentarei de forma decrescente: ");
	scanf ("%d %d %d",&a,&b,&c);
	
	 if (a > b)                                           
           if (b > c) printf("%d %d %d\n", a, b, c);       
           else                                            
               if (a > c) printf("%d %d %d\n", a, c, b);  
               else printf("%d %d %d \n", c, a, b);         
       else                                                
           if (b > c)                                       
               if (a > c) printf("%%d %d %d\n", b, a, c);   
               else printf("%d %d %d\n", b, c, a);         
           else printf("%d %d %d\n", c ,b, a);             
       return 0;
	system ("pause");
	return 0;
}
	
