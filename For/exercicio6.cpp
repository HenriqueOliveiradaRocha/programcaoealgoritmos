#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int i;
	float a,b,c;
	
	
	for(i=1;i<=5;i++){
	puts("Calculo das medidas de um triâgulo");
	puts ("digite o lado A a do triangulo");
	scanf("%f", &a);
	puts ("digite o lado B do triangulo");
	scanf("%f", &b);
	puts ("digite o lado C do triangulo");
	scanf("%f", &c);
	
	if(a==b && a==c ){printf("equilátero\n");}
	else{if(a==b && b!=c || a==c && c!=b){printf("isósceles\n");}
	else{if(a!=b && a!=c && b!=c){printf("escaleno\n");}
	
	}
}
	
}
}
