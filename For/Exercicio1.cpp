#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_ALL,"Portuguese");
	float a, b, c, del, x1, x2;
	for(int i = 0; i <= 5; i++){
		puts("Equação do segundo grau.");
	puts("Digite um valor para A.");
	scanf("%f", &a);
	puts("Digite o valor de B.");
	scanf("%f", &b);
	puts("Digite o valor de C.");
	scanf("%f", &c);
	del = (pow(b,2)) - (4*a*c);

	if(del >= 0){
		x1 = (-b+(sqrt(del)))/2*a;
		x2 = (-b-(sqrt(del)))/2*a;
		printf("O valor de delta é %.1f, o valor de x1 é %.1f e o valor de x2 é %.1f.\n\n", del, x1, x2);
	}else{
		printf("Delta < 0, não é possível continuar a conta.\n\n");
	}
}
	}

