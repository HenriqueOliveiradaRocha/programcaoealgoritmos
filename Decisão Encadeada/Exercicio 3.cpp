#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int lanches;
	switch (lanches){
		case 1: puts("Lanche escolhido BigMac\n");break;
		case 2: puts("Lanche escolhido Quarteirão\n");break;
		case 3: puts("Lanche escolhido MacChicken\n");break;
		case 4: puts("Lanche escolhido Cheddar MacMelt\n");break;
		case 5: puts("Lanche escolhido MacMax\n");break;
		case 6: puts("Valor invalido\n");break;
	}
	puts("Digite de 1 a 5 para escolher um lanche\n");
	scanf("%d",&lanches);
}
