algoritmo "semnome"
// Função :
// Autor :
// Data : 29/08/2018
// Seção de Declarações 
var
A,B,C,Delt,X1,X2 :real
inicio
// Seção de Comandos
escreval("resolva a esquação do segundo grau")
escreval("Digite o valor de A")
leia(A)
escreval("Digite o valor de B")
leia(B)
escreval("Digite o valor de C")
leia(C)
Delt <- (B*B)-4*A*C
X1 <- -B-(raizQ(Delt))/(2*A)
X2 <- -B+(raizQ(Delt))/(2*A)
escreval("O resulta da equação é para x1",X1," para x2",X2)
fimalgoritmo
