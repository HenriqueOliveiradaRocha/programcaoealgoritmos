#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float B, A, Area;
	int Con = 1;
	do{
		printf("Calcule a �rea do %d� tri�ngulo\n", Con);
		puts("Digite a altura");
		scanf("%f",&A);
		puts("Digite a Base");
		scanf("%f",&B);
		Area = A*B/2;
		printf("O valor da �rea �: %.2f\n", Area);
		Con++;
	}while(Con <= 8);
}
