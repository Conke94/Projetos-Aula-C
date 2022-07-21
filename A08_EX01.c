//Apreseentar a sequência de Collatz a partir de certo número fornecido.

#include <stdio.h>

int main (){
    int tam_sequencia=1, num;
    printf ("Insira o numero incial da sequencia:");
    scanf ("%d", &num);
    printf ("%d -", num);

    while (num!=1){
        if (num%2)
            num=3*num+1;
        else
            num/=2;
        printf (" %d -", num);
        tam_sequencia++;
    }

    printf ("\nO tamanho da sequencia formada foi:%d", tam_sequencia);
    return 0;
}
