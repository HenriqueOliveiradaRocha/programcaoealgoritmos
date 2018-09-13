algoritmo "semnome"
// Função :
// Autor :
// Data : 12/09/2018
// Seção de Declarações 
var
altu,Femi,Masc :real
Sexo :caracter
inicio
// Seção de Comandos
escreval ("Descubra seu peso ideal")
escreval("Digite sua altura")
leia (altu)
escreval ("Digite F ou M de acordo com seu genero")
leia(Sexo)
Se(Sexo= "F") entao
Femi <- (62.1*altu)-44.7
       escreval("Seu peso ideal é ",Femi)
       Senao
       Masc <- (72.7*altu)-58
       escreval("Seu peso idel é ",Masc)
Fimse
fimalgoritmo
