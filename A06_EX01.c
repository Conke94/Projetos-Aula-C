//Programa que lê 10 números inteiros e imprime a média dos números dados, mas somente daqueles cujo valor for menor que 20.

#include <stdio.h>
#define N_NUMEROS 10
//VERSÃO 1
/*
int main (){
    int i=0, num, soma=0, media, menor_20=0;

    while (i<N_NUMEROS){
        printf ("Insira um numero:");
        scanf ("%d", &num);
        if (num<20){
            soma+=num;
            menor_20++;
        }
        i++;
    }

    media=soma/menor_20;

    printf ("A media eh: %d", media);
    return 0;
}
*/
//VERSÃO 2

int main (){
    int num, soma=0, media, menor_20=0;

    for (i=0; i<N_NUMEROS; i++){
        printf ("Insira um numero:");
        scanf ("%d", &num);
        if (num<20){
            soma+=num;
            menor_20++;
        }
    }

    media=soma/menor_20;

    printf ("A media eh: %d", media);
    return 0;
}
