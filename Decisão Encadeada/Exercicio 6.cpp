#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	puts("Decubra sua faixa et�ria");
	puts("Digite sua idade");
	scanf("%d",&idade);
	if(idade>=5 && idade<=7){
		printf("Faixa et�ria Infantil A: %d anos \n",idade);
	}else{
		if(idade>=8 && idade<=10){
			printf("Faixa et�ria Infantil B: %d anos \n",idade);
		}else{
			if(idade>=11 && idade<=13){
				printf("Faixa et�ria Juvenil A: %d anos \n",idade);
			}else{
				if(idade>=14 && idade<=17){
					printf("Faixa et�ria Juvenil B: %d anos \n",idade);
				}else{
					if(idade >= 18){
						printf("Faixa et�ria Senior: %d anos \n",idade);
					}else{
						puts("Idade invalida");
					}
				}
			}
		}
	}
}
