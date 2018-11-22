#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float QTD, Valor;
	int Con = 1;
	do{
		printf("Calculo de pesca Nº %d\n", Con);
		puts("Quantidade pescada ?");
		scanf("%f",&QTD);
		if(QTD>50){
			Valor = 4*(QTD - 50);
			printf("O valor da multa é: %.2f R$\n", Valor);
		}else{
			puts("Quantidade dentro do limite\n");
		}
		Con++;
	}while(Con<=5);
}
