/* calcular area de um trapezio a formula eu tive que pesquisar não lembrava mais, mas depois da formula 
tudo foi eu que fiz*/

/*inclusão de bibliotecas */
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
/* iniciação do corpo do algoritmo*/
int main(){
	/*variaveis */
	int A,B,b,h;
	/*entrada de dados */
	printf("digite o valor da BASE maior\n");
	scanf("%d",&B);
	printf("digite o valor da base menor\n");
	scanf("%d",&b);
	printf("digite o valor da  altura\n");
	scanf("%d",&h);
	/*a conta a se fazer */
	A=((B+b)*h)/2;
	/*o resultado
	saida de dados */
	printf("a area e igual a:%d",A);
	
	return(0);
	
		

}
