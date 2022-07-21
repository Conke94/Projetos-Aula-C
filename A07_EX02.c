//Programa que lê N numeros e diz se eles são crescentes, decrescente ou nada.

#include <stdio.h>

#define N 3

int main (){
    int i, crescente=1, decrescente=1, num1, num2;

    printf ("Insira um numero:");
    scanf ("%d", &num1);

    for (i=1; i<N; i++){
        printf ("Insira um numero:");
        scanf ("%d", &num2);

        if (num2>num1)
            decrescente=0;
        if (num2<num1)
            crescente=0;

        num2=num1;
    }

    if (crescente)
        printf ("A sequencia informada eh crescente");
    else if (decrescente)
        printf("A sequencia informada eh decrescente");
    else
        printf ("A sequencia informada nao eh crescente nem descrescente");

    return 0;
}
