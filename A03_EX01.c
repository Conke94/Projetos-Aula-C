//Escreva um programa que -ao receber o pre�o do �lcool, da gasolina e a quilometragem do carro com esses combust�veis- informa se � mais econ�mico abastecer com �lcool ou com gasolina.
//No caso de n�o haver diferen�a de custo entre abastecer com �lcool ou gasolina, o abastecimento � feito com gasolina.

#include <stdio.h>

int main (){
    float alcoholPrice, gasolinePrice, kmGasoline, kmAlcohol;

    printf ("Insira o preco do alcool e da gasolina:");
    scanf ("%f %f", &alcoholPrice, &gasolinePrice);
    printf ("Insira a quilometragem do carro com alcool e com gasolina:");
    scanf ("%f %f", &kmAlcohol, &kmGasoline);

    if (kmAlcohol/alcoholPrice > kmGasoline/gasolinePrice)
        printf ("Eh melhor abastecer com alcool");
    else
        printf ("Eh melhor abastecer com gasolina");

    return 0;
}
