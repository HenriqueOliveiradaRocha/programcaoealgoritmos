#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float BS,AL,AR;
		puts("Digite a base do ret�ngulo");
		scanf("%f",&BS);
		puts("Digite a altura do ret�ngulo");
		scanf("%f",&AL);
		AR=BS*AL;
		printf("A �rea do ret�ngulo � %.2f\n",AR);
		system("PAUSE");
		return(0);
	}
