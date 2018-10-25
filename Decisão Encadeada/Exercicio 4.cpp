#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int MES;
	puts("Que mês estamos ? ");
	puts("Digite o mês de 1 a 12");
	scanf("%d",&MES);
	switch (MES){
		case 1: puts("Estamos em janeiro\n");break;
		case 2: puts("Estamos em fevereiro");break;
		case 3: puts("Estamos em março");break;
		case 4: puts("Estamos em abril");break;
		case 5: puts("Estamos em maio");break;
		case 6: puts("Estamos em junho");break;
		case 7: puts("Estamos em julho");break;
		case 8: puts("Estamos em agosto");break;
		case 9: puts("Estamos em setembro");break;
		case 10: puts("Estamos em outubro");break;
		case 11: puts("Estamos em novembro");break;
		case 12: puts("Estamos em dezembro");break;
		default: puts("Numero invalido \n");
	}
}
