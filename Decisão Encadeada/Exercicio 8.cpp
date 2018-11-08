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
		puts("é um triangulo");
	}else{
		puts("Não é um triangulo");
	}
	if(A==B && A==C){
		printf("Esse triângulo é equilatero\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
	}else{
		if(A!=B && A!=C && C!=B){
			printf("Esse triângulo é um escaleno\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
		}else{
			if(C!=A){
				printf("Esse triângulo é um isósceles\n Medidas: %.2f -- %.2f -- %.2f", A, B, C);
			}
		}
	}
}
