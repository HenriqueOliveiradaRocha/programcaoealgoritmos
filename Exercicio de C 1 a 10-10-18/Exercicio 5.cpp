#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,res;
	puts("Veja a diferen�a de uma subtra��o");
	puts("Digite o primeiro valor");
	scanf("%d",&a);
	puts("Digite o segundo valor");
	scanf("%d",&b);
	if(a>b){
		res = a - b;
		printf("A diferen�a entre %d e %d � %d\n", a, b, res);
	}else if(a==b){
		puts("Os valores s�o iguais\n");
	}else{
		res = b - a;
		printf("A diferen�a entre %d e %d � %d\n", b, a, res);
	}
	
	system("PAUSE");
	return(0);
}
