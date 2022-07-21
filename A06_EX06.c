//Programa que calcula o valor do numero pi
#include <stdio.h>

#define N_TERMOS 200000

int main (){
    int i, denominador=1, sinal=1;
    float pi=0.0;

    for (i=0; i<N_TERMOS; i++){
        pi+=1/(float)denominador*sinal;
        sinal=-sinal;
        denominador+=2;
    }

    printf ("O numero pi eh:%f", pi*4);
    return 0;
}
