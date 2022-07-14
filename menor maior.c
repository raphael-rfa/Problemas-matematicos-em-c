//esse codigo e para definir o maior e o menor de cinco numeros 
#include <stdio.h>

int main ()
{
/*nessa daqui eu dei uma pequena roubada se fosse eu faria
a leitura de todos os numeros e depois descobriria o maior e o menor porem 
depois de feito dei uma espiada no gabarito e então vi que era melhor fazer a comparação 
de acordo os numeros fossem entrando no algoritmo e adotei essa forma*/  
	int maior, menor, num1,num2;
	
	printf("Digite o primeiro numero :\n");
	scanf("%d",&num1);
	printf("digite o segundo numero :\n");
	scanf("%d",&num2);
	
// na epoca fiz com (if-else) porem hoje eu faria com ordenacao de vetor depois eu subo um algoritmo desse jeito
	
	if (num1 > num2)
	{
		maior = num1;
		menor = num2;
		
		printf ("digite o terceiro numero : \n");
		scanf("%d",&num1);
	
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf("digite o quarto numero :\n");
		scanf("%d",&num1);
		
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf("digite o quinto numero : \n");
		scanf("%d",&num1);
		
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf ("%d e o maior numero e %d e o menor numero\n",maior,menor);		
		
	}
	else
	{
		maior = num2;
		menor = num1;
		
		printf ("digite o terceiro numero : \n");
		scanf("%d",&num1);
	
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf("digite o quarto numero : \n");
		scanf("%d",&num1);
		
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf("digite o quinto numero : \n");
		scanf("%d",&num1);
		
		if (num1 > maior)
		{
			maior = num1;	
		}
		if (num1 < menor)
		{
			menor = num1;	
		}
		
		printf ("%d e o maior numero e %d e o menor numero\n",maior,menor);
	}
	
	return(0);
}
