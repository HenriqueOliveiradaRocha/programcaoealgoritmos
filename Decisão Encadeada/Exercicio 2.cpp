#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float KG, Altura, IMC;
	puts("Descubra seu IMC");
	puts("Digite seu peso");
	scanf("%f",&KG);
	puts("Digite sua altura");
	scanf("%f",&Altura);
	IMC= KG/(Altura*Altura);
	if(IMC<18){
		printf("Você está muito magro, status: Magreza, IMC: %.2f\n",IMC);	
	}else{
		if(IMC>=18 && IMC<25){
			printf("Sua massa está dentro do aceitavel, status: Saudável, IMC: %.2f\n",IMC);}
			else{
				if(IMC>=25 && IMC<30){
				printf("Você está acima do peso, Status: Sobrepeso, IMC: %.2f\n", IMC);}
				else{
					if(IMC>=30){
						printf("Você está muito acima do peso, Status: Obesidade, IMC: %.2f\n", IMC);}
						else{
							puts("Massa ou Altura invalidos");
						}
				}
			}
	}
}
