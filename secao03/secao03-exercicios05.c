# include <stdio.h>

int main(){
	//declarando as variaveis
	int metros, centimetros;

	//entradas
	printf("informe o valor em metros: ");
	fflush( stdout );
	scanf("%d", &metros);
	fflush( stdout );

	//processamento
	centimetros = (metros * 100);

	//saida
	printf("%d metros em centímetros é %d", metros, centimetros);

}
