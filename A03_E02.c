//Programa que inverte os dígitos de um número de 3 algarismos

#include <stdio.h>
int main (){
    int numero, invertido;
    printf ("Insira um numero:");
    scanf ("%d", &numero);

    invertido=numero%10*100;
    numero/=10;
    invertido+=numero%10*10;
    numero/=10;
    invertido+=numero;

    printf ("O numero com os digitos invertidos vale %d", invertido);

    return 0;
}
