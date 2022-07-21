#include <stdio.h>

#define TAM_SOMA 100000

int main (){
    int i;
    float soma=0.0;

    for (i=1; i<=TAM_SOMA; i++){
        if (i%2)
            soma+=1/(float)i;
        else
            soma+=(-1)/(float)i;
    }
    printf ("O resultado do somatorio 1 eh:%.20f\n", soma);
    soma=0.0;

    for (i=TAM_SOMA; i>=1; i--){
        if (i%2)
            soma+=1/(float)i;
        else
            soma+=(-1)/(float)i;
    }
    printf ("O resultado do somatorio 2 eh:%.20f", soma);

    return 0;
}
