//inclui as bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//declaração das variáveis
	float area, comprimento, raio;
	
	//entrada de dados
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);
	
	//processamento
	//valor do PI 3.14159
	area = 3.14159 * raio * raio;
	comprimento = 2 * 3.14159 * raio;
	//saída de dados
	
	printf("Area = %f e comprimento = %f\n", area, comprimento);
	
	system("PAUSE");
	return 0;
}
