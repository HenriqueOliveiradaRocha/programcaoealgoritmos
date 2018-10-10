#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"Portuguese");
	float a,b,res;
	puts("Faça a soma de dois numeros");
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	res=a+b;
	printf("O resultado da soma é %.2f\n",res);
	if (res>25){
		printf("A soma dos numeros é maior que 25\n");
	}else{
		printf("O resultado é menor que 25\n");
	}
	system("PAUSE");
return(0);	
}
