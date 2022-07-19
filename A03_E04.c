//Programa que lê a hora inicial e a hora final de um jogo e calcula a duração do jogo;

#include <stdio.h>

int main (){
    int h0, hf, m0, mf, horas, minutos;
    printf ("Insira o horario inicial do jogo:");
    scanf ("%d:%d", &h0, &m0);
    printf ("Insira o horario final do jogo:");
    scanf ("%d:%d", &hf, &mf);

    if (hf>h0)
        horas=hf-h0;
    else
        horas=24-h0+hf;

    if (mf>m0)
        minutos=mf-m0;
    else{
        minutos=60-m0+mf;
        horas--;
    }

    printf ("O jogo teve duracao de %d horas e %d minutos", horas, minutos);

    return 0;
}
