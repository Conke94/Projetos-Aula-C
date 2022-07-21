//Programa que calcula o fatorial de um numero dado

#include <stdio.h>

int main (){
    int i, num, result=1;
    printf ("Enter a number:");
    scanf ("%d", &num);

    for (i=num; i>1; i--)
        result*=i;

    printf ("The factorial is:%d", result);

    return 0;
}
