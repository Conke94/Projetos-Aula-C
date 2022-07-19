#include <stdio.h>

int main (){
    int cc, verificador;

    printf ("Insira o numero da sua conta-corrente:");
    scanf ("%d", &cc);

    verificador=cc/100+cc%100/10*10+cc%10*100;
    verificador+=cc;

    if (verificador>1000)
        verificador%=1000;

    verificador=verificador/100+verificador%100/10*2+verificador%10*3;
    verificador%=10;

    printf ("O numero verificador eh:%d", verificador);
    return 0;
}
