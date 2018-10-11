#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float at,an,cal;
	puts("Confirme sua maioridade");
	puts("Digite o ano atual");
	scanf("%f",&at);
	puts("Digite o seu ano de nascimento");
	scanf("%f",&an);
		cal = at-an;
		printf("Aprintf sua idade atual é %.0f\n", cal);

		if(cal>=18){
			printf("Você alcançou a maioridade\n");
		}else{
			puts("Você ainda não alcançou a maioridade\n");
		}
	system("PAUSE");
	return(0);
}
