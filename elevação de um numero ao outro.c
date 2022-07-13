// inclusao de bibliotecas
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
// inicio do corpo
int main ()
{
// variaveis 
	float num1,num2, resultado;
//entrada de dados
	printf("digite o primeiro numero:\n");
	scanf("%f",&num1);
	printf("digite o segundo numero:\n");
	scanf("%f",&num2);
//operacao e atribuicao do valor
	resultado = pow (num1,num2);
//resultado
	printf ("\n o %.2f elevado a %.2f e igual a:\n %.2f",num1,num2, resultado );
//final do algoritmo
	return(0);
}
