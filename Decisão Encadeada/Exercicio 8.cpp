#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float A, B, C;
	puts("Defina seu triangulo");
	puts("Digite o primeiro valor");
	scanf("%f",&A);
	puts("Segundo valor");
	scanf("%f",&B);
	puts("Terceiro valor");
	scanf("%f",&C);
	if(A>B-C && A<B+C ){
		puts("� um triangulo");
	}else{
		puts("N�o � um triangulo");
	}
	if(A==B && A==C){
		printf("Esse tri�ngulo � equilatero\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
	}else{
		if(A!=B && A!=C && C!=B){
			printf("Esse tri�ngulo � um escaleno\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
		}else{
			if(C!=A){
				printf("Esse tri�ngulo � um is�sceles\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
			}
		}
	}
}
