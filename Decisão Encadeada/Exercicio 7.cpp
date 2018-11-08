#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia, dia1, mez, mez1, ano, ano1;
	puts("digite o dia");
	scanf("%d",&dia);
	puts("Digite o mês");
	scanf("%d",&mez);
	puts("Digite o ano\n");
	scanf("%d",&ano);
	puts("Segunda data\n");
	puts("Digite o dia");
	scanf("%d",&dia1);
	puts("Digite o mês");
	scanf("%d",&mez1);
	puts("Digite o ano");
	scanf("%d",&ano1);
	if(ano<ano1){
		printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia, mez, ano, dia1,mez1,ano1);
	}else{
		if(mez<mez1){
			printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia, mez, ano, dia1,mez1,ano1);
		}else{
			if(dia<dia1){
			
			printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia, mez, ano, dia1,mez1,ano1);
	}else{
		if(ano1<ano){
			printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia1, mez1, ano1, dia, mez, ano);
		} else{
		if(mez1<mez){
			printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia, mez, ano, dia1,mez1,ano1);
		}else{
			if(dia1<dia){
				printf("Data na sequencia: %d / %d / %d e %d / %d / %d", dia, mez, ano, dia1,mez1,ano1);
			}else{
				puts("Data invalida");
			}
		}
	}
	}
		}
	}
}
