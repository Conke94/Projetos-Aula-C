#include <stdio.h>

#define N 100

int main (){
    int limite_max=N+1, limite_min=-1, retorno=4, chute;

    while (retorno!=2){
        chute=(limite_max+limite_min)/2;
        printf ("O numero pensado eh maior(3), menor(1) ou igual (0) ao numero %d:", chute);
        scanf ("%d", &retorno);

        if (retorno==3)
            limite_min=chute;
        else if (retorno==1)
            limite_max=chute;
        else
            printf ("Acertei XD");
    }

    return 0;
}
