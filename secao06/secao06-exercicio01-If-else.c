#include <stdio.h>

int main(){
	//declarando as variaveis
	int n;

	//entrada
	printf("Informe um número:");
	fflush( stdout );
	scanf("%d", &n);
	fflush( stdout );

	//processamento
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
