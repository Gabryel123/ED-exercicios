/*
Fun��o : Exibi todos os m�ltiplos de num2 de 1 at� num1 (com num1 e num2 sendo digitados pelo usu�rio).
Autor : Gabryel Yarzon - Sistemas de Informa��o
Data : 19/03/2018
Observa��es:
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,x;
	scanf("%d %d",&num1,&num2);
	x=1;
	for(x;x<=num1;x++){
		if(x%num2==0){
			printf("%d\n",x);
		}
	}
	system("pause");
	return 0;
}
