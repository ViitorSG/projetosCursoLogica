#include <stdio.h>

int main(){
	//Vari�veis
	int c;
	float n, e = 0, salario, valor_hora = 10.00;

	//entradas
	printf("Informe o c�digo: ");
	fflush( stdout );
	scanf("%d", &c);
	fflush( stdout );
	printf("Informe a quantidade de horas trabalhadas: ");
	fflush( stdout );
	scanf("%f", &n);

	//processamento
	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//saida
		printf("Sal�rio total R$ %.2f\n", salario);
		printf("Sal�rio excedente R$ %.2f", e);
	}else{
		salario = n * valor_hora;
		//saida
		printf("salario total R$ %.2f\n", salario);
		printf("Sal�rio excedente: R$ %.2f", e);
	}

}
