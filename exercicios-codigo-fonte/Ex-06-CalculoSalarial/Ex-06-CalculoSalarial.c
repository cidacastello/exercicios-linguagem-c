#include <stdio.h>
#include <conio.h>
/*
HT -> horas trabalhadas
VH -> valor da hora R$
PD -> percentual de desconto
TD -> total de desconto
SB -> Salario bruto
SL -> Salario l�quido
*/
int main(){
	
	//declara��o das vari�veis
    float horasTrabalhadas, valorHora, salarioLiquido,
    salarioBruto, totalDesconto, desconto;
    
   	printf("*****Informe os dados abaixo: *****\n\n");
   	
   	//entrada de dados
    printf("Horas trabalhadas: ");
   	scanf("%f", &horasTrabalhadas);
   	printf("Valor da hora: ");
   	scanf("%f", &valorHora);
   	printf("Percentual de desconto: ");
   	scanf("%f", &desconto);
   	
   	//processamento
   	salarioBruto = horasTrabalhadas * valorHora;
   	totalDesconto = (desconto / 100) * salarioBruto;
   	salarioLiquido = salarioBruto - totalDesconto;
   	
   	//sa�da de dados
   	printf("Valor do salario liquido R$ %.2f\n", salarioLiquido);
   
  getch();
 return 0;
}
