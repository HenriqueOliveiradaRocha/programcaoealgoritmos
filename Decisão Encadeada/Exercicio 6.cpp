#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	puts("Decubra sua faixa etária");
	puts("Digite sua idade");
	scanf("%d",&idade);
	if(idade>=5 && idade<=7){
		printf("Faixa etária Infantil A: %d anos \n",idade);
	}else{
		if(idade>=8 && idade<=10){
			printf("Faixa etária Infantil B: %d anos \n",idade);
		}else{
			if(idade>=11 && idade<=13){
				printf("Faixa etária Juvenil A: %d anos \n",idade);
			}else{
				if(idade>=14 && idade<=17){
					printf("Faixa etária Juvenil B: %d anos \n",idade);
				}else{
					if(idade >= 18){
						printf("Faixa etária Senior: %d anos \n",idade);
					}else{
						puts("Idade invalida");
					}
				}
			}
		}
	}
}
