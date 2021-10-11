#include <stdio.h>

//algoritmo para declarar horas trabalhadas no mês.

int main(){
	//Declaração das variaveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//entrada
	printf("Qual valor você ganha por hora: ");
	fflush( stdout );
	scanf("%f", &valor_por_hora);
	fflush( stdout );

	printf("Quantas horas você trabalhou este mês?  ");
	fflush( stdout );
	scanf("%d", &horas_trabalhadas);
	fflush( stdout );

	//processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//saida
	printf("O seu salário é %.2f", salario);


}
