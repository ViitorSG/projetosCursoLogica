#include <stdio.h>

int main(){
	//declarando as variaveis
	int n;

	//entrada
	printf("Informe um n�mero:");
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
