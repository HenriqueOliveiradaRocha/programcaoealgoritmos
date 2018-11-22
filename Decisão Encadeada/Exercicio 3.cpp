#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int lanches;
	puts("Digite a opção desejada");
	puts(" Digite 1 para: BigMac\n Digite 2 para: Quarteirão\n Digite 3 para: MacChicken\n Digite 4 para: Cheddar MacMelt\n Digite 5 para: MacMax");
	scanf("%d",&lanches);
	switch (lanches){
		case 1: puts("Lanche escolhido BigMac\n");break;
		case 2: puts("Lanche escolhido Quarteirão\n");break;
		case 3: puts("Lanche escolhido MacChicken\n");break;
		case 4: puts("Lanche escolhido Cheddar MacMelt\n");break;
		case 5: puts("Lanche escolhido MacMax\n");break;
		default:puts("Valor invalido\n");
	}
}
