//Recebe uma coordenada e determina em qual quadrante ela está

#include <stdio.h>

int main (){
    int x, y;
    printf ("Insira as coordenadas:");
    scanf ("(%d,%d)", &x, &y);


    if (x==0){
        if (y==0)
            printf ("A coordenada esta na origem");
        else
            printf ("A coordenada esta no eixo das abcissas");
    }

    else if (y==0)
        printf ("A coordenada esta no eixo das ordenadas");

    else if (x>0){
        if (y>0)
            printf ("A coordenada esta no primeiro quadrante!");
        else
            printf ("A coordenada esta no quarto quadrante");
    }

    else{
        if (y>0)
            printf ("A coordenada esta no segundo quadrante");
        else
            printf ("A coordenada esta no terceiro quadrante");
    }

    return 0;
}
