#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"Portuguese");
	float a,b,res;
	puts("Fa�a a soma de dois numeros");
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	res=a+b;
	printf("O resultado da soma � %.2f\n",res);
	if (res>25){
		printf("A soma dos numeros � maior que 25\n");
	}else{
		printf("O resultado � menor que 25\n");
	}
	system("PAUSE");
return(0);	
}
