#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int lanches;
	int Con = 1;
	int Valot = 0;
	do{
	puts("Digite a opção desejada:\n");
	puts(" Digite 1 para: BigMac\n Digite 2 para: Quarteirão\n Digite 3 para: MacChicken\n Digite 4 para: Cheddar MacMelt\n Digite 5 para: MacMax");
	scanf("%d",&lanches);
	switch (lanches){
		case 1: puts("Lanche escolhido BigMac\n");Valot += 10; break;
		case 2: puts("Lanche escolhido Quarteirão\n");Valot += 12;break;
		case 3: puts("Lanche escolhido MacChicken\n");Valot += 8;break;
		case 4: puts("Lanche escolhido Cheddar MacMelt\n"); Valot += 20;break;
		case 5: puts("Lanche escolhido MacMax\n"); Valot += 35; break;
		default:puts("Valor invalido\n");
	}
	printf("Valor Total: %d R$\n", Valot);
	puts("Deseja algo a mais?, se SIM digite 1");
	scanf("%d",&Con);
	}while(Con == 1);
}
