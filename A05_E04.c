//Programa que diz se um n�mero � par ou �mpar (opera�oes bit a bit)

#include <stdio.h>

int main (){
    int num;

    printf ("Insira um numero:");
    scanf ("%d", &num);

    if (num&1)
        printf ("O numero eh impar\n");
    else
        printf ("O numero eh par\n");

    printf ("Jesus te ama!");

    return 0;
}
