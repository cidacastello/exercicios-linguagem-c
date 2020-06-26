#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	
	//declaração das variáveis
	float posicaoInicial, velocidadeInicial,aceleracao,posicaoFinal;
	int tempo = 60 ;
	printf("*****Posicao do veiculo em M.U.V. *****\n\n");
	printf("*****Informe os dados abaixo: *****\n\n");
	
	//entrada de dados
	printf("Posicao Inicial: ");
	scanf("%f", &posicaoInicial);
	printf("Velocidade Inicial: ");
	scanf("%f", &velocidadeInicial);
	printf("Aceleracao: ");
	scanf("%f", &aceleracao);
	
	//processamento
	posicaoFinal = posicaoInicial + (velocidadeInicial*tempo) + (aceleracao/2)*pow(tempo,2);
	
	//saída de dados
	printf("\nA posicao final e: %.2f\n\n", posicaoFinal);
	getch();	
	return 0;
}

