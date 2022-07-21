//Programa que calcula o quociente e o resto da divisão de dois números inteiros positivos dados, usando apenas as operações de soma e/ou subtração.

#include <stdio.h>

int main (){
    int dividendo, divisor, quociente, i;

    printf ("Insira o numero que ira ser dividido e seu respectivo divisor:");
    scanf ("%d %d", &dividendo, &divisor);

    for (i=0;i<=dividendo-divisor;i+=divisor)
        quociente++;

    dividendo-=quociente*divisor;
    printf ("Quociente:%d\nResto:%d", quociente, dividendo);
    return 0;
}
