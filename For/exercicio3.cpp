#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main() {
	 
	 setlocale(LC_ALL, "Portuguese");
	 int i;
	 float r,alt,area;
	 
	 
	 for(i=1;i<=5;i++){
	 puts("Calcule a �rea de uma lata");
	 puts("Digite o raio");
	 scanf ("%f", &r);
	 puts("Digite a altura de uma lata");
	 scanf("%f", &alt);
	 
	  area = 2*(3,14*r*alt);
	  
	  printf("A �rea externa da %d� lata � %.2f",i,
	   area );
}
	  system ("PAUSE");
	  return (0);
	
}
