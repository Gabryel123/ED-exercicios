/*
Fun��o : Fazer um programa para receber 5 valores inteiros do usu�rio e mostrar a sua m�dia (que pode n�o ser
		inteira).
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/

#include <stdio.h> 
#include <stdlib.h>

int main() { 
int n1, n2, n3, n4, n5;
float media; 
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5); 
	media = (n1 + n2 + n3 + n4 + n5) / 3.0;  
	printf("\nM�dia: %f", media); 
return 0; 
} 
