//elevar o numero ao quadrado e descobrir a raiz quadrada  
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main ()
{
	
	int numero,quadrado,raiz;
	
	printf("Digite o numero \n");
	scanf("%d", &numero);
//funcoes intrinsecas estao ai para serem usadas nao e mesmo entao toma ai
	quadrado= pow (numero,2);
	raiz= sqrt(numero);
	
	printf("\no quadrado de %.2d e %.2d\n",numero,quadrado);
	printf("A raiz quadrada de %.2d e %.2d\n", numero,raiz);
	
	return(0);
	
}
