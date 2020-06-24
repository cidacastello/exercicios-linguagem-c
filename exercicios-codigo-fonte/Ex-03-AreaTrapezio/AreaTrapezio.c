#include <stdio.h>
#include <stdlib.h>
int main(){
	//declaração das variáveis
	 float area, baseMaior, baseMenor, altura ;
	 
	 //entrada de dados
	 printf("Informe a Base maior: ");
	 scanf("%f", &baseMaior);
	 printf("Informe a Base menor: ");
	 scanf("%f", &baseMenor);
	 printf("Informe a altura: ");
	 scanf("%f", &altura);
	 
	 //processamento
	 area = ((baseMaior + baseMenor) / 2 ) * altura;
	 
	 //saída de dados
	 
	 printf("A area do trapezio e: %f\n", area);
	 
	 system("Pause");
	 return 0;
}


