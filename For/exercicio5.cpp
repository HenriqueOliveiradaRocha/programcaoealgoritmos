#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	for(int I=1;I<=5;I++){
		puts("Veja a classificação da sua idade");
	puts ("Digite sua idade");
	scanf("%d", &idade);
	
	if ( idade<5 || idade>18){
		
		if ( idade<5){
		
		
		printf ("sua idade é %d,, você não tem idade suficiente\n", idade);}
		
		else { printf ("sua idade é %d, você é senior\n", idade);}
		
		
		}
		else {
			if (idade>=5 && idade<=7 || idade>= 8 && idade<=10 ){
				
				if ( idade>=5 && idade<=7 ){
								
				printf("Sua idade é %d, categoria infantil A\n", idade);
			}
			
			else{printf("Sua idade é %d, categoria infantil B\n", idade);
				
			}
			}
		}
			if (idade>= 11 && idade<=13 ){
				printf("Sua idade é %d, categoria junvenil A\n", idade);	
			}
			else {printf("Sua idade é %d, categoria juvenil B\n", idade);
			}
		
	}
	
		
		
		system("PAUSE");
		return(0);
}
