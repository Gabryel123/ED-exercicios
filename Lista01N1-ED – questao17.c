/*
Fun��o : Imprime o cubo de todos os inteiros at� um n�mero N informado pelo usu�rio.
Autor : Gabryel Yarzon - Sistemas de Informa��o
Data : 19/03/2018
Observa��es:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int num,x;
	scanf("%d",&num);
	x=0;
	for(x;x<=num;x++){
		printf("%d (2) = %g\n",x,pow(x,3));
	}
	system("pause");
	return 0;
}
