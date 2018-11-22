#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	
	int i;
	setlocale (LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4, md;
	
	for(i=1;i<=5;i++){
	puts("Calcule sua nota anual");
	puts ("Digite sua 1º nota");
	scanf("%f",&n1);
	puts ("Digite sua 2º nota");
	scanf("%f",&n2);
	puts ("Digite sua 3º nota");
	scanf("%f",&n3);
	puts ("Digite sua 4º nota");
	
	scanf("%f",&n4);
	
	md = (n1+n2+n3+n4)/4;
	
	if (md>=9 || md>=7 && md<9 || md>= 5 && md>7){
		
		if(md>=9){
			
			printf("sua nota é %f, você tirou A\n",md);
		}
		
		else {
			if (md>=7 && md<9){
				
				printf ("sua nota é %f, você tirou B\n", md);
			}
			else {
				printf("sua nota é %f, você tirou C\n",md);
			}
			
		}
	}
	else {
		if ( md>=2.5 && md<5 ){
			printf("sua nota é %f, você tirou D\n",md);
		}
		else {
			printf("sua nota é %f, você tirou E\n",md);
		}
	}
}
	return(0);
	
}
