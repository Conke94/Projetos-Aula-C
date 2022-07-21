//Programa que mostra a maior sequencia crescente observada

#include <stdio.h>

int main (){
    int seq_max=0, seq_atual=1, num1, num2=1;

    printf ("Insira o primeiro numero da sequencia:");
    scanf ("%d", &num1);

    while (num2>0){
        printf ("Insira o proximo numero da sequencia:");
        scanf ("%d", &num2);

        if (num2>num1)
            seq_atual++;
        else{
            if (seq_atual>seq_max)
                seq_max=seq_atual;
            seq_atual=1;
        }
        num1=num2;
    }
    printf ("O tamanho da maior sequencia eh:%d", seq_max);

    return 0;
}
