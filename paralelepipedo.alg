algoritmo "semnome"
// Função :
// Autor :
// Data : 05/09/2018
// Seção de Declarações 
var
lado,altura,comprimento,area,volume,perimetro,diagonal :real
inicio
// Seção de Comandos
escreval ("Calcule a área o volume e o perimetro de um paralelepípedo")
escreval ("digite o valor da altura")
leia (altura)
escreval ("digite o valor do lado")
leia (lado)
escreval ("digite o valor do comprimento")
leia (comprimento)
area <- comprimento*altura
volume <- lado*altura*comprimento
perimetro <- lado+altura+comprimento
diagonal <- raizQ(lado*2 + altura*2 + comprimento*2)
escreval("O valor da área é ",area)
escreval("O valor do volumeé ",volume)
escreval("O valor do perimetro é ",perimetro)
escreval("O valor da diagonal é ",diagonal)

fimalgoritmo
