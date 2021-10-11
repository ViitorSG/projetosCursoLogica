#include <stdio.h>

int main(){
	//variaveis
	int num1, num2, num3, num4, q1, q2, q3, q4;

	//entradas
	printf("Informe o n�mero 1: ");
	scanf("%d", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%d", &num2);
	printf("Informe o n�mero 3: ");
	scanf("%d", &num3);
	printf("Informe o n�mero 4: ");
	scanf("%d", &num4);

	//processamentos
	q1 = num1 * num1;
	q2 = num2 * num2;
	q3 = num3 * num3;
	q4 = num4 * num4;

	if (q3 >= 1000){
		printf("%d", q3);
	}else{
		//saida
		printf("num1: %d, Quadrado: %d\n", num1, q1);
		printf("num2: %d, Quadrado: %d\n", num2, q2);
		printf("num3: %d, Quadrado: %d\n", num3, q3);
		printf("num4: %d, Quadrado: %d\n", num4, q4);
	}
}
