/*
Fun��o : calculo tri�ngulo ret�ngulo.
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
	
	float a, b, h;
	printf("\nDigite o valor de A: ");
	scanf("%f",&a);
	printf("\nDigite o valor de B: ");
	scanf("%f",&b);
	
	h=sqrt((a*a+b*b));
	
	printf("\nA hipotenusa vale: %f", h);
	
}
