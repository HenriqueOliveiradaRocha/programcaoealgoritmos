algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 29/08/2018
// Se��o de Declara��es 
var
DP,DP1,DP2 :real
total :real
inicio
// Se��o de Comandos 
escreval("c�lcule o juros da poupan�a")
escreval("digite o valor do deposito")
leia(DP)
DP <- DP+(DP*0.01)
DP1 <- DP+(DP*0.01)
DP2 <- DP1+(DP1*0.01)
escreval("O valor em conta ap�s 3 meses ser�",DP2)
fimalgoritmo
