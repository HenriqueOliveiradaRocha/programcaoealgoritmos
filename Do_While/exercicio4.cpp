#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	
	setlocale(LC_ALL, "Portuguese");

float cm,mt,dc,mm;
int i, n=1;
do{

printf ("digite uma medida em cm do %d° \n ",n);
scanf("%f", &cm);
 mt = cm/100;
 dc = cm/10;
 mm = cm*10;
 
 printf("Há %.2f , metros na medida informada \n ", mt);
 printf("Há %.2f , metros na medida informada \n ", dc);
 printf("Há %.2f , metros na medida informada \n ", mm);
 
 puts ("se quiser calcular novamente digite 1 ( calcula no máximo 10) ");
 scanf("%d",&i);
 
 n++;
 
}

while(i==1 && n<=10);


 system("PAUSE");
 return(0);

}
