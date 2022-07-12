//Escreva um programa que -ao receber o preço do álcool, da gasolina e a quilometragem do carro com esses combustíveis- informa se é mais econômico abastecer com álcool ou com gasolina.
//No caso de não haver diferença de custo entre abastecer com álcool ou gasolina, o abastecimento é feito com gasolina.

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
