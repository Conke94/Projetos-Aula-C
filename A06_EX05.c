//Programa que lê duas entradas no formato “hora:minuto:segundo” e as soma + testa entrada.

#include <stdio.h>
#define N_HORARIOS 2

int main (){
    int h, hf=0, m, mf=0, s, sf=0;
    int i;

    for (i=0; i<N_HORARIOS; i++){
        printf ("Insira o horario:");
        scanf ("%d:%d:%d", &h, &m, &s);
        if (m>=60 || s>=60){
            printf ("Entrada invalida!");
            return 0;
        }
        hf+=h;
        mf+=m;
        sf+=s;
    }

    if (sf>=60){
        mf+=sf/60;
        sf%=60;
    }
    if (mf>=60){
        hf+=mf/60;
        mf%=60;
    }
    printf ("Hora final- %d:%d:%d", hf, mf, sf);

    return 0;
}
