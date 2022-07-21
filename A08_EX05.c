//Série harmônica

#include <stdio.h>

#define MIN_TERMO 0.2

int main (){
    int denominador=1;
    float soma=0.0;

    while (1/(float)denominador>MIN_TERMO){
        soma+=1/(float)denominador;
        printf ("%f     ", 1.0/denominador);
        printf ("%f\n", soma);
        denominador++;
    }
    return 0;
}
