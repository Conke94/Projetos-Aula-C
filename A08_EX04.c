//OBI 2017

#include <stdio.h>

int main (){
    int num1, num2, num3, tam_montanha, i, varios_picos=0;

    printf ("Insira o tamanho da montanha:");
    scanf ("%d", &tam_montanha);

    printf ("Insira o primeiro tamanho:");
    scanf ("%d", &num1);
    printf ("Insira o proximo tamanho:");
    scanf ("%d", &num2);

    for (i=2; i<tam_montanha; i++){
        printf ("Insira o proximo tamanho:");
        scanf ("%d", &num3);

        if (num2<num3 && num2<num1)
            varios_picos=1;

        num1=num2;
        num2=num3;
    }
    if (varios_picos)
        printf ("A montanha tem mais de um pico");
    else
        printf ("A montanha possui apenas um pico");

    return 0;
}
