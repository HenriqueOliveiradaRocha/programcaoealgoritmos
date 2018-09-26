#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float n1,n2,n3,n4,MA;
	char N[12];
	puts ("Digite o nome do aluno");
	scanf("%s",&N);
	puts("Digite a primeira nota");
	scanf("%f",&n1);
	puts("Digite a segunda nota");
	scanf("%f",&n2);
	puts("Digite a terceira nota");
	scanf("%f",&n3);
	puts("Digite a quarta nota");
	scanf("%f",&n4);
	MA=(n1+n2+n3+n4)/4;
	printf("%s Sua média é %.2f\n",N, MA);
	system("PAUSE");
	return(0);
}
