# include <stdio.h>
// std = Standard(padrao
// io = input/output(entrada/saida)

//algoritmo que recebe 2 numeros e multiplica pelo 1.

int main(){
	//Dlaração de variaveis
	int num1, num2, soma, multiplicacao;

	//Entradas
	printf("Favor, informar qual o primeiro número: ");
	fflush( stdout );
	scanf("%d", &num1);
	fflush( stdout );

	printf("Favor, informar qual o segundo número: ");
	fflush( stdout );
	scanf("%d", &num2);
	fflush( stdout );

	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//saida
	printf("O resultado da multiplicação é %d", multiplicacao);

}
