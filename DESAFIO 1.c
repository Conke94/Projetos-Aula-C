//Programa que calcula um número elevado ao cubo

#include <stdio.h>

int cubo (int numero){
    int potencia= numero*numero*numero;
    return potencia;
}

int main (){
    int numero, potencia;
    printf ("Insira o numero:");
    scanf ("%d", &numero);

    potencia= cubo(numero);
    printf ("%d", potencia);

    return 0;
}
