#include <stdio.h>

//algoritmo para declarar horas trabalhadas no m�s.

int main(){
	//Declara��o das variaveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//entrada
	printf("Qual valor voc� ganha por hora: ");
	fflush( stdout );
	scanf("%f", &valor_por_hora);
	fflush( stdout );

	printf("Quantas horas voc� trabalhou este m�s?  ");
	fflush( stdout );
	scanf("%d", &horas_trabalhadas);
	fflush( stdout );

	//processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//saida
	printf("O seu sal�rio � %.2f", salario);


}
