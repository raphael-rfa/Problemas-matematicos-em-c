//atividade de peso ideal, nao e imc, peso ideal de acordo com a altura
#include <stdio.h>

int main()
{
	float altura,peso;
	int sexo;
//nessa atividade eu achei melhor fazer com (case) para criar um (menu) na parte de digite o sexo
	
	printf("Digite a sua altura\n");
	scanf("%f",&altura);
	printf("Digite o  sexo\n 1- Masculino \n 2- Feminino\n");
	scanf("%d",&sexo);
	switch(sexo)
	{
		case 1 : 
			peso = (72 * altura )- 58;
			printf ("Peso ideal para voce e :%.2f",peso);
			break;
		
		case 2 : 
			peso = (62.1 * altura) - 44.7;
			printf ("Peso ideal para voce e :%.2f",peso);
			break; 
		default:
//como sempre tem um engraçadinho um (default) salva
			printf("Opcao invalida.\n");
			break;
	}
	return(0);
			
	}
