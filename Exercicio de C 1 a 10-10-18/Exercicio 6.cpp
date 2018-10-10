#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,del,x1,x2;
	puts("Faça uma equação do segundo grau");
	puts("Digite o valor de A");
	scanf("%f",&a);
	puts("Digite o valor de B");
	scanf("%f",&b);
	puts("Digite o valor de C");
	scanf("%f",&c);
	del= pow(b,2)-4*a*c;
	if(del<0){
		printf("O valor de delta é %.2f portanto não é possivel continuar a conta\n",del);
		
	} else if (del == 0){
		x1= -b+(sqrt(del))/(2*a);
		x2= -b-(sqrt(del))/(2*a);
		printf("O valor de x1 e x2 é respectivamente %.2f e %.2f\n",x1, x2);
	}else{
		x1= -b+(sqrt(del))/(2*a);
		x2= -b-(sqrt(del))/(2*a);
		printf("O valor de x1 e x2 é respectivamente %.2f e %.2f\n",x1, x2);
	}
	
	system ("PAUSE");
	return (0);
}
