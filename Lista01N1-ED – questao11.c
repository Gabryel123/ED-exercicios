/*
Fun��o : L� o pre�o de um par de sapatos numa loja e escreve com um desconto de x%. X � fornecido pelo usu�rio.
Autor : Gabryel Yarzon - Sistemas de Informa��o
Data : 19/03/2018
Observa��es:
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float num,des;
	printf("Informe o valor: ");
	scanf("%f",&num);
	printf("Informe a porcentagem de desconto: ");
	scanf("%f",&des);
	num=num-((num*des)/100);
	printf("O valor ficou: R$ %.2f\n",num);
	system("pause");
	return 0;
}
