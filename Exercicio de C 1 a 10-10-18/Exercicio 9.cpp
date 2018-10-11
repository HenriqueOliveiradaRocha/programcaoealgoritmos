#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char senha[5];
	int res;
	gets(senha);
	res= strcmp(senha,"12345");
	if(res==0){
		puts("Senha valida");
	}else{
		puts("Senha invalida");
	}
	system("PAUSE");
	return(0);
}
