//Programa que calcula o quociente e o resto da divis�o de dois n�meros inteiros positivos dados, usando apenas as opera��es de soma e/ou subtra��o.

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
