algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 10/09/2018
// Se��o de Declara��es 
var
VH,HT,SL,SB,BO :real
DEP :inteiro
inicio
// Se��o de Comandos
escreval ("C�lculo de sal�rio")
escreval ("Digite o valor da hora trabalhada")
leia(VH)
escreval ("Digite a quantidade de horas trabalhadas")
leia(HT)
escreval("Digite o numero de dependentes")
leia(DEP)
SB <-HT+VH
BO <-300+DEP
SL <-SB+BO
escreval ("O sal�rio bruto � ",SB," e o sl�rio liquido � de",SL)
fimalgoritmo
