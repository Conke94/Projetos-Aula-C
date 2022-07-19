//Informa se um número inteiro n dado é perfeito ou não.

#include <stdio.h>

int main (){
    int num, soma_divisores=0, divisor;

    printf ("Insira um numero:");
    scanf ("%d", &num);

    for (divisor=1; divisor<=num/2; divisor++)
        if (num%divisor==0){
            soma_divisores+=divisor;
        }

    if (soma_divisores==num)
        printf ("O numero eh perfeito!");
    else
        printf ("O numero nao eh perfeito");

    return 0;
}
