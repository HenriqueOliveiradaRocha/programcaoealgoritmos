#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
	int main (){
		setlocale (LC_ALL,"portuguese");
		float X,N,resp;
		puts("Digite um valor para X");
		scanf("%f",&X);
		puts("Digite o valor para N");
		scanf("%f",&N);
		resp=pow((X*N),2);
		printf("O resultado da conta (X*N)² é %.2f\n",resp);
		system ("PAUSE");
		return(0);
	}
