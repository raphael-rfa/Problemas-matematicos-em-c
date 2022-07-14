#include <stdio.h>

int main ()
{
	int num,resto;
	
	printf("digite um numero e eu direi se ele e divisivel por sete e por tres\n");
	scanf("%d",&num);
	
	resto = num % 3 ;
	
	if (resto == 0 )
	{
		printf("o %d e divisivel por tres\n", num);
	}
	else
	{
		printf ("o %d nao e divisivel por tres\n",num);
	}
	
	resto = num % 7 ;
	
	if (resto == 0 )
	{
		printf("o %d e divisivel por sete\n", num);
	}
	else
	{
		printf ("o %d nao e divisivel por sete\n",num);
	}
}
	
