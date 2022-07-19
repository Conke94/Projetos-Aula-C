//Calculo do imposto de renda (valores fictícios)
#include <stdio.h>

#define LIMITE1 1200.25
#define LIMITE2 2300.50
#define LIMITE3 3500.75
#define LIMITE4 4000.00

#define TAXA1 0
#define TAXA2 7.5/100
#define TAXA3 15/100
#define TAXA4 22.5/100
#define TAXA5 27.5/100

int main (){
    float valor, imposto=0, faixa1, faixa2, faixa3, faixa4;

    printf ("Insira o valor recebido:");
    scanf ("%f", &valor);

    faixa1=LIMITE1*TAXA1;
    faixa2=(LIMITE2-LIMITE1)*TAXA2;
    faixa3=(LIMITE3-LIMITE2)*TAXA3;
    faixa4=(LIMITE4- LIMITE3)*TAXA4;


    if (valor<=LIMITE1)
        imposto=valor*TAXA1;
    else if (valor<=LIMITE2)
        imposto=faixa1 + (valor-LIMITE1)*TAXA2;
    else if (valor<=LIMITE3)
        imposto=(valor-LIMITE2)*TAXA3 + faixa1 + faixa2;
    else if (valor<=LIMITE4)
        imposto=faixa1 + faixa2 + faixa3 + (valor-LIMITE3)*TAXA4;
    else
        imposto=faixa1 + faixa2 + faixa3 + faixa4 + (valor-LIMITE4)*TAXA5;

    printf ("O imposto a ser pago sera de:%.2f", imposto);

    return 0;
}
