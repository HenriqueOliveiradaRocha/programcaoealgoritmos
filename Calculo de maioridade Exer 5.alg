algoritmo "semnome"
// Função :
// Autor :
// Data : 12/09/2018
// Seção de Declarações 
var
Anonasc,Resul,Anoatu :inteiro
inicio
// Seção de Comandos
escreval("Calculo de maioridade")
escreval ("Escreva o ano do seu nascimento")
leia(Anonasc)
escreval("Digite o ano atual")
leia(Anoatu)
Resul <- Anoatu-Anonasc
se(Resul >=18)entao
      escreval("Você já alcançou a maioridade")
senao
       escreval("Você ainda não alcançou a maior idade sua idade é ",Resul)
fimse
fimalgoritmo
