#include <stdio.h>
#include <conio.h>

int main(){
	//declaração e inicialização das variáveis
	float velocidadeInicial=10, aceleracao=3, tempo, velocidade;
		
	printf("***** M.V.U. *****\n\n");	
	
	printf("Informe o tempo em segundos: ");
	
	//entrada de dados
	scanf("%f", &tempo);
	
	//processamento
	velocidade = velocidadeInicial + 3 * tempo;
	
	//saída de dados
	printf("\nA velocidade em m/s e: %f\n\n", velocidade);
	getch();	
	return 0;
}
