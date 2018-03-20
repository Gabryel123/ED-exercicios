/*
Fun��o : Criar um programa para calcular e imprimir o sal�rio l�quido de um (pobre) professor. Os dados
		fornecidos ser�o: o valor da hora-aula, n�mero de aulas dadas no m�s e percentual de desconto do
		INSS.
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
 float vha,nad,inss, salario, desconto;
 printf("Informe o valor da hora aula: ");
 scanf("%f",&vha);
 printf("Informe o numero de aulas dadas: ");
 scanf("%f",&nad);
 printf("Informe o valor do percentual de desconto do INSS: ");
 scanf("%f",&inss);
 salario = vha * nad;
 desconto = salario * inss /100;
 printf("\n\nSalario liquido e: %3.2f\n\n",salario - desconto);
 system("PAUSE");
 return 0;
}
