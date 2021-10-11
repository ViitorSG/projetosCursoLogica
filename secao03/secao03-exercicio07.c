# include <stdio.h>

int main(){

	//declaração das variaveis
	float altura, peso_ideal;

	//entrada
	printf("Qual sua altura? ");
	fflush( stdout );
	scanf("%f", &altura);

	//processamento
	peso_ideal = (72.7 * altura) - 58;

	//saida
	printf("seu peso ideal seria %.2f", peso_ideal);

}
