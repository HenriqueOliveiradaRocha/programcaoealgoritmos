algoritmo "semnome"
// Função :
// Autor :
// Data : 12/09/2018
// Seção de Declarações 
var
CustoFabri, Valore, valorea :real
inicio
// Seção de Comandos
escreval("Calcule o valor de um carro novo")
escreval ("Digite o Custo de fábrica do carro")
leia (CustoFabri)
Se(CustoFabri>=10000.00)entao
 Valore<- CustoFabri*(0.28+0.45)+1
      escreval("O valor do carro novo será",Valore)
 senao
    valorea <- CustoFabri*(0.28+0.5)+1
        escreval("O valor será", valorea)
        fimse
fimalgoritmo
