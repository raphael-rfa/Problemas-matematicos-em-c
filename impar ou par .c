//este algoritmo serve para definir se um numero e impar ou par
#include <stdio.h>
#include <stdlib.h>
int main()
{
//eu tinha criado uma variavel para o (resto) porem como so usaria ela uma vez retirei
	int num;
	printf("Escreva um numero inteiro e eu direi se ele e impar ou par: \n");
	scanf("%d",&num);
// decidi fazer a operação dentro do (if)
	if (num % 2 == 0)
	{
		printf("o numero %d e par", num);
	}else{
		printf("%d e impar",num);
	} 
	
	return (0);

}
