algoritmo "semnome"
// Função :
// Autor :
// Data : 12/09/2018
// Seção de Declarações 
var
QtdLim, Multa :real
inicio
// Seção de Comandos
escreval ("Cálcule a multa por excesso de peso")
escreval ("Digite a quantidade pescada")
leia(QtdLim)
Se (QtdLim <50) entao
             escreval("Você não ultrapassou o limite")
       Senao
       Multa<- (QtdLim-50)*4
             escreval("Você ultrapassou o limite a multa é de ",Multa)
       fimse
fimalgoritmo
