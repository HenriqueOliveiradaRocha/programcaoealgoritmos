#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float VH, HT, Depend, SL, SB;
	int Benef = 300;
	int Con = 1;
	do{
		puts("Digite o valor da hora");
		scanf("%f",& VH);
		puts("Digite a quantidade de horas trabalhadas");
		scanf("%f",& HT);
		puts("Digite a quantidade de dependentes");
		scanf("%f",& Depend);
		SB = VH*HT;
		SL = SB+(Depend*Benef);
		printf("O seu salário bruto é: %.2f\n",SB);
		printf("O seu salário liquido é: %.2f\n",SL);
		Con++;	
	}while(Con<= 10);
}
