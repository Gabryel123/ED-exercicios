/*
Fun��o : Leia uma velocidade em km/h (quil�metros por hora) e apresente convertida em m/s (metros por
		segundo). A f�rmula de convers�o � M = K/36, sendo K a velocidade em km/h e M em m/s.
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float vkm, vms;
	printf("\n Velocidade em km/h ");
	scanf("vkm");
	vms=vkm/3.6;
	printf("\n A velocidade %f km/h");
	printf("\n Equivale a %f em m/s");
}
