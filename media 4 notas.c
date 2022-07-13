// em breve terá um algoritmo de notas mais completo esse fiz tem um tempinho ja 
# include <stdio.h>
# include <stdlib.h>
int main (){
	float n1,n2,n3,n4,media;
	printf (" escreva nota 1\n");
	scanf("%f",&n1);
	printf (" escreva nota 2\n");
	scanf("%f",&n2);
	printf (" escreva nota 3\n");
	scanf("%f",&n3);
	printf (" escreva nota 4\n");
	scanf("%f",&n4);
// eu podia fazer a conta dentro do printf podia mas nao quis se eu descobri que e melhor dentro do printf eu coloco por enquanto
	media= (n1+n2+n3+n4)/4;
//como são notas eu reduzi o float a apenas duas casas decimais para ficar mais legivel 
	printf ("\n a media e:%.2f",media);
	return(0);
}
