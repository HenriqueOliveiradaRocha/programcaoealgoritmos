#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"Portuguese");
	float a,b;
	puts("apresentação em forma crescente");
	puts("Digite o primeiro valor");
	scanf("%f",&a);
	puts("Digite o segundo valor");
	scanf("%f",&b);
	if(a>b){
		printf("O maior valor é %.2f e %.2f\n", a, b);
	}else{
		printf("O maior valor é %.2f e %.2f\n", b, a);
	}
	system ("PAUSE");
	return(0);
}
