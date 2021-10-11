#include <stdio.h>
#include
int main(){
	//Vari�veis
	int numero;

	//entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//processamento
	if(numero % 2 == 0){
		if(numero > 0){
		printf("O numero e %d é par e positivo.", numero);
	}else{
		printf("O número %d é par e negativo.", numero);
	}
	}else{
		if(numero > 0){
			printf("O n�mero %d � �mpar e positivo.", numero);
		}else{
			printf("o n�mero %d � �mpar e negativo.", numero);
		}
	}
}
