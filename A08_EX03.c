//Sequencia de Fibonacci

#include <stdio.h>

int main (){
    int i, tam_sequencia, num1=0, num2=1, num3;

    printf ("Insira o tamanho da sequencia desejada:");
    scanf ("%d", &tam_sequencia);

    printf ("%d", num1);
    printf (", %d", num2);

    for (i=2; i<tam_sequencia; i++){
        num3=num1+num2;
        printf (", %d", num3);
        num1=num2;
        num2=num3;
    }
}
