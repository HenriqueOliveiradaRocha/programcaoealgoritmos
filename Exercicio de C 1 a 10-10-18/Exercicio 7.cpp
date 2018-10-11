#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float alt,peso;
	char sex;
	puts("Calcule o seu peso ideal");
	puts("Digite sua altura");
	scanf("%f",&alt);
	puts("Digite seu sexo M ou F");
	scanf("%s",&sex);
	if(sex == 'M'){
		peso= (72.7*alt)-58;
		printf("O seu peso ideal é %.2f\n",peso);
	}else{
		peso=(62.1*alt)-44.7;
		printf("O seu peso ideal é %.2f\n",peso);
	}
	
	
	
	system ("PAUSE");
	return (0);
}
