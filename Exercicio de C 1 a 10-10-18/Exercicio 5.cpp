#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,res;
	puts("Veja a diferença de uma subtração");
	puts("Digite o primeiro valor");
	scanf("%d",&a);
	puts("Digite o segundo valor");
	scanf("%d",&b);
	if(a>b){
		res = a - b;
		printf("A diferença entre %d e %d é %d\n", a, b, res);
	}else if(a==b){
		puts("Os valores são iguais\n");
	}else{
		res = b - a;
		printf("A diferença entre %d e %d é %d\n", b, a, res);
	}
	
	system("PAUSE");
	return(0);
}
