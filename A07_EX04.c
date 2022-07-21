//Programa que verifica se o número dado contém um dígito inserido.

#include <stdio.h>

int main (){
    int num, digito, achou=0;

    printf ("Insira um numero e um digito:");
    scanf ("%d %d", &num, &digito);

    while (num!=0 && achou==0){
        if (num%10==digito)
            achou=1;
        num/=10;
    }
    if (achou)
        printf ("O digito %d esta inserido no numero", digito, num);
    else
        printf ("O digito inserido nao esta presente no numero", num);

    return 0;
}
