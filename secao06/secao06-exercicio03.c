#include <stdio.h>

int main(){
	//variaveis
	int numero, p = 0, i = 0;

	//entradas
	printf("informe um número: ");
	fflush( stdout );
	scanf("%d", &numero);
	fflush( stdout );

	//processamento
	if(numero % 2 == 0){
	p = numero;
	}else{
		i = numero;
	}
	printf("%d\n", p);
	printf("%d\n", i);
}
