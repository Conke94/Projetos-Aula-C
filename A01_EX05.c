//Programa em C que recebe 5 números reais, lidos usando a função scanf, e mostra a média dos 2 primeiros números, dos 3 primeiros números...
//Importante: o programa deve usar 5 variáveis para os números, onde media é uma única variável que deve ser reaproveitada para todas as médias.

#include <stdio.h>
int main (){
    float n1, n2, n3, n4, n5;
    float media;

    printf ("Insira os cinco numeros:");
    scanf ("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    media=(n1+n2)/2;
    printf ("A media dos dois primeiros numeros eh: %f\n", media);
    media=(n1+n2+n3)/3;
    printf ("A media dos tres primeiros numeros eh: %f\n", media);
    media=(n1+n2+n3+n4)/4;
    printf ("A media dos quatro primeiros numeros eh: %f\n", media);
    media=(n1+n2+n3+n4+n5)/5;
    printf ("A media dos cinco numeros eh: %f", media);

    return 0;
}
