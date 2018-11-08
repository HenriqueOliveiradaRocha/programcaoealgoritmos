#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1, nota2, nota3 , nota4, media;
	puts("Descubra sua nota");
	puts("Digite a primeira nota");
	scanf("%f",&nota1);
	puts("Digite a segunda nota");
	scanf("%f",&nota2);
	puts("Digite a terceira nota");
	scanf("%f",&nota3);
	puts("Digite a quarta nota");
	scanf("%f",&nota4);
	media= (nota1+nota2+nota3+nota4)/4;
	if(media >=9){
		printf("Sua média é A: %.2f\n ", media);
	}else{
		if(media>=7 && media<9){
			printf("Sua média é B: %.2f\n",media);
		}else{
			if(media>=5 && media<7){
				printf("Sua média é C: %.2f\n",media);
			}else{
				if(media>=2.5 && media<5){
					printf("Sua média é D: %.2f\n",media);
				}else{
					if(media<2.5){
						printf("Sua média é E: %.2f\n",media);
					}else{
						puts("Nota invalida.");
					}
				}
			}
		}
	}
	return 0;
}
	
