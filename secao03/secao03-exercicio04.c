# include <stdio.h>

//algoritmo que recebe dois numeros e soma os dois.

int main(){
	//declarando variaveis
	int num1, num2, soma;

	//entradas
	printf("Informe o primeiro n�mero: ");
	fflush( stdout );
	scanf("%d", &num1);
	fflush( stdout );

	printf("informe o segundo n�mero: ");
	fflush( stdout );
	scanf("%d", &num2);
	fflush( stdout );

	//processamento
	soma = num1 + num2;

	//saida
	printf("O resultado da soma � %d", soma);

}
