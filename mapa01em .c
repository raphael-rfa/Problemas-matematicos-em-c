//algoritmo de abastecimento de aviao objetivo decidir se o aviao tem capacidade suficiente para o trajeto
#include <stdio.h>
#include <stdlib.h>

int main (){
	int capacidade,km01,km02,oqtem,totalg0,totalg1;
//pra que ficasse mais interativo decidi criar uma variavel de nome para o aviao
	char nome[20];
	float media;
	
	printf("Qual o nome da aeronave ?:\n");
	scanf("%s",&nome);
	printf("Qual a media de litros por km do  %.20s ?:\n",nome);
	scanf("%f",&media);
	printf("Qual a capacidade maxima de combustivel do %.20s :\n",nome);
	scanf("%d",&capacidade);
	printf("Quantos km tem o percurso planejado:\n ");
	scanf("%d",&km01);
	printf("E quantos km tem a rota alternativa:\n ");
	scanf("%d",&km02);
	printf("Quanto de combustivel ja tem no tanque do %.20s:\n ",nome);
	scanf("%d",&oqtem);
/*nas operacoes eu consegui reduzir para uma linha gracas a uma dica do meu pai
sobre a porcentagem (30%)ja que 1.3 ja descbre os 30 pocento e adiciona a variavel */
	totalg0 = ((km01+km02)*media)*1.3;
	
	if (oqtem >= 0)
	{
	
		totalg1=totalg0-oqtem;
		if (totalg1 > capacidade ) 
		{
			printf ("Voo Reprovado, reveja seu planejamento.");
			
		}
	
		else
		{
			printf ("\nVoo Aprovado, bom voo!");
			printf ("\n trecho principal %d \ntrecho alteernativo %d \n total com combustivel %d \n necessario abastecer %d\n",km01,km02,totalg0,totalg0-oqtem);
		}
			
	}
	else
		if (totalg0 > capacidade) 
		{
			printf ("Voo Reprovado, reveja seu planejamento.");
		}	
		else{
			printf ("\n Voo Aprovado, bom voo!\n");
			printf ("\n trecho principal %d \ntrecho alteernativo %d \n total com combustivel %d \n necessario abastecer %d\n",km01,km02,totalg0,totalg0-oqtem);
		}	
		
		return(0);
}
