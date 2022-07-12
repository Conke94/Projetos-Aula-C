//Programa que converte segundos em dias, horas, minutos e segundos

#include <stdio.h>

int main (){
    int segundos, dias=0, horas=0, minutos=0;
    printf ("Insira a quantidade de segundos:");
    scanf ("%d", &segundos);

    dias=segundos/86400; //Quantidade de segundos em um dia
    segundos%=86400;
    horas=segundos/3600; //Quantidade de segundos em uma hora
    segundos%=3600;
    minutos=segundos/60;
    segundos%=60;

    printf ("Na quantia inserida, existem %d dias, %d horas, %d minutos e %d segundos", dias, horas, minutos, segundos);

    return 0;
}
