// Criação um programa que calcule e mostre o volume de uma esfera

#include <stdio.h>
#include <math.h>

float volumeEsfera (float raio){ //Fórmula do volume da esfera(Volume=PI.r^3.4/3)
    float volume;
    volume=M_PI*raio*raio*raio*4/3;
    return volume;
}


int main (){
    float raio, volume;
    printf ("Insira o valor do raio:");
    scanf ("%f", &raio);

    volume=volumeEsfera (raio);

    printf ("%f", volume);

    return 0;
}
