//OBI 2015

#include <stdio.h>

int main (){
    int n_dias, acessos_hoje, acessos_totais=0, dia_milhao=0, i;

    printf ("Insira a quantidade de dias para o projeto:");
    scanf ("%d", &n_dias);

    for (i=0; i<n_dias; i++){
        printf("Insira a quantidade de acessos no dias de hoje:");
        scanf ("%d", &acessos_hoje);
        acessos_totais+=acessos_hoje;
        if (acessos_totais>=1000000 && dia_milhao==0)
            dia_milhao=i+1;
    }
    if (dia_milhao!=0)
        printf ("O dia em que o site cehgou a 1M de visualizacoes foi: %d", dia_milhao);
    else
        printf ("-1");
    return 0;
}
