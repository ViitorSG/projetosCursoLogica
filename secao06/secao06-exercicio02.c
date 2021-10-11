#include <stdio.h>

int main(){
	//variáveis
	int numero, a, b;

	//entradas
	printf("informe um número: ");
	fflush( stdout );
	scanf("%d", &numero);
	fflush( stdout);

	//processamento
	if(numero > 0){
		a = numero;
		printf("O %d numero é positivo.", numero);
	}else{
		b = numero;
		printf("O %d numero é negativo.", numero);
	}
}
