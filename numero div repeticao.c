/*nesse algoritmo era pra ser apenas para descobrir um numero divisivel por 5 simples mas eu achei tao legal trabalhar com
estrutura de repeticao que quis saber o que daria issa dai */
#include <stdio.h>

int main()
{
	int num,var_cont,resto1,resto2,resto3,resto4,resto5,resto6,resto7,resto8,resto9,resto10;
//aprendi a dar nome de verdade as variaveis nomes que fazem sentido para "manutençao futura" #ilearn 
	var_cont=0;
	
	while (var_cont < 10000 )
	{
		resto1=var_cont % 1;
		resto2=var_cont % 2;
		resto3=var_cont % 3;
		resto4=var_cont % 4;
		resto5=var_cont % 5;
		resto6=var_cont % 6;
		resto7=var_cont % 7;
		resto8=var_cont % 8;
		resto9=var_cont % 9;
		resto10=var_cont % 10;
//nao ficou nada bonito mas me rendeu uma quantidade de endorfina muito alta kkkkk
		if ((resto1 == 0) && (resto2 == 0)&&(resto3 == 0)&& (resto4 == 0)&&(resto5 == 0)&&(resto6 == 0) && (resto7 == 0)&&(resto8 == 0)&& (resto9 == 0)&&(resto10 == 0))
		{
			printf("o %d e divisivel por 1,2,3,4,5,6,7,8,9 e por 10\n",var_cont);
			
		}
		var_cont++ ;
	}
	
	return(0);
}
