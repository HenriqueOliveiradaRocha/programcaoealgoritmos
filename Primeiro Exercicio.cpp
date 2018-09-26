#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main (){
	  	setlocale(LC_ALL,"portuguese");
	float a,b,res;
	puts ("Digite o primeiro valor");
	scanf ("%f",&a);
	puts ("Digite o segundo valor");
	scanf("%f",&b);
	res= a*b;
	printf ("O resultado da soma é %.2f\n",res);
	printf ("Olá Mundo.\n");
	system("PAUSE");
	return(0);
}
