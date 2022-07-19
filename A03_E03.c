//Mostra qual número inteiro é o maior (utilizando 3 variáveis e condicionais)

#include <stdio.h>

int main (){
    int num1, num2, num3;
    printf ("Insira os numeros:");
    scanf ("%d %d %d", &num1, &num2, &num3);

    int maior = num1;

    if (num2>maior)
        maior=num2;
    if (num3>maior)
        maior=num3;

    printf ("O maior numero eh: %d", maior);

    return 0;
}
