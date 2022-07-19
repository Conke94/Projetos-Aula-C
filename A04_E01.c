//Programa que recebe três números distintos e mostra em ordem crescente (usando 3 variáveis)

#include <stdio.h>

int main (){
    float num1, num2, num3;
    printf ("Insira os numeros:");
    scanf ("%f %f %f", &num1, &num2, &num3);

    if (num2>num3 && num2>num1){
        if (num1>num3)
            printf ("Sequencia crescente: %f, %f, %f", num3, num1, num2);
        else
            printf ("Sequencia crescente: %f, %f, %f", num1, num3, num2);
    }
    else if (num3>num1 && num3>num2){
        if (num1>num2)
            printf ("Sequencia crescente: %f, %f, %f", num2, num1, num3);
        else
            printf ("Sequencia crescente: %f, %f, %f", num1, num2, num3);
    }
    else if (num1>num2 && num1>num3){
        if (num2>num3)
            printf ("Sequencia crescente: %f, %f, %f", num3, num2, num1);
        else
            printf ("Sequencia crescente: %f, %f, %f", num2, num3, num1);
    }

    return 0;
}
