algoritmo "semnome"
// Função :
// Autor :
// Data : 29/08/2018
// Seção de Declarações 
var
DP,DP1,DP2 :real
total :real
inicio
// Seção de Comandos 
escreval("cálcule o juros da poupança")
escreval("digite o valor do deposito")
leia(DP)
DP <- DP+(DP*0.01)
DP1 <- DP+(DP*0.01)
DP2 <- DP1+(DP1*0.01)
escreval("O valor em conta após 3 meses será",DP2)
fimalgoritmo
