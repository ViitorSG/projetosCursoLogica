# include <stdio.h>
// std = Standard(padrao
// io = input/output(entrada/saida)

//algoritmo que recebe 2 numeros e multiplica pelo 1.

int main(){
	//Dlara��o de variaveis
	int num1, num2, soma, multiplicacao;

	//Entradas
	printf("Favor, informar qual o primeiro n�mero: ");
	fflush( stdout );
	scanf("%d", &num1);
	fflush( stdout );

	printf("Favor, informar qual o segundo n�mero: ");
	fflush( stdout );
	scanf("%d", &num2);
	fflush( stdout );

	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//saida
	printf("O resultado da multiplica��o � %d", multiplicacao);

}
