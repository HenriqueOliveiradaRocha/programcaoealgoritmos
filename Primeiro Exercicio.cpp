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
	printf ("O resultado da soma � %.2f\n",res);
	printf ("Ol� Mundo.\n");
	system("PAUSE");
	return(0);
}
