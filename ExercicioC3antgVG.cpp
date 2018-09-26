#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float BS,AL,AR;
		puts("Digite a base do retângulo");
		scanf("%f",&BS);
		puts("Digite a altura do retângulo");
		scanf("%f",&AL);
		AR=BS*AL;
		printf("A área do retângulo é %.2f\n",AR);
		system("PAUSE");
		return(0);
	}
