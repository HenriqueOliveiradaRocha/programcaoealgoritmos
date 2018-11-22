#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	int i;
	float r, vol;
	
	
	for (i=1; i<=2; i++){
	puts("Calcule a área de uma esfera");
	puts ("digite o raio de uma esfera");
	scanf("%f", &r);
	
	vol = 4/3*(3,14*(r*r*r));
	
	printf("O volume da esfera é %f.2", vol);
}
	system("PAUSE");
	return (0);
}
