/*
Fun��o : Calcular a �rea de um triangulo Ret�ngulo usando o Teorema de Heron
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 12/03/2018	
Observa��es: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float area,s,a,b,c;
	printf("Longitude a:");
	scanf("%f", &a);
	printf("Longitude b:");
	scanf("%f", &b);
	printf("Longitude c:");
	scanf("%f", &c);
	s=(a+b+b)/(2);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("A area do trinagulo e: %f", area);
	system("pause");
}
