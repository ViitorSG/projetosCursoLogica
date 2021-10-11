# include <stdio.h>

//algoritmo que recebe 2 numeros e divide por 2

int main(){
	//Declaração de variaveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	//entradas
	printf("informe a quantidade mínima: ");
	fflush( stdout );
	scanf("%d", &quantidade_minima);
	fflush( stdout );

	printf("informe a quantidade máxima: ");
	fflush( stdout );
	scanf("%d", &quantidade_maxima);
	fflush( stdout );

	//processamento
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//saida
	printf("O estoque médio é %.2f", estoque_medio);

}
