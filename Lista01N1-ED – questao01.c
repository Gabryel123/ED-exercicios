/*
Fun��o : Fazer um programa para receber um n�mero inteiro de segundos do usu�rio e imprimir a quantidade
		correspondente em horas, minutos e segundos.
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/

#include <stdio.h> 
#include <stdlib.h>

int main() { 
int qtd_segundos, aux, horas, minutos, segundos; 
	scanf("%d", &qtd_segundos); 
	aux = qtd_segundos; 
	segundos = aux % 60; 
	aux /= 60; 
	minutos = aux % 60; 
	horas = aux / 60; 
	printf("\n%d segundos correspondem a %d horas, %d minutos e %d segundos\n", qtd_segundos, horas, minutos, segundos); 
return 0; 
} 
