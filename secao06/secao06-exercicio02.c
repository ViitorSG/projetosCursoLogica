#include <stdio.h>

int main(){
	//vari�veis
	int numero, a, b;

	//entradas
	printf("informe um n�mero: ");
	fflush( stdout );
	scanf("%d", &numero);
	fflush( stdout);

	//processamento
	if(numero > 0){
		a = numero;
		printf("O %d numero � positivo.", numero);
	}else{
		b = numero;
		printf("O %d numero � negativo.", numero);
	}
}
