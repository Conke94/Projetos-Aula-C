//Programa em C que recebe 5 n�meros reais, lidos usando a fun��o scanf, e mostra a m�dia dos 2 primeiros n�meros, dos 3 primeiros n�meros...
//Importante: o programa deve usar 5 vari�veis para os n�meros, onde media � uma �nica vari�vel que deve ser reaproveitada para todas as m�dias.

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
