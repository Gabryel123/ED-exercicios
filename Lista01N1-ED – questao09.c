/*
Fun��o : Ler dois n�meros e informar o dividendo, o divisor, o quociente e o resto.
Autor : Gabryel Yarzon - Sistemas de Informa��o 4�Periodo
Data : 11/03/2018	
Observa��es: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, quo;
    int res;
    printf("Mostrador de Dividendo, Divisor, Quociente e Resto de dois numeros \n" );
    printf("Informe o Primeiro Numero \n");
    scanf("%f", &a);
    printf("Informe o Segundo Numero \n");
    scanf("%f", &b);
    quo = a/b;
    res = a/b;    
    printf("O Dividendo dos numero informados = %f \n", a);
    printf("O Divisor dos numeros informados = %f \n", b);
    printf("O Quociente dos numeros informados = %f \n", quo);
    printf("O Resto da Divisao dos numeos informados = %f \n", res);



    return 0;

}
