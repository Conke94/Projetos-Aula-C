//Verifica se os valores podem ser lados de um triângulo e classifica o triângulo

#include <stdio.h>

int main (){
    int l1, l2, l3;

    printf ("Insira as medidas:");
    scanf ("%d %d %d", &l1, &l2, &l3);

    if (l1+l2<l3){
        printf ("As medidas nao formam um triangulo");
        return 0;
    }
    if (l1+l3<l2){
        printf ("As medidas nao formam um triangulo");
        return 0;
    }
    if (l2+l3<l1){
        printf ("As medidas nao formam um triangulo");
        return 0;
    }

    if (l1==l2){
        if (l2==l3)
            printf ("O triangulo eh equilatero");
        else
            printf ("O triangulo eh isosceles");
    }
    else if (l2==l3 || l1==l3)
        printf ("O triangulo eh isosceles");
    else
        printf ("O triangulo eh escaleno");

    return 0;
}
