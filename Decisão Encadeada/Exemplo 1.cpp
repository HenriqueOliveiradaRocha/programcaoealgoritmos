#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
		int A,B,C;
		puts("Digite o 1º valor");
		scanf("%d",&A);
		puts("Digite o 2º valor");
		scanf("%d",&B);
		puts("Digite o 3º valor");
		scanf("%d",&C);
		
			if(A<B&&A<C){
				if(B<C){
					printf("%d - %d - %d\n",A, B, C );
				}
				else{
					printf("%d - %d - %d\n", A, C, B);
				}
			}
			else{
				if (B<A && B<C){
					if (A<C){
						printf("%d - %d - %d\n", B, A, C);
					}else{
						printf("%d - %d - %d\n", B, C, A);
					}
				
			}
			else{
				if(A<B){
					printf("%d - %d - %d\n", C, A, B);
				}else{
					printf("%d - %d - %d\n", C, B, A);
				}
			}
		}
			system("PAUSE");
	return(0);
}
