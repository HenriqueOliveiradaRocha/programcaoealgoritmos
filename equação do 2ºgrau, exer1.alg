algoritmo "semnome"
// Função :
// Autor :
// Data : 12/09/2018
// Seção de Declarações 
var
a,b,c,x1,x2,del :real
inicio
// Seção de Comandos
escreval ("Calcule a equação do segundo grau")
escreval ("Digite o valor de A")
leia (a)
escreval ("Digite o valor de B")
leia(b)
escreval ("Digite o valor de C")
leia (c)
del <- (a*a)+b+c
x1 <- -b+raizq((b*b)-4*a*c)/(2*a)
x2<- -b-raizq((b*b)-4*a*c)/(2*a)
escreval("O valor de delta é ",del," o valor de X1 ",x1," o valor de X2 ",x2)

fimalgoritmo
