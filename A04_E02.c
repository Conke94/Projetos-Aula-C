//Programa que calcula a idade de uma pessoa

#include <stdio.h>

int main (){
    int d0, m0, a0, df, mf, af;

    printf ("Insira sua data de nascimento:");
    scanf ("%d/%d/%d", &d0, &m0, &a0);
    printf ("Insira a data atual:");
    scanf ("%d/%d/%d", &df, &mf, &af);

    if (mf>m0)
        printf ("%d", af-a0);
    else if (mf<m0)
        printf ("%d", af-a0-1);
    else{
        if (df>=d0)
            printf ("%d", af-a0);
        else
            printf ("%d", af-a0-1);
    }

    return 0;
}
