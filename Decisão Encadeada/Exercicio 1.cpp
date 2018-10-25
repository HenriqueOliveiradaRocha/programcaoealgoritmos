#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int Horario;
	
		puts("Veja seu turno");
			puts("Digite seu horario, sem os minutos");
			scanf("%d",&Horario);
			if(Horario>=5 && Horario<13){
				puts("Seu turno é pela manhã");
			}
			else{
				if(Horario>=13 && Horario<21){
					puts("Seu turno é a tarde");}
				else{
					if(Horario>=21 && Horario<5){
						puts("Seu turno é o noturno");}
				else{
					puts("Turno não reconhecido");}		
				} 	
			}
		}
