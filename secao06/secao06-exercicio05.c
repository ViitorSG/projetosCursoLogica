#include <stdio.h>

int main(){
	//variaveis
	float p, m;
	char e[8] = "excesso";

	//Entradas
	printf("informe o peso dos peixes:");
	fflush( stdout );
	scanf("%f", &p);
	fflush( stdout );

	//processamento
	if(p > 50){
		m = (p - 50) * 4.00;
		//saida
		printf("Você devera pagar R$ %.2f em multas.", m);
	}else{
		m = 0;
		e[0] = 0;
		//saídas
		printf("multas: %.2f\n", m);
		printf("Excesso: %d", e[0]);
	}
}
