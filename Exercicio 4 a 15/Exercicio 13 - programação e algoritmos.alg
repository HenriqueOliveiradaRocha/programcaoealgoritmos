algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 29/08/2018
// Se��o de Declara��es 
var
A,B,C,Delt,X1,X2 :real
inicio
// Se��o de Comandos
escreval("resolva a esqua��o do segundo grau")
escreval("Digite o valor de A")
leia(A)
escreval("Digite o valor de B")
leia(B)
escreval("Digite o valor de C")
leia(C)
Delt <- (B*B)-4*A*C
X1 <- -B-(raizQ(Delt))/(2*A)
X2 <- -B+(raizQ(Delt))/(2*A)
escreval("O resulta da equa��o � para x1",X1," para x2",X2)
fimalgoritmo
