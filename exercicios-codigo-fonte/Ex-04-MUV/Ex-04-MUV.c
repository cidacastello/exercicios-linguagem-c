#include <stdio.h>
#include <conio.h>

int main(){
	//declara��o e inicializa��o das vari�veis
	float velocidadeInicial=10, aceleracao=3, tempo, velocidade;
		
	printf("***** M.V.U. *****\n\n");	
	
	printf("Informe o tempo em segundos: ");
	
	//entrada de dados
	scanf("%f", &tempo);
	
	//processamento
	velocidade = velocidadeInicial + 3 * tempo;
	
	//sa�da de dados
	printf("\nA velocidade em m/s e: %f\n\n", velocidade);
	getch();	
	return 0;
}
