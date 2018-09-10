algoritmo "semnome"
// Função :
// Autor :
// Data : 10/09/2018
// Seção de Declarações 
var
VH,HT,SL,SB,BO :real
DEP :inteiro
inicio
// Seção de Comandos
escreval ("Cálculo de salário")
escreval ("Digite o valor da hora trabalhada")
leia(VH)
escreval ("Digite a quantidade de horas trabalhadas")
leia(HT)
escreval("Digite o numero de dependentes")
leia(DEP)
SB <-HT+VH
BO <-300+DEP
SL <-SB+BO
escreval ("O salário bruto é ",SB," e o slário liquido é de",SL)
fimalgoritmo
