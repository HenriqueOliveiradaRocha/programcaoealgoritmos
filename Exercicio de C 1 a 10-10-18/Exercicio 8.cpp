#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	float qtd,multa;
	puts("Calcule a multa por excesso");
	puts("Digite a quantidade de peixe pescada");
	scanf("%f",&qtd);
	if(qtd>50){
		multa = (qtd-50)*4;
		printf("O valor da multa ser paga é %.2fR$\n",multa);
	}else{
		puts("Você não ultrapassou a quantidade maxima");
	}
}
