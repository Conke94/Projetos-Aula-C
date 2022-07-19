//Faça um programa que lê do usuário as seis notas dos juízes e informa a nota final do atleta (eliminando a maior e a menor).

#include <stdio.h>
#define N_JUIZES 6

int main (){
    float nota, menor=10.0, maior=0.0, soma=0.0, media;
    int i;

    for (i=0; i<N_JUIZES; i++){
        printf ("Insira a nota do juiz:");
        scanf ("%f", &nota);

        soma+=nota;

        if (nota>maior)
            maior=nota;
        if (nota<menor)
            menor=nota;
    }
    media=(soma-maior-menor)/(N_JUIZES-2);

    printf ("A nota do atleta eh:%.2f", media);
    return 0;
}
