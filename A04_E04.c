//Retorna o valor pedido no menor número de cédulas possíveis

#include <stdio.h>

int main (){
    int valor;

    printf ("Insira o valor desejado:");
    scanf ("%d", &valor);

    printf ("%d cedulas de 100\n", valor/100);
    valor%=100;
    printf ("%d cedulas de 50\n", valor/50);
    valor%=50;
    printf ("%d cedulas de 20\n", valor/20);
    valor%=20;
    printf ("%d cedulas de 10\n", valor/10);
    valor%=10;
    printf ("%d cedulas de 5\n", valor/5);
    valor%=5;
    printf ("%d cedulas de 2\n", valor/2);
    printf ("%d cedulas de 1", valor%2);

    return 0;
}
