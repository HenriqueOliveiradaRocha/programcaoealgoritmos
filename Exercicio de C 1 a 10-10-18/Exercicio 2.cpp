#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	int a;
	puts ("Digite um valor");
	scanf ("%d",&a);
	if (a%2==0){
		puts ("O numero é par");
	}else{
		puts("O numero digitado é impar");
	}
	
	system ("PAUSE");
	return (0);
}
