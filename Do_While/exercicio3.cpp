#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int AN, AA, Res;
	int Con=1;
	do{
		puts("Maioridade?\n");
		printf("%dº Pessoa\n", Con);
		puts("Digite o ano atual");
		scanf("%d",&AA);
		puts("Digite o ano de nascimento");
		scanf("%d",&AN);
		Res = AA - AN;
		if(Res>=18){
			puts("Você atingiu a maioridade\n");
		}else{
			puts("Você ainda é menor\n");
		}
		Con++;
	}while(Con<= 15);
}

